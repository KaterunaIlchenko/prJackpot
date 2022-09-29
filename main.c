#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main(){
srand(time(NULL));
int sum = 5000;

int x1 = 0;
int x2 = 0;
int x3 = 0;
int choice;
while(1){
  printf("1)Play the game\n2)Show combinations\n");
  scanf("%d", &choice);
  switch(choice){
    case 1:
    do{
      x1 = rand() % 8;
      x2 = rand() % 8;
      x3 = rand() % 8;
  
      if (x1 == 7 && x2 == 7 && x3 == 7){
          sum = sum + 10000;
          printf("%d%d%d ", x1, x2, x3);
          printf("Jackpot! Balance: %d\n", sum);
          break;
      }
      else if (x1 == 6 && x2 == 6 && x3 == 6){
          sum = sum - 1000;
          printf("%d%d%d ", x1, x2, x3);
          printf(" You lost. Balance: %d\n", sum);
      }
      else if(x1 == x2 && x2 == x3){
          sum = sum + 1500;
          printf("%d%d%d ", x1, x2, x3);
          printf("You win (1500 )points. Balance: %d\n", sum);
      }
      else if (x1 == 5 ||  x1 == 7)
      {
          sum = sum + 50;
          printf("%d%d%d ", x1, x2, x3);
          printf("You win (50 )points. Balance: %d\n", sum);
      }
      else if (x1 == 5 && x2 == 5  || x1 == 7 && x2 == 7)
      {
          sum = sum + 250;
          printf("%d%d%d ", x1, x2, x3);
          printf("You win (250 )points. Balance: %d\n", sum);
      }
      else{
          sum = sum - 100;
          printf("%d%d%d ", x1, x2, x3);
          printf("Wrong combination! Balance: %d\n", sum);
      }
      sleep(1);
  }while (sum > 0);
  if(sum <= 0)
    printf("You lose!");
    break;
    
    case 2:
      printf("COMBINATION: SUM\n777: 10000\n000: 1500\n111: 1500\n222: 1500\n333: 1500\n444: 1500\n55X or 77X: 250\n5XX or 7XX: 50\n");
      break;
    default: return 0;
  }
}
}

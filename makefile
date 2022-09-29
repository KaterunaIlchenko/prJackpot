start: initFunc out rm

initFunc: main.c
	g++ -c main.c -o main.o
	g++ main.o -o start
out: initFunc
	./start

rm: out initFunc
	rm start
	rm main.o

main: main.c fatorial/fatorial.c
	gcc -o main.o main.c fatorial/fatorial.c

test: fatorial/check_fatorial.c
	gcc -o test.o test.c fatorial/check_fatorial.c fatorial/fatorial.c `pkg-config --cflags --libs check` && ./test.o

CFLAGS=-Wall -g

clean:
	rm -f ex1
	rm -f ex3
	rm -f ex5
	rm -f ex4
	rm -f ex6
	rm -f ex8	


all:
	cc ex1.c -o ex1
	cc ex3.c -o ex3
	cc ex4.c -o ex4
	cc ex5.c -o ex5
	cc ex6.c -o ex6
	cc ex8.c -o ex8

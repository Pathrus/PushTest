all : test

test: fonctions_ES.o main.o 
	gcc -o test main.o fonctions_ES.o -Wall -O -lm

fonctions_ES.o : fonctions_ES.c
	gcc -o fonctions_ES.o -c fonctions_ES.c -Wall -O

main.o: main.c
	gcc -o main.o -c main.c -Wall -O

clean: 
		rm -f *.o core

mrproper: clean
		rm -f test1

link: compile
	gcc test.o cstring.o -o test -g -Wall
	rm test.o
	rm cstring.o

compile:
	gcc -c test.c -o  test.o -g  -Wall
	gcc -c cstring.c -o cstring.o -g  -Wall

backtrace:
	gcc backtrace.c -o test -rdynamic -g -Wall

asm:
	gcc asm.c -o test -g -Wall

.PHONY: all test clean
.PHONY: all backtrace clean

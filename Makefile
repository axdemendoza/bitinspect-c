CFLAGS = -std=c11 -Wall -Werror -pedantic -Iinclude -g

bitinspect: src/main.c src/hexdump.c include/hexdump.h 
	gcc src/main.c src/hexdump.c -o bitinspect $(CFLAGS)
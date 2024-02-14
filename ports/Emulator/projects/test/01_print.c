// This C code was automatically generated by Aixt Project
// Device = Emulator
// Board = Software Emulator
// Backend = c

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define uart__print(STR)      printf("%s", STR)
#define uart__println(STR)	printf("%s\n", STR)

void main__init();

enum main__Pin_names {
	a = 0,
	b,
	c,
	d,
	w,
	x,
	y,
	z,
};

void main__init() {
}

int main() {
	main__init();
	uart__print("Printing ");
	uart__println("test program... ");
	return 0;
}
/*
 * Exercise 1-9. Write a program to copy it input to its output, replacing each
 *               string of one or more blanks by a single blank. 
 * 
 * Notes: Feel like there might be a better way to sure up the if conditionals. 
 */

#include <stdio.h>

void main()
{
	int c, bl;

	bl = 0;
	
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++bl;
			if (bl == 1) {
				printf(" ");
			}
		}
		else {
			bl = 0;
			printf("%c", c);
		}
	}	
}

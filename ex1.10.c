/* 
 * Exercise 1-10: Replacing hidden characters with human readable 
 *                characters
 */

#include <stdio.h>

void main()
{
  int c, nl, tb;

	nl = 0;
	tb = 0;
	
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			printf("\\n");
			++nl;
		}
		else if (c == '\t') {
			printf("\\t");
			++tb;
		}
		else
			printf("%c", c);
	}	
	printf("Newlines: %d\n", nl);
	printf("Tabs:   : %d\n", tb);
}

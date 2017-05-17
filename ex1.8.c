#include <stdio.h>

void main()
{
  int c, nl, bl, tb;

	nl = 0;
	bl = 0;
	tb = 0;
	
	while ((c = getchar()) != EOF) {
		if (c == '\n')
			++nl;
		if (c == ' ')
			++bl;
		if (c == '\t')
			++tb;
	}	
	printf("Newlines: %d\n", nl);
	printf("Blanks:   %d\n", bl);
	printf("Tabs:   : %d\n", tb);
}

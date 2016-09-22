#include <stdio.h>
#include "colors.h"

int main(int argc, char *argv[]) {
	char i[2];
	int j = 0;

	i[0] = 'a';
	i[1] = '\0';
	printf( RESET ); 
	while(1) {
		for(i[0] = 'A'; i[0] < 'Z'; i[0]++) {
			printf("%s", j%7 ? BOLD : RESET ); 
			if(j%6 == 0)
				printf(RED "%s", i);
			else if(j%6 == 1)
				printf(GREEN "%s", i);
			else if(j%6 == 2)
				printf(YELLOW "%s", i);
			else if(j%6 == 3)
				printf(BLUE "%s", i);
			else if(j%6 == 4)
				printf(MAGENTA "%s", i);
			else if(j%6 == 5)
				printf(CYAN "%s", i);
			j++;
			if(j%80 == 0)
				printf("\n");
		}
	}
}

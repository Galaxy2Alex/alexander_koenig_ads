#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
	printf("Welcome to Tic Tac Toe (Naughts and Crosses)\n\n");
	
	char gamesave[9] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};

	printf("   %c|%c|%c\n", gamesave[0], gamesave[1], gamesave[2]);
	printf("   -|-|-\n");
	printf("   %c|%c|%c\n", gamesave[3], gamesave[4], gamesave[5]);
	printf("   -|-|-\n");
	printf("   %c|%c|%c\n", gamesave[6], gamesave[7], gamesave[8]);
	
	return 0;
}
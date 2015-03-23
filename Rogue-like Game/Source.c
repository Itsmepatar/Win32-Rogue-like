#include <stdio.h>
#include <stdlib.h>
#include "Header.h"
#include <conio.h>

void mainloop(Player *player){
	char str[8];
	for (;;){
		scanf("%s",&str);
		system("cls");
		player->enfieldval = enfield[player->x][player->y];
		switch (*str){
			case 'w': player->y++; break;
			case 's': player->y--; break;
			case 'a': player->x--; break;
			case 'd': player->x++; break;
			default: printf("'%s' is not a valid command.\n", str);
		}
		player->enfieldval = enfield[player->x][player->y];
		switch (player->enfieldval) {
		case 0: break;
		case 1: break;
		case 2: break;
		case 3: switch (*str){ 
					case 'w':player->y--; break; 
					case 'a':player->x++; break; 
					case 's':player->y++; break; 
					case 'd':player->x--; break;
		}printf("Cannot walk into %s\n", enfieldtypes[3]); break;
		case 4: switch (*str){
					case 'w':player->y--; break;
					case 'a':player->x++; break;
					case 's':player->y++; break;
					case 'd':player->x--; break;
		}printf("Cannot walk into %s\n", enfieldtypes[4]); break;
		case 5: switch (*str){
					case 'w':player->y--; break;
					case 'a':player->x++; break;
					case 's':player->y++; break;
					case 'd':player->x--; break;
		}printf("Cannot walk into %s\n", enfieldtypes[5]); break;
		case 6: break;
		case 7: break;
		case 8: break;
		case 9: break;
		default: break;
		}
		printf("xpos = %d, ypos = %d\n",player->x,player->y);
	}
}

int main(int argv, char** argc){
	Player player;
	printf("Enter your name:\n");
	scanf("%s",&player.name);
	player.health = (1<<9)-1;
	player.x = 5;
	player.y = 5;
	for (int i = 0; i <= (1<<9)-1; i++){
		for (int j = 0; j <= (1<<9)-1; j++) {
			enfield[i][j] = rand() % 10;
		}
	}
	enfield[player.x][player.y] = 0;
	player.enfieldval = enfield[player.x][player.y];
	system("cls");
	mainloop(&player);
}
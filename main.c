#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int calculate_percentage(int x , int y , int percent);
/* Struct Level
	params:
		status (
			-> holds status of the level
			-> S = 'start', F = 'finish'
		)
		id (
			-> id of the Level: eg level 1, 2 etc
		)
*/
typedef struct{
	char status;
	int id;//Level 1, 2, 3 etc.
}Level;
void init_level(Level *level, int x, int y);

typedef struct Board{
	int id;	
}Board;
typedef struct Enemy{
	char symbol;
}Enemy;
typedef struct Obstacle{
	char symbol;
}Obstacle;
typedef struct Knight{
	char symbol;
}Knight;

int main (void)
{
	int m,n,obstacle_count,enemy_count;
	char level;
	printf ("Choose the LINES\n");
	scanf ("%d", &m);
	printf ("Choose the COLUMNS\n");
	scanf ("%d", &n);
	printf ("Choose the difficulty\n");
	printf ("(e)EASY , (m)Medium , (h)HARD\n");
	scanf("%c", &level);
	printf("________________________________________________________________________________\n");

	while (level != ('e') && level != ('m') && level != ('h')){	
		printf ("PLEASE TYPE: (e)EASY , (m)Medium , (h)HARD\n");
		scanf("%c", &level);		
	}	
	if (level == 'e'){
		obstacle_count =calculate_percentage(m,n,5);
		enemy_count =calculate_percentage(m,n,5);
	}
	else if (level == 'm'){
		obstacle_count =calculate_percentage(m,n,5);
		enemy_count =calculate_percentage(m,n,10);
	}else{
		obstacle_count =calculate_percentage(m,n,10);
		enemy_count =calculate_percentage(m,n,10);
	}
	if(obstacle_count && enemy_count && level){
		for (int i = 0; i < 10; i++){
			Level *gameLevel;
			printf ("%d", i);
			init_level(gameLevel,m,n);
			while(gameLevel->status != 'F'){

			}
			printf ("here");
		}
		
	}    	
	return 0;
}
void init_level(Level *level, int x, int y){
	level->status = 'S';
	printf ("%s",level->status);
}
int calculate_percentage(int x , int y , int percent){
	int total,res;
	total= x*y;
	res = total*percent/100;
	return res;
}
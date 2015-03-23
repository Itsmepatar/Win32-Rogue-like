typedef struct {
	char *name;
	unsigned int health : 8;
	unsigned int move1 : 8;
	unsigned int move2 : 8;
	unsigned int move3 : 8;
	int x : 16;
	int y : 16;
	int enfieldval : 16;
	int invitem1 : 8;
	int invitem2 : 8;
}Player;

int enfield[(1 << 9) - 1][(1 << 9) - 1];

char enfieldtypes[10][16] = 
{
	"Grass"			,
	"Dirt"			,
	"Gravel"		,
	"Tree"			,
	"Water"			,
	"Rock"			,
	"Grass-Monster"	,
	"Dirt-Monster"	,
	"Gravel-Monster",
	"Water-Monster"
};
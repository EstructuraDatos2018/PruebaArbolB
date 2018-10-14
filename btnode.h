#include <stdlib.h>
const int MAX = 4;
const int MIN = 2;

struct btnode
{
	btnode();
	~btnode();
	int count;
	int value[MAX + 1];
	btnode *child[MAX + 1];

};


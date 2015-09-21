#pragma once
#include <iostream>
const int size = 50;
class Stroka{
	char *tt;
public:
	Stroka();
	Stroka(char*);
	int printdlstr2();
	bool zamena(char, int);
	void printstr();
	int printdlstr();
	bool proverka(char);
	void printzadsl(char*);
	~Stroka();
};
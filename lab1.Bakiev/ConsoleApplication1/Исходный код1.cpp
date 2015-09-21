#include "Верхний колонтитул.h"
#include <cstring>
#include <iostream>
using namespace std;
Stroka::Stroka()
{
}
Stroka::Stroka(char* text)
{
	this->tt=new char[strlen(text)+1];
	strcpy_s(tt,strlen(text)+1, text);
}
bool Stroka::zamena(char p, int i)
{
	this->tt[i] = p;
	if (true)
	{
		return true;
	}
	else 
	{
		return false;
	}
}
void Stroka::printstr()
{
	cout << "Enter text: ";
	cout << Stroka::tt << endl;
}
int Stroka::printdlstr()
{
	cout << "Length text: " << strlen(tt) << endl;
	return strlen(tt);
}
int Stroka::printdlstr2()
{
	return strlen(tt);
}
bool Stroka::proverka(char prEl)
{
	bool temp = 0;
	for (int i = 0; i < strlen(tt); i++)
	{
		if (prEl == tt[i])
		{
			temp = 1;
		}
	}
	if (temp)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void Stroka::printzadsl(char* prSl)
{
	int c = 0;
	for (int i = 0; i < strlen(this->tt); i++)
	{
		if (prSl[0] == this->tt[i])
		{
			for (int k = 0; k < strlen(prSl); k++)
			{
				if (prSl[k] == this->tt[k+i]) c++;
			}
		}
		if (c == strlen(prSl))
		{
			cout << this->tt << endl;
			break;
			c = 0;
		}
	}
}
Stroka::~Stroka()
{
}
#include "Верхний колонтитул.h"
#include <iostream>
#include <windows.h>
using namespace std;
Stroka mass[5];
char p[50];
char a;
int j;
int const q = 5;
void printoprdlstr(Stroka* mass,int dl)
{
	for (int i = 0; i < q; i++)
	if (dl == mass[i].printdlstr2())
		{
			 mass[i].printstr();
		}
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int c;
	do{
		cout << "1 - Enter text: " << endl;
		cout << "2 - Print text: " << endl;
		cout << "3 - Print lenght text: " << endl;
		cout << "4 - Proverka symbol: " << endl;
		cout << "5 - zamena: " << endl;
		cout << "6 - Opred dl strok: " << endl;
		cout << "7 - Opred spis. str. rot. sod. zad. sl: " << endl;
		cout << "8 - Destryktor: " << endl;
		cout << "Ваш выбор: ";
		std::cin >> c;
		switch (c)
		{
		case 1:
			for (int i = 0; i < q; i++)
			{
				cout << "Print text: ";
				cout << i + 1 << " ";
				std::cin >> p;
				mass[i] = Stroka(p);
			};
			break;
		case 2:
			cout << "Enter el. ot 1 to 5: ";
			std::cin >> j;
			mass[j - 1].printstr();
			break;
		case 3:
			cout << "Enter el. ot 1 to 5: ";
			std::cin >> j;
			mass[j - 1].printdlstr();
			break;
		case 4:
			cout << "Enter el. ot 1 to 5: ";
			std::cin >> j;
			cout << "Enter prover. el.: ";
			std::cin >> a;
			mass[j - 1].proverka(a);
			break;
		case 5:
			cout << "Enter el. ot 1 to 5: ";
			std::cin >> j;
			char sym;
			std::cin >> sym;
			int el;
			std::cin >> el;
			mass[j - 1].zamena(sym, el - 1);
			break;
		case 6:
			int dl;
			cout << "Vvedite kol. el. v stroke: ";
			cin >> dl;
			printoprdlstr(mass, dl);
			break;
		case 7:
			char  prSl[50];
			cout << "Print slovo:";
			cin >> prSl;
			for (int i = 0; i < q; i++)
			{
				mass[i].printzadsl(prSl);
			}	
			break;
		case 8:
			mass->~Stroka();
		}
	} while (c);
}
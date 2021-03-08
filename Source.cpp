#include "Rectangle.h"
#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Rectangle::Pair pair;
	pair.Read();
	pair.Display();
	cout << "Dobutok = " << pair.Dobutok() << endl;

	double A = 0.0;
	double B = 0.0;

	class Rectangle r;
	r.Read();
	r.Display();
	int S = r.Square();
	cout << "Square = " << S << endl;
	double P = r.Perimeter();
	cout << "Perimeter = " << P << endl;

}
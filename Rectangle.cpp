#include "Rectangle.h"
#include <iostream>
#include <math.h>

using namespace std;

void Rectangle::SetA(double value)
{
	if (value > 0)
		pair.SetA(value);
	else
		pair.SetA(0);
}

void Rectangle::SetB(double value)
{
	if (value > 0)
		pair.SetB(value);
	else
		pair.SetB(0);
}


bool Rectangle::Init(double a, double b)
{
	if (a> 0 &&  b > 0)
	{
		SetA(a);
		SetB(b);
		return true;
	}
	else
		return false;
}

void Rectangle::Read()
{
	double A, B;
	do
	{
		cout << "a = "; cin >> A;
		cout << "b = "; cin >> B;
		
	} while (!Init(A, B));
}

void Rectangle::Display() const
{
	pair.Display();
}

double Rectangle::Square() const
{
	double a = pair.GetA();
	double b = pair.GetB();
	double S = a*b;
	return S;
}
double Rectangle::Perimeter() const
{
	double a = pair.GetA();
	double b = pair.GetB();
	double P = a *2+ b*2;
	return P;
}


void Rectangle::Pair::SetA(double value)
{
	a = value;
}

void Rectangle::Pair::SetB(double value)
{
	b = value;
}

bool Rectangle::Pair::Init(double a, double b)
{
	SetA(a);
	SetB(b);
	
	return true;
}

void Rectangle::Pair::Read()
{
	double A, B;
	do
	{
		cout << "a = "; cin >> A;
		cout << "b = "; cin >> B;
		
	} while (!Init(A, B));
}

void Rectangle::Pair::Display() const
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
}

double Rectangle::Pair::Dobutok()
{
	return a * b ;
}

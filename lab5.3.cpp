// lab5.3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <conio.h>

#define N 10000

double F(double x)
{
	double f;
	f = x / (sqrt(x) - 1);
	return f;
}

int main()
{
	double S = 0, x, a, b, h;
	a = 4;
	b = 8;
	//отрезок [a, b] разобьем на N частей
	h = (b - a) / N;
	x = a + h;
	while (x < b)
	{
		S = S + 4 * F(x);
		x = x + h;
		
	}
	S = (h / 3)*(S + F(a) + F(b));
	printf("%f", S);
	_getch();
	return 0;
}

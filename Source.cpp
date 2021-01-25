#include<iostream>
using namespace std;

void ExchangeXOR(int a, int b);
template <typename T> void Exchange(T c, T d);

void main()
{
	setlocale(LC_ALL, "Russian");

	int a = 2;  // 0000 0010
	int b = 5;  // 0000 0101
	double c = 3.13;
	double d = 2.25;

	cout << "Перестановка побитовыми операторами:" << endl;
	cout << a << "\t" << b << endl;
	ExchangeXOR(a, b);

	cout << "Арифметическая перестановка:" << endl;
	cout << c << "\t" << d << endl;
	Exchange(c, d);
}


void ExchangeXOR(int a, int b)
{
	a = a ^ b;      // a = 0000 0111(7)
	b = a ^ b;      // b = 0000 0010(2)
	a = a ^ b;      // a = 0000 0101(5)
	cout << a << "\t" << b <<"\n"<< endl;
}

template <typename T>
void Exchange(T c, T d)
{
	c += d;
	d = c - d;
	c -= d;
	cout << c << "\t" << d << endl;
}
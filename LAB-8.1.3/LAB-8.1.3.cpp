// LAB-8.1.3.cpp
// Сушинський Ігор
// Лабораторна робота №8.1
// Пошук та заміна символів у літерному рядку.
// Варіант 20
// 1 завдання
// Використання стандартних функцій для рядків char[]

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(char* s)
{
	int k = 0,
		pos = 0;
	char* t;
	while (t = strchr(s + pos, ','))
	{
		pos = t - s + 1;
		if (s[pos + 1] == '-')
			k++;
	}

	return k;
}

int main()
{
	setlocale(LC_ALL, "Ukrainian");

	char str[101];

	cout << "Ввести лiтерний рядок:" << endl;
	cin.getline(str, 100);

	cout << "Лiтерний рядок мiстить " << Count(str) << " групи ', -'" << endl;

	return 0;
}
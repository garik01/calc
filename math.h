#pragma once
#include <iostream>
#include <cstdio>

class math
{
	double a, b;
	char sim;

	void oper();

	unsigned long long factorial(unsigned long long x); // Для факториала
	void vivod(unsigned long long result);  // Перегрузка vivod() для факториала

	void vivod(double result);
public:
	math();
	
	void start();

	~math();
};


#pragma once
#include <iostream>
#include <cstdio>

class math
{
	double a, b;
	char sim;

	void oper();

	long int factorial(long int x); //Для факториала
	void vivod(long int result);  

	void vivod(double result);
public:
	math();
	
	void start();

	~math();
};


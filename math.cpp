#include "math.h"

math::math()
{
	system("color 2F");
	setlocale(LC_ALL, "Russian");
}

void math::start()
{
	std::cin >> a 
		>> sim;
	if (sim != '!') std::cin >> b;
	oper();
}

void math::oper()
{
		switch (sim)
		{
		case '+':
			vivod(a + b);
			break;
		case '-':
			vivod(a - b);
			break;
		case '*':
			vivod(a * b);
			break;
		case '/':
			vivod(a / b);
			break;
		case '^':
			vivod(pow(a, b));
			break;
		case '!':
			vivod(factorial(a));
			break;
		case '#':
			vivod(pow(b, 1.0 / a));
			break;
		default:
			std::cout << "Error\n";
			break;
		}
}

unsigned long long math::factorial(unsigned long long x)
{
	if (x < 0) return -1;
	if (x == 0) return 1;
	return x * factorial(x - 1);
}

void math::vivod(double result)
{
	std::cout << a << " " << sim << " " << " " << b << " = " << result << "\n";
}

void math::vivod(unsigned long long result)
{
	std::cout << a << " " << sim << " " << " = " << result << "\n";
}

math::~math()
{
	system("pause");
}

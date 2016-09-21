#include "math.h"

math::math()
{
	system("color 2F");
	setlocale(LC_ALL, "Russian");
}

void math::start()
{
	std::cin >> a >> sim >> b;
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
			vivod(pow(b,1.0/a));
			break;
	default:
		std::cout << "Error\n";
		break;
	}
}

long int math::factorial(long int x)
{
	if (x == 0) return 1;
	return x * factorial(x - 1);
}

void math::vivod(double result)
{
	std::cout << a << " " << sim << " " << " " << b << " = " << result << "\n";
}

void math::vivod(long int result)
{
	std::cout << a << " " << sim << " " << " = " << result << "\n";
}

math::~math()
{
	std::cout << "DEBAG: " << a << " " << sim << " " << " " << b << "\n";
	system("pause");
}

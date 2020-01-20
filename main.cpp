#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

string quadratics;
string calculator;
string bigboy;

void roots()
{
	double A;
	double B;
	double C;
	cout << "Enter A B C values with spaces\n";
	cin >> A >> B >> C;
	double discriminant = sqrt(B *B - 4 *A *C);
	double T = (-B + discriminant) / (2 *A);
	double H = (-B - discriminant) / (2 *A);
	if (discriminant < 0)
	{
		cout << "No roots";
	}
	else
	{
		cout << "Answers are " << T << ", " << H;
	}
}

void vertex()
{
	double A;
	double B;
	double C;
	cout << "Enter A B C values with spaces\n";
	cin >> A >> B >> C;
	double xvertex = -B / 2 * A;
	double yvertex = A *xvertex *xvertex + B *xvertex + C;
	cout << "vertex is (" << xvertex << ", " << yvertex << ")";
}

void all()
{
	double A;
	double B;
	double C;
	cout << "Enter A B C values with spaces\n";
	cin >> A >> B >> C;
	double xvertex = -B / 2 * A;
	double yvertex = A *xvertex *xvertex + B *xvertex + C;
	cout << "vertex is (" << xvertex << ", " << yvertex << ")\n";
	double discriminant = sqrt(B *B - 4 *A *C);
	double T = (-B + discriminant) / (2 *A);
	double H = (-B - discriminant) / (2 *A);
	if (discriminant < 0)
	{
		cout << "No roots";
	}
	else
	{
		cout << "Answers are " << T << ", " << H;
	}
}

void quad()
{

	cout << "Enter vertex, roots, or all\n";
	cin >> quadratics;
	if (quadratics == "vertex")
	{
		vertex();
	}
	else if (quadratics == "roots")
	{
		roots();
	}
	else if (quadratics == "all")
	{
		all();
	}
	else
	{
		cout << "try again idiot\n";
		quad();
	}
}
void add()
{
	int size;
	cout << "Enter amount of numbers\n";
	cin >> size;
	int numbers[size];
	cout << "Enter numbers with spaces between\n";
	for (int i = 0; i < size; i++)
	{
		cin >> numbers[i];
	}
	double sum = 0;
	for (int counter = 0; counter < size; counter++)
	{
		sum = sum + numbers[counter];
	};

	cout << "Sum is " << sum;

}

void subtract()
{
	double x;
	double y;
	cout << "Enter two numbers with spaces between\n";
	cin >> x >> y;
	double z = x - y;
	cout << "Difference is " << z;

}

void multiply()
{
	int size;
	cout << "Enter amount of numbers\n";
	cin >> size;
	int numbers[size];
	cout << "Enter numbers with spaces between\n";
	for (int i = 0; i < size; i++)
	{
		cin >> numbers[i];
	}
	double product = 1;
	for (int counter = 0; counter < size; counter++)
	{
		product = product *numbers[counter];
	};

	cout << "Product is " << product;
}
void divide()
{
	double x;
	double y;
	cout << "Enter two numbers with spaces between\n";
	cin >> x >> y;
	double z = x / y;
	cout << "Difference is " << z;

}
void calc()
{

	cout << "Enter function\n";
	cin >> calculator;
	if (calculator == "add")
	{
		add();
	}
	else if (calculator == "subtract")
	{
		subtract();
	}
	else if (calculator == "multiply")
	{
		multiply();
	}
	else if (calculator == "divide")
	{
		divide();
	}
	else
	{
		cout << "try again idiot\n";
		calc();
	}
}

void line()
{

	double slopeone;
	double slopetwo;
	double yone;
	double ytwo;
	cout << "Enter slopes and y-intercepts with spaces in between (M1, B1, M2, B2)\n";
	cin >> slopeone >> yone >> slopetwo >> ytwo;
	double x = (-yone + ytwo) / (slopeone - slopetwo);
	double y = x *slopeone + yone;
	cout << "Point of intersection is (" << x << "," << y << ")";

}

int main()
{
	cout << "Enter quadratics, linear, or calculator\n";
	cin >> bigboy;
	if (bigboy == "quadratics")
	{
		quad();
	}
	else if (bigboy == "calculator")
	{
		calc();
	}
	else if (bigboy == "linear")
	{
		line();
	}
	else
	{
		cout << "try again idiot \n";
		main();
	}
}

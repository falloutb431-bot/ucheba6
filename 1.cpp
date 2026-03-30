#include <iostream> 

int suma(int a, int b)
{
	return a + b;
}
int raznica(int a, int b)
{
	return a - b;
}
int umnozh(int a, int b)
{
	return a * b;
}
double delenie(int a, int b)
{
	if (b == 0) {
		std::cout << " Ochibka" << std::endl;
		return 0.0;
	}
	return static_cast<double>(a) / b;
}
int main (int argc, char** argv)
{
	int a = 5, b = 10;
	int s = suma(a, b);
	int dif = raznica(a, b);
	int mult = umnozh(a, b);
	double div = delenie(a, b);

	std::cout << a << " + " << b << " = " << s << std::endl;
	std::cout << a << " - " << b << " = " << dif << std::endl;
	std::cout << a << " * " << b << " = " << mult << std::endl;
	std::cout << a << " / " << b << " = " << div << std::endl;

	return 0;
}
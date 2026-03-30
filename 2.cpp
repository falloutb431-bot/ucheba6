#include <iostream> 
int stepen(int value, int power)
{
	int result = 1;
	for (int i = 0; i < power; i++)
	{
		result *= value;
	}
	std::cout << value<< " " << "V stepeni " << power << '=' << result << std::endl;
	return result;
}
int main(int argc, char** argv)
{
	int value = 5, power = 2, result = 1;

	stepen(5, 2);
	stepen(3, 3);
	stepen(4, 4);

	return 0;
}
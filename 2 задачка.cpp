
#include <iostream>

int main()
{

	int first = 1;
	int second = 2;
	int third = first + second;
	int sum = 0;
	while (third < 4000000)
	{
	 if (third % 2 == 0)
	 {
	  sum += third;
	 }
	 first = second;
	 second = third;
	 third = first + second;
	}
	std::cout << sum + 2;
		return 0;
}

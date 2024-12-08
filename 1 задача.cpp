#include <iostream>
#include <vector>


int main()
{
	int sum{};
	for (int i = 2; i <= 1000; i++) 
	{
	 if (i % 3 == 0 || i % 5 == 0)
	  sum += i;

	}

	std::cout << sum;
	return 0;
}
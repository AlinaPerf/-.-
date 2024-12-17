#include <iostream>


int main(int argc, char const* argv[])
{
	using namespace std;

	long long number = 600851475143;
	long long del = 0;
	bool flag = true;

	for (long long i = 2; i < number; i++)
	{
		flag = true;
		if (number % i == 0)
		{
			for (long long j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					flag = false;
					break;
				}
			}
			if (flag)
				del = i;
		}
	}
	cout << del << endl;
	return 0;
}
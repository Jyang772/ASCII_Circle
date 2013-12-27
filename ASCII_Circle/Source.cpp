#include <iostream>
#include <math.h>
using namespace std;

int main() {


	int radius = 8;

	for (int i = -radius; i <= radius; i++)
	{
		for (int j = radius; j >= -radius; j--)
		{
			if (j != 0 && (pow(i, 2) + pow(j, 2)) <= pow(radius, 2))
				cout << "*";
			else
			if (j != 0)
				cout << " ";
		}
		cout << endl;
	}
	system("PAUSE");
	return 0;
}
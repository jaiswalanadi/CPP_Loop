#include <iostream>

using namespace std;

int main()

{

	int h = 4, w = 6, i, j;

	for (i = 1; i <= h; i++)

	{

		for (j = 1; j <= w; j++)

			if ((i + j) % 2 == 0)
			{

				cout << "1";
			}

			else
			{

				cout << "2";
			}

		cout << endl;
	}
}
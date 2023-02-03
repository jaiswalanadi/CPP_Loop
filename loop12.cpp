#include <iostream>

using namespace std;

int main()

{

    int i, j, k, rows;

    cout << "Enter Rows = ";

    cin >> rows;

    for (i = rows + 1; i > 1; i--)

    {

        for (j = i; j > 2; j--)

        {

            cout << " ";
        }

        for (k = 1; k <= (rows - i + 1); k++)
        {

            cout << k;
        }

        for (int m = k; m >= 1; m--)
        {

            cout << m;
        }

        cout << "\n";
    }

    return 0;
}
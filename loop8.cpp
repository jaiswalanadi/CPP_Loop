#include <iostream>

using namespace std;

int main()

{

    int h = 4, w = 6;

    for (int i = 1; i <= h; i++)

    {

        for (int j = 1; j <= w; j++)

        {

            if (i == 1 || i == h ||

                j == 1 || j == w)

                cout << j;

            else

                cout << " ";
        }
        cout << endl;
    }
}
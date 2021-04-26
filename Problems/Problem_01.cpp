#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int i;
    int j;
    int n;

    cin >> n;

    int decreminter = n;
    int incrementor = 1;

    for (i = 0; i < (n * 2); i++)
    {
        if (i < n)
        {
            for (j = 0; j < incrementor; j++)
            {
                cout << "#";
            }

            incrementor++;
        }
        else if (i >= n)
        {
            decreminter--;

            for (j = decreminter; j > 0; j--)
            {
                cout << "#";
            }
        }

        cout << "\n";
    }
}

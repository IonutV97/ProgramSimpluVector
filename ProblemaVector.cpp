#include <iostream>

using namespace std;

int main()
{
    int v[10], nr, i, j, x;

    cout << "Introduceti valorile dorite pentru vector : \n";
    for (i = 0; i < 10; i++)
    {
        cin >> v[i];
    }

    for (i = 0; i < 10; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    for (i = 0; i < 10; i++)
    {
        nr = 1;
        for (j = i + 1; j < 10; j++)
        {
            if (v[i] == v[j])
            {
                nr++;
                v[j] = x;
            }

        }
        if (v[i] != x)
        {
            if (nr != 1)
            {
                cout << "Numarul " << v[i] << " Apare de " << nr << " ori.\n";
            }
            else
                cout << "Numarul " << v[i] << " Apare odata.\n";

        }

    }
    return 0;

}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        if (x < 3)
        {
            cout << "LIGHT" << endl;
        }
        else if (x < 7)
        {
            cout << "MODERATE" << endl;
        }
        else
        {
            cout << "HEAVY" << endl;
        }
    }
    return 0;
}

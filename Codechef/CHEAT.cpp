#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        double n;
        cin >> n;
        if (n >= 2)
        {
            cout << ceil((n - 1) / 7) << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    cin.getline(a, 100);
    bool l = 0;
    int n = strlen(a);

    for (int j = 0; j < n; j++)
    
    {
        if (a[j] != a[n - j - 1])
        {
            l = 1;
        }
    }
    if (l)
    {
        cout << "No\n";
    }
    else
    {
        cout << "Yes\n";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    int c[100000];
    cin >> n;
    int s = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        if (c[i] % 3 == 0 && c[i] != 0)
        {
            k++;
            s += c[i];
        }
    }
    cout << k << " елементів, сума = " << s << endl;
    for (int i = 0; i < n; i++)
    {
        cout << c[i] + s << " ";
    }
    return 0;
}

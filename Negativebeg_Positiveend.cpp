#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int b[n] = {0}, arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            b[p] = arr[i];
            p++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            b[p] = arr[i];
            p++;
        }
    }
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
    cout << endl;
    return 0;
}
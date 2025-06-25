#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> v1(n);
    vector<long long> prefix_sum_v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        if (i == 0)
        {
             prefix_sum_v1[i] = v1[i] ;
        }
        else
        {
            prefix_sum_v1[i] = v1[i] + prefix_sum_v1[i - 1];
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << prefix_sum_v1[i] << " ";
    }

    return 0;
}
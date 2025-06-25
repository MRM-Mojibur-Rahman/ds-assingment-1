#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int q;
    cin >> q;
    vector<int> v1(q);
    for (int i = 0; i < q; i++)
    {
        cin >> v1[i];
    }
    int posi;
    cin >> posi;
    vector<int> ans(n + q);
    for (int i = 0; i < n + q; i++)
    {
        if (i < posi)
        {
            ans[i] = v[i];
        }
        else if (i >= posi&& i< posi+q)
        {
            ans[i]=v1[i-posi];
        }
        else
        {
            ans[i]=v[i-q];
        }
        
    }

    for (int i = 0; i < n+q; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
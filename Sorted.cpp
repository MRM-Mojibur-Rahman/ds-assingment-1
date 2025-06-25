#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
   
    for (int t = 0; t < test_case; t++)
    {
        int n,f=1;
        cin >> n;
        vector<int> v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        vector<int> v2(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        for (int i = 0; i < n; i++)
        {
            if (v1[i] != v2[i])
            {
               f=0;
            }
        }
        if (f==1)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }

    return 0;
}
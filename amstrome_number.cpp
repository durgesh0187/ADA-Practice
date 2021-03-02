#include <bits/stdc++.h>
using namespace std;
int main() {
    
    vector<int> v;
    int n;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        while(i!=0)
        {
            int sum = i%10;
            ans += (sum*sum*sum);
            i = i/10;
        }
        if(i==ans)
        {
            v.push_back(ans);
        }
    }

    for(int i=0;i<v.size();i++)
    {
        cout<< v[i] <<" ";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    
    vector<int> v;
    int n;
    cin>>n;
    while(n!=0)
    {
        v.push_back(n%10);
        n = n/10;
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }


}

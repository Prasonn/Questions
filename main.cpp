#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={5, 20, 3, 2, 50, 80};
    int n=78;
    unordered_set<int> st(v.begin(),v.end());
    // n=78
    // 2,3,5,20,50,80
    for(int i=0;i<v.size();i++)
    {
        int sum = v[i]+n;
        if(st.find(sum)!=st.end())
        {
            cout<<sum;
            return 0;
        }
    }
    cout<<"No such Pair";
    return 0;


}

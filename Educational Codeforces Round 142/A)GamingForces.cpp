#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> mon_h(n);
        int count_1 = 0;
        for(int i=0; i<n; i++){
            cin>>mon_h[i];
            if(mon_h[i]==1){
                count_1++;
            }
        }
        cout<<n- count_1 + count_1/2 + count_1%2<<endl;
    }
    return 0;
}
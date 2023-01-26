#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a1,a2,a3,a4,jokes;
        cin >> a1 >> a2 >> a3 >> a4;

        if(a1==0){
            jokes = 1;
        }
        else{
            jokes = a1 + 2*min(a2,a3) + min(a1+1,abs(a2-a3)+a4);
        }

        cout<<jokes<<endl;
    }
    
    return 0;
}
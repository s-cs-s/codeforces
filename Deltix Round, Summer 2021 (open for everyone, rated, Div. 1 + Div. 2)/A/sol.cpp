#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int c,d;
        cin>>c>>d;
        int i=0,j=0;
        if(c==d && d==0){
            cout<<0<<endl;
        }
        else if(c==d){
            cout<<1<<endl;
        }
        else if(c>d){
            int k = c-d;
            if(k%2==0){
                cout<<2<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else{
            int k = d-c;
            if(k%2==0){
                cout<<2<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        
    }
}

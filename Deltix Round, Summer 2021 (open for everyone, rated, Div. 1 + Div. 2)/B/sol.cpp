#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        int odd_=0,even_=0;
        for(int i=0;i<n;i++){
            cin>>A[i];
             if(A[i]%2==0){
                even_++;
            }
            else{
                odd_++;
            }
            
        }
        int B[n];
        for(int i=0;i<n;i++){
            B[i]=A[i];
        }
        if(n%2==1){
            if(odd_>((n/2)+1) || (even_>((n)/2+1))){
                cout<<-1<<endl;
                continue;
            }
        }
        else{
            if(odd_>n/2 || even_>n/2){
                cout<<-1<<endl;
                continue;
            }
        }
        /*
        if(count==0){
            cout<<0<<endl;
        }
        */
        if(true){
            int ans = 0;
            int mem =0;
            bool need_rep=false;
            for(int i=0;i<n-1;i++){
                //int mem = 0;
                

                if(A[i]%2==A[i+1]%2){
                    mem++;
                    need_rep=true;
                }
                else{
                    if(need_rep){
                        //for(int tt=0;tt<n;tt++) cout<<A[tt]<<" ";
                        int temp = A[i+1];
                        int pt=i;
                        for(pt=i;pt>i-mem;pt--){
                            A[pt+1]=A[pt];
                            //2 right shifts
                        }
                        A[pt+1]=temp;
                        i=pt+1;
                        //cout<<endl;
                        //for(int tt=0;tt<n;tt++) cout<<A[tt]<<" ";cout<<endl;
                        ans+=mem;
                        //mem-=1;
                        mem=0;
                        if(mem==0){
                            need_rep=false;
                        }
                        //swap(A[mem-1])
                    }
                }
            }
            if(need_rep==true){
                //cout<<"help"<<endl;
                ans=0;
                mem=0;
                need_rep=false;
                for(int i=n-1;i>0;i--){
                        if(B[i]%2==B[i-1]%2){
                            mem++;
                            need_rep=true;
                        }
                        else{
                            if(need_rep){
                                //for(int tt=0;tt<n;tt++) cout<<B[tt]<<" ";
                                int temp = B[i-1];
                                int pt=i;
                                for(pt=i;pt<i+mem;pt++){
                                    B[pt-1]=B[pt];
                                    //2 right shifts
                                }
                                //pt+1
                                B[pt-1]=temp;
                                i=pt-1;
                                //cout<<endl;
                                //for(int tt=0;tt<n;tt++) cout<<B[tt]<<" ";cout<<endl;
                                ans+=mem;
                                //mem-=1;
                                mem=0;
                                if(mem==0){
                                    need_rep=false;
                                }
                                //swap(A[mem-1])
                            }
                        }
                }
            }
            cout<<ans<<endl;
        }
    }
}

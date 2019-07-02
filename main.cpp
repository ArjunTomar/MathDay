#include<iostream>
#define ll long long
using namespace std;

ll Exp(ll x,ll y,ll mod)
 {
     if(y==1)return (x%mod);
     if((y&1)==0)
       {
           return Exp((x*x)%mod,y/2,mod);
       }
      else
       return (x*Exp((x*x)%mod,(y-1)/2,mod))%mod;
 }
int main() {
    ll T;
    cin>>T;
    while(T--)
     {
         ll x,y,mod;
         cin>>x>>y>>mod;

         int ans=x;
         while(y>0)
          {
            ans=Exp(ans,y,mod);
            y--;
          }
        cout<<ans<<endl;
     }
	return 0;
}

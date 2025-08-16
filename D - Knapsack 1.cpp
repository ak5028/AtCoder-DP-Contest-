#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

int main(){
        ll n,W;cin>>n>>W;
        ll w[n+1],val[n+1];
        for(ll i=1;i<=n;i++){
                cin>>w[i]>>val[i];
        }
        
        vector<ll>dp(W+1);
        for(ll i=1;i<=n;i++){
                for(ll j=W;j>=w[i];j--){
                        dp[j]=max(dp[j],dp[j-w[i]]+val[i]);
                }
        }
        cout<<dp[W];
}

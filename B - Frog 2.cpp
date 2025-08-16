#include <bits/stdc++.h>
using namespace std;

int main(){
        int n,k;cin>>n>>k;int a[n+1];
        for(int i=1;i<=n;i++){cin>>a[i];}
        vector<int>dp(n+1);
        dp[1]=0;
        for(int i=2;i<=n;i++){
                dp[i]=INT_MAX;
                for(int j=i-1;j>=max(1,i-k);j--){
                        int d=abs(a[i]-a[j]);
                        dp[i]=min(dp[i],d+dp[j]);
                }
        }
        cout<<dp[n];
}

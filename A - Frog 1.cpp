#include <bits/stdc++.h>
using namespace std;

int main(){
        int n;cin>>n;int a[n+1];
        for(int i=1;i<=n;i++){cin>>a[i];}
        vector<int>dp(n+1);
        dp[1]=0;
        for(int i=2;i<=n;i++){
                dp[i]=INT_MAX;
                if(i-1>=1){ dp[i]=min(dp[i],abs(a[i]-a[i-1])+dp[i-1]); }
                if(i-2>=1){ dp[i]=min(dp[i],abs(a[i]-a[i-2])+dp[i-2]); }
        }
        cout<<dp[n];
}

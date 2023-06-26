#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

// *Data Structures
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvl;

// -------------------------------------------------------------------------------------


ll get_pow(ll num){
    ll cnt=0;
    while(num){
        num=num>>1;
        cnt++;
    }
    return cnt-1;
}
ll power(ll x,ll y)
{
    ll res = 1;
    while(y)
    {
        if(y&1) 
            res = (res*x)%mod;
        y=y/2,x=(x*x)%mod;
    }
    return res%mod;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    ll pow=get_pow(k);
    ll rem=k-(1<<pow);
    ll ans=0;
    if(rem==0){
        ans=power(n,pow);
    }else{
        ans=power(n,pow);
        ll index=0;
        while(rem){
            if(rem & (1)){
                ans+=power(n,index);
            }
            rem=(rem>>1);
            index++;
        }
    }
    cout<<(ans%mod+mod)%mod<<endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}

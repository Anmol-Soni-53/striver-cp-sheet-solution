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


ll power(ll x,ll y)
{
    ll res = 1;
    while(y)
    {
        if(y&1) 
            res = (res*x);
        y=y/2,x=(x*x);
    }
    return res;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    if(k==1){
        cout<<n;
    }
    if(k>1){
        ll p=0;
        while(n){
            if((n || (0))==0){
                break;
            }
            else{
                n=n>>1;
                p++;
            }
        }
        cout<< power(2,p)-1;
    }


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
    // int t;
    // cin>>t;
    // while(t--){
        solve();
    // }

    return 0;
}

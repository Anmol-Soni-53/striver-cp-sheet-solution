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



void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    ll  temp=0;
    for(ll i=0;i<(1<<n);i++){
        ll sum=0;
        
        for(ll bit=0;bit<n;bit++){
            if(i&(1<<bit)){
                sum=sum - arr[bit];
            }else{
                sum=sum + arr[bit];
            }
        }
        if(sum%360 == 0){
            cout<<"YES"<<endl;
            temp=1;
            break;
        }
    }
    if(temp==0){
        cout<<"NO"<<endl;
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

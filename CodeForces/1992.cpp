#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<class T> using pbset=tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
template<class T> using pbmultiset=tree<T, null_type, less_equal<T>, rb_tree_tag,tree_order_statistics_node_update> ;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define f(i,a,b) for(long long i=a;i<=b;i++)
#define rf(i,a,b) for(long long i=a;i>=b;i--)
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define llINT_MAX 9e18
#define iINT_MAX 1e9
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mkp make_pair
#define ff first
#define ss second
#define vll vector<ll>
#define vvl vector<vll>
#define p_q priority_queue
#define pqmax priority_queue<ll>
#define pqmin priority_queue<ll,vector<ll>,greater<ll>>
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define re return
ll mod_add(ll a, ll b) { return ((a % MOD) + (b % MOD)) % MOD; }
ll mod_sub(ll a, ll b) { return ((a % MOD) - (b % MOD) + MOD) % MOD; }
ll mod_mul(ll a, ll b) { return ((a % MOD) * (b % MOD)) % MOD; }
ll mod_expo(ll a, ll n) { ll res = 1; while(n) { if(n % 2)   res = mod_mul(res, a), n--; else a  = mod_mul(a, a), n /= 2; } return res; }
ll mod_inv(ll a) { return mod_expo(a, MOD - 2); }   //MOD must be prime ; (a, MOD) -> coprime
ll mod_div(ll a, ll b) { return mod_mul(a, mod_inv(b)); }
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    ll n,m,k;cin>>n>>m>>k;vector<pair<char, int>> arr(n); 
    int n_l=0;
    for(int i=0;i<n;i++){
        char kk;cin>>kk;
        if (kk=='L') n_l++;
        arr[i].ss=kk;
        arr[i].ff=n_l;
    }
    f(i,0,n-1){
        cout<<arr[i].ff<<" "<<arr[i].ss<<endl;
    }


}
int main()
{
    fastio();
    #ifndef ONLINE_JUDGE
        freopen("io/Error.txt", "w", stderr);
        // freopen("io/Input.txt", "r", stdin);
        // freopen("io/Output.txt", "w", stdout);
    #endif

    int _t; cin >> _t; while(_t--)
    solve();
    return 0;
}
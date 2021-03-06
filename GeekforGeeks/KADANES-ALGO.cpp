// geeksforgeeks
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const ll N = 5e5+5;
        const ll MOD = 1000000007;
        #define all(x) x.begin(),x.end()
        #define pii pair<ll,ll>
        #define pis pair<ll,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test ll cse;cin>>cse;for(ll _i=1;_i<=cse;_i++)
        #define PI 3.14159265
        #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
        const double EPS = 1E-9;
        typedef vector<vector<double>> matrix;
        typedef vector<int> vi;

int ar[N];
int kadanes_algo(int n){
    int cur=0, ans = INT_MIN;
    for(int i=0;i<n;i++){
        
        cur += ar[i];
        ans = max(ans, cur);

        if(cur < 0) cur=0;
    }
    return ans;
}

int main(){

    fast;
    test{
        int n; cin>>n;
        for(int i=0;i<n;i++) cin>>ar[i];

        cout << kadanes_algo(n) <<"\n";
    }
    return 0;
}
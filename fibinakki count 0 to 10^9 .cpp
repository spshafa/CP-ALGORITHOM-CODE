#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define int long long 
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define sp " "
#define endl "\n"
#define pn(a) cout<<a<<"\n"
#define fo(x,n) for(int i=x; i<n; i++)
#define w(t) while(t--)
#define el cout<<endl;
#define r0 return; 
const int  MOD=10e9+7;
const int N=10e6+6;
const int IN=__FLT64_HAS_INFINITY__;
    vector<vector<int>> mul (vector <vector <int>> &A,vector<vector<int>> &B)
    {
        int ar = A.size();
        int br = B[0].size();
        int x = A[0].size();
        vector<vector<int>> res(ar, vector<int>(br, 0));

        for(int i=0;i<ar;i++)
        {
            for(int j=0;j<br;j++)
            {
                for(int k=0;k<x;k++)
                {
                    res[i][j]+=((A[i][k]*B[k][j]%MOD));
                }
                res[i][j]%=MOD;
            } 
        }

        return res;
    }
   

vector<vector<int>> fibo (vector<vector<int>> &A , int n)
{
    vector<vector<int>> res ={{1,0},{0,1}};
    if (n==0) return res;
    if(n==1 )return A;
    while(n)
    {
        if(n&1) res=mul(res,A);
        A=mul(A,A);
        n>>=1;
    }
    return res;
}
void solve ()
{
   int n;
   cin>>n;
   if(n<2)
   {
   cout<<n<<endl;
   return;
 }
 vector<vector<int>>f={{1},{0}};
 vector<vector<int>>A={{1,1},{1,0}};
 A=fibo(A,n-1);
 f=mul(A,f);
 cout<<f[0][0]<<endl;
}
signed main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t= 1;
    // cin >> t;

    w(t) 
    {
     solve();
    }
    return 0;
}

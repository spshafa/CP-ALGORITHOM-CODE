#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
#define int long long 
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define sp " "
#define endl "\n"
#define el cout<<endl;
#define r0 return;
#define vec vector<int> 
const int  MOD=1e9+7;
const int N=1e6+6;
void solve ()
{
  
 
  int n;
  string s;
  cin>>n>>s;
  cin>>n>>s;
   map<char,int>mp;
  int l=0,r=0,len=0;
  while(r<n)
  {
    if(mp.count(s[r])&& mp[s[r]]>=l)
    {
      l=mp[s[r]]+1;
    }

  len=max(len,r-l+1);
  mp[s[r]]=r;
   r++;
  }

  cout<<len<<endl;
}
signed main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t= 1;
    // cin >> t;

    while(t--) 
    {
     solve();
    }
    return 0;
}


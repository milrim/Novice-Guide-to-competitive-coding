#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector < long long > vll;
typedef pair < long long, long long > pll;
typedef pair < int, int > pii;
typedef vector < int > vi;
typedef vector<vi> vvi; 
typedef vector<pii> vpii;
#define rep(i,n) for(int i = 0; i < n; i++)
#define reps(i,a,n) for(int i = a; i < n; i++)
#define traverse(container, it) \
      for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define csl ios_base::sync_with_stdio(false); cin.tie(NULL)
#define all(x) x.begin(),x.end()
#define MOD 1000000007
#define SIZE 5009

vector< vector< pair<int,int> > > graph;
vector<int> visited;
struct point
{
    ll x;
	ll y;
};
bool mycomp(struct point a,struct point b)
{
	return a.x > b.x;
}
int main()
{
	ll t,n,arr[10000],i,j,left[10000],right[10000],k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		struct point ary[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
	    }
	}
	return 0;
}
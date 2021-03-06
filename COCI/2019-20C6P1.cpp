#include <bits/stdc++.h>

#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define F first
#define S second
#define all(x) (x).begin(),(x).end()
#define SZ(x) ((int)(x).size())
#define MS(x,a) memset((x),(a),sizeof(x)) 
#define F0R(i,n) for(auto (i) = 0; (i) < (n); (i)++)
#define FOR(i,a,b) for(auto (i) = (a); (i) <= (b); (i)++)
#define ROF(i,a,b) for(auto (i) = (a); (i) >= (b); (i)--)

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int k; cin >> k; ++k;
	vector<pii> edges;
	FOR(i,2,k+1) {
		edges.pb(mp(1,i));
		edges.pb(mp(i,k+2));
	}
	cout << k+2 << " " << SZ(edges) << "\n";
	for(auto& i:edges) cout << i.F << " " << i.S << "\n";
}	

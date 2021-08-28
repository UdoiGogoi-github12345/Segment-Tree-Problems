//░░░░░░░░░░▄
//░░░░░░░░▄▐░▄▄█████▄▄
//░░░░░░▄█████████████▄▀▄▄░▄▄▄
//░░░░░█████████████████▄██████
//░░░░████▐█████▌████████▌█████▌
//░░░████▌█████▌█░████████▐▀██▀
//░▄█████░█████▌░█░▀██████▌█▄▄▀▄
//░▌███▌█░▐███▌▌░░▄▄░▌█▌███▐███░▀
//▐░▐██░░▄▄▐▀█░░░▐▄█▀▌█▐███▐█
//░░███░▌▄█▌░░▀░░▀██░░▀██████▌
//░░░▀█▌▀██▀░▄░░░░░░░░░███▐███
//░░░░██▌░░░░░░░░░░░░░▐███████▌
//░░░░███░░░░░▀█▀░░░░░▐██▐███▀▌
//░░░░▌█▌█▄░░░░░░░░░▄▄████▀░▀
//░░░░░░█▀██▄▄▄░▄▄▀▀▒█▀█░▀
//░░░░░░░░░▀░▀█▀▌▒▒▒░▐▄▄
//░░░░░░░░▄▄▀▀▄░░░░░░▄▀░▀▀▄▄
//░░░░░░▄▀░▄▀▄░▌░░░▄▀░░░░░░▄▀▀▄
//░░░░░▐▒▄▀▄▀░▌▀▄▄▀░░░░░░▄▀▒▒▒▐
//░░░░▐▒▒▌▀▄░░░░░▌░░░░▄▄▀▒▐▒▒▒▒▌
//░░░▐▒▒▐░▌░▀▄░░▄▀▀▄▀▀▒▌▒▐▒▒▒▒▐▐
//░░░▌▄▀░░░▄▀░█▀▒▒▒▒▀▄▒▌▐▒▒▒▒▒▌▌
//░░▄▀▒▐░▄▀░░░▌▒▐▒▐▒▒▒▌▀▒▒▒▒▒▐▒▌
//Anime in the beginning - I'm an absolute winner
//#pragma GCC optimize("Ofast")
//#pragma comment(linker, "/stack:200000000")

#include<bits/stdc++.h>
//#include <cstdio>
//#include <cassert>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
//using namespace __gnu_pbds;

#define ll long long
#define ld long double
#define ull unsigned long long


#define str string
#define fo(i,a,n) for(ll i=a;i<n;i++)


#define ff first
#define ss second
#define pb push_back

#define nl '\n'

/*---------------------------------------------------------------------------------------------------------------------------*/

typedef map<ll, ll> mll;
typedef vector<long long> vll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;
typedef vector<vector<ll> > vv;
//typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> PBDS;

/*---------------------------------------------------------------------------------------------------------------------------*/

#define deb(...) cerr << "[" << #__VA_ARGS__ << "]: "; cerr << to_string(__VA_ARGS__) << endl
template <typename T, size_t N> int SIZE(const T (&t)[N]) { return N; } template<typename T> int SIZE(const T &t) { return t.size(); } string to_string(const string s, int x1 = 0, int x2 = 1e9) { return '"' + ((x1 < s.size()) ? s.substr(x1, x2 - x1 + 1) : "") + '"'; } string to_string(const char* s) { return to_string((string) s); } string to_string(const bool b) { return (b ? "true" : "false"); } string to_string(const char c) { return string({c}); } template<size_t N> string to_string(const bitset<N> &b, int x1 = 0, int x2 = 1e9) { string t = ""; for (int __iii__ = min(x1, SIZE(b)),  __jjj__ = min(x2, SIZE(b) - 1); __iii__ <= __jjj__; ++__iii__) { t += b[__iii__] + '0'; } return '"' + t + '"'; } template <typename A, typename... C> string to_string(const A (&v), int x1 = 0, int x2 = 1e9, C... coords); int l_v_l_v_l = 0, t_a_b_s = 0; template <typename A, typename B> string to_string(const pair<A, B> &p) { l_v_l_v_l++; string res = "(" + to_string(p.first) + ", " + to_string(p.second) + ")"; l_v_l_v_l--; return res; } template <typename A, typename... C> string to_string(const A (&v), int x1, int x2, C... coords) { int rnk = rank<A>::value; string tab(t_a_b_s, ' '); string res = ""; bool first = true; if (l_v_l_v_l == 0) res += "\n"; res += tab + "["; x1 = min(x1, SIZE(v)), x2 = min(x2, SIZE(v)); auto l = begin(v); advance(l, x1); auto r = l; advance(r, (x2 - x1) + (x2 < SIZE(v))); for (auto e = l; e != r; e = next(e)) { if (!first) { res += ", "; } first = false; l_v_l_v_l++; if (e != l) { if (rnk > 1) { res += "\n"; t_a_b_s = l_v_l_v_l; }; } else { t_a_b_s = 0; } res += to_string(*e, coords...); l_v_l_v_l--; } res += "]"; if (l_v_l_v_l == 0) res += "\n"; return res; } void dbgm() {;} template<typename Heads, typename... Tails> void dbgm(Heads H, Tails... T) { cerr << to_string(H) << " | "; dbgm(T...); }
#define debm(...) cerr << "[" << #__VA_ARGS__ << "]: "; dbgm(__VA_ARGS__); cerr << endl


/*---------------------------------------------------------------------------------------------------------------------------*/
void FIO() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
}
/*---------------------------------------------------------------------------------------------------------------------------*/





//Binary search + max segment tree

const ll N = 2e5 + 7;
const ll mod = 1e9 + 7;
const ll INF = 9223372036854775807 ;


vll seg(400005);
void build(vll& a, ll s, ll e, ll idx) {
	if (s == e) {
		seg[idx] = a[s];
		return;
	}
	ll mid = s + (e - s) / 2;
	build(a, s, mid, 2 * idx);
	build(a, mid + 1, e, 2 * idx + 1);
	seg[idx] = max(seg[2 * idx], seg[2 * idx + 1]);
	return;
}

void update(vll& a, ll ss, ll se, ll idx, ll i, ll increment) {
	if (i<ss or i>se) {
		return;
	}
	if (ss == se) {
		seg[idx] = increment;
		return;
	}
	ll mid = ss + (se - ss) / 2;
	update(a, ss, mid, 2 * idx, i, increment);
	update(a, mid + 1, se, 2 * idx + 1, i, increment);
	seg[idx] = max(seg[2 * idx], seg[2 * idx + 1]);
	return;
}

ll query(vll& a, ll ss, ll se, ll idx, ll val, ll l) {

	if (seg[idx] < val or se < l) {
		return -1;
	}
	if (se == ss) {
		return ss;
	}
	ll mid = (ss + se) / 2;
	ll res = query(a, ss, mid, 2 * idx, val, l);
	if (res == -1) {
		res = query(a, mid + 1, se, 2 * idx + 1, val, l);
	}
	return res;

}



void solve() {
	ll n, m;
	cin >> n >> m;
	vll a(n);
	fo(i, 0, n) {
		cin >> a[i];
	}
	seg.resize(4 * n + 1);
	build(a, 0, n - 1, 1);
	for (ll i = 1; i <= m; i++) {
		ll p, b, c;
		cin >> p;
		if (p == 1) {
			cin >> b >> c;
			update(a, 0, n - 1, 1, b, c);
		}
		else if (p == 2) {
			ll x, l;
			cin >> x >> l;
			cout << query(a, 0, n - 1, 1, x, l) << nl;
		}

	}
}
int main()
{

	FIO();
	ll t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}

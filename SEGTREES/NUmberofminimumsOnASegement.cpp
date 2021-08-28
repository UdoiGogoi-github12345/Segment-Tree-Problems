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




const ll N = 2e5 + 7;
const ll mod = 1e9 + 7;
const ll INF = 9223372036854775807 ;


vpll seg(400005);
mll mp;
void build(vll& a, ll s, ll e, ll idx) {
	if (s == e) {
		seg[idx].ff = a[s];
		seg[idx].ss = 1;
		return;
	}
	ll mid = s + (e - s) / 2;
	build(a, s, mid, 2 * idx);
	build(a, mid + 1, e, 2 * idx + 1);
	if (seg[2 * idx].ff < seg[2 * idx + 1].ff) {
		seg[idx].ff = seg[2 * idx].ff;
		seg[idx].ss = seg[2 * idx].ss;
	}
	else if (seg[2 * idx].ff > seg[2 * idx + 1].ff) {
		seg[idx].ff = seg[2 * idx + 1].ff;
		seg[idx].ss = seg[2 * idx + 1].ss;
	}
	else {
		seg[idx].ff = seg[2 * idx + 1].ff;
		seg[idx].ss = seg[2 * idx + 1].ss + seg[2 * idx].ss;
	}
	return;
}

void update(vll& a, ll ss, ll se, ll idx, ll i, ll increment) {
	if (i<ss or i>se) {
		return;
	}

	if (ss == se) {
		seg[idx].ff = increment;
		seg[idx].ss = 1;
		return;
	}
	ll mid = ss + (se - ss) / 2;
	update(a, ss, mid, 2 * idx, i, increment);
	update(a, mid + 1, se, 2 * idx + 1, i, increment);
	if (seg[2 * idx].ff < seg[2 * idx + 1].ff) {
		seg[idx].ff = seg[2 * idx].ff;
		seg[idx].ss = seg[2 * idx].ss;
	}
	else if (seg[2 * idx].ff > seg[2 * idx + 1].ff) {
		seg[idx].ff = seg[2 * idx + 1].ff;
		seg[idx].ss = seg[2 * idx + 1].ss;
	}
	else {
		seg[idx].ff = seg[2 * idx + 1].ff;
		seg[idx].ss = seg[2 * idx + 1].ss + seg[2 * idx].ss;
	}
	return;
}

pair<ll, ll> query(vll& a, ll ss, ll se, ll idx, ll qs, ll qe) {
	if (qs <= ss and qe >= se) {
		return seg[idx];
	}
	if (qe<ss or qs>se) {
		return {1e18, -1};
	}
	ll mid = ss + (se - ss) / 2;
	pair<ll, ll> left = query(a, ss, mid, 2 * idx, qs, qe);
	pair<ll, ll> right = query(a, mid + 1, se, 2 * idx + 1, qs, qe);

	pair<ll, ll> p;
	if (left.ff < right.ff) {
		p.ff = left.ff;
		p.ss = left.ss;
	}
	else if (left.ff > right.ff) {
		p.ff = right.ff;
		p.ss = right.ss;
	}
	else {
		p.ff = left.ff;
		p.ss = left.ss + right.ss;
	}
	return p;
}


void solve() {
	ll n, m;
	cin >> n >> m;
	vll a(n);
	fo(i, 0, n) {
		cin >> a[i];
		mp[a[i]]++;
	}
	seg.resize(4 * n + 1);
	for (ll i = 0; i <= 4 * n + 1; i++) {
		seg[i] = {0, 0};
	}
	build(a, 0, n - 1, 1);
	for (ll i = 1; i <= m; i++) {
		ll p, b, c; cin >> p >> b >> c;
		if (p == 1) {
			update(a, 0, n - 1, 1, b, c);
		}
		else if (p == 2) {
			pair<ll, ll> ans = query(a, 0, n - 1, 1, b, c - 1);
			cout << ans.ff << " " << ans.ss << nl;
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

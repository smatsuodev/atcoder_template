// clang-format off
#include <bits/stdc++.h>
#include <atcoder/all>
#define ret return
#define _n ll
#define _gm(a,b,c,d,n,...) n
#define _rt(i,n)for(_n i=0;i<(_n)n;++i)
#define _rti(i,n)for(_n i=0;i<=(_n)n;++i)
#define _rse(i,s,e)for(_n i=(_n)s;i<(_n)e;++i)
#define _rsei(i,s,e)for(_n i=(_n)s;i<=(_n)e;++i)
#define _rses(i,s,e,step)for(_n i=(_n)s;step<0?i>(_n)e:i<(_n)e;i=i+(_n)(step))
#define _rsesi(i,s,e,step)for(_n i=s;step<0?i>=(_n)e:i<=(_n)e;i=i+(step))
#define rep(...)_gm(__VA_ARGS__,_rses,_rse,_rt)(__VA_ARGS__)
#define repe(...)_gm(__VA_ARGS__,_rsesi,_rsei,_rti)(__VA_ARGS__)
#define all(v) v.begin(),v.end()
using namespace std;using namespace atcoder;using mint=modint998244353;using ll=long long;using ull=unsigned ll;using Graph=vector<vector<_n>>;const int IINF=INT_MAX;const ll INF=LONG_LONG_MAX;const ull ULLINF=ULLONG_MAX;template<class T,class U>bool chmax(T&a,U b){if(a<b){a=b;ret true;}ret false;}template<class T,class U>bool chmin(T&a,U b){if(b<a){a=b;ret true;}ret false;}_n ctoi(char&c){ret c-'0';}template<class T>T close_bound(const vector<T>&v,T&k){T l=*(lower_bound(all(v),k)-1);T u=*lower_bound(all(v),k);if(u==v[0])ret u;if(abs(k-l)<abs(k-u)){ret l;}else{ret u;}}template<class T>string join(const vector<T>&v,const string&d=" "){string s=to_string(v[0]);rep(i,1,v.size())s+=d+v[i];ret s;}template<class T>void join_out(const vector<T>&v,const string&d=" "){cout<<v[0];rep(i,1,v.size())cout<<d<<v[i];cout<<'\n';}template<class... T>constexpr auto min(T...a){return min(initializer_list<common_type_t<T...>>{a...});}template<class...T>constexpr auto max(T...a){return max(initializer_list<common_type_t<T...>>{a...});}template<class...T>void input(T&...a){(cin>>...>>a);}void print(){cout<<'\n';}template<class T>void print(const T&a){cout<<a<<'\n';}template<class T,class...Ts>void print(const T& a,const Ts&...b){cout<<a;(cout<<...<<(cout<<' ',b));cout<<'\n';}
// clang-format on

int main() {}
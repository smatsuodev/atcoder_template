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
using namespace std;using namespace atcoder;using mint=modint998244353;using ll=long long;using ull=unsigned ll;using Graph=vector<vector<_n>>;const int IINF=INT_MAX;const ll INF=LONG_LONG_MAX;const ull ULLINF=ULLONG_MAX;template<class T,class U>bool chmax(T&a,U b){if(a<b){a=b;ret true;}ret false;}template<class T,class U>bool chmin(T&a,U b){if(b<a){a=b;ret true;}ret false;}_n ctoi(char&c){ret c-'0';}template<class T>T close_bound(const vector<T>&v,T&k){T l=*(lower_bound(all(v),k)-1);T u=*lower_bound(all(v),k);if(u==v[0])ret u;if(abs(k-l)<abs(k-u)){ret l;}else{ret u;}}template<class T>string join(const vector<T>&v,const string&d=" "){string s=to_string(v[0]);rep(i,1,v.size())s+=d+v[i];ret s;}template<class T>void join_out(const vector<T>&v,const string&d=" "){cout<<v[0];rep(i,1,v.size())cout<<d<<v[i];cout<<'\n';}template<class... T>constexpr auto min(T...a){return min(initializer_list<common_type_t<T...>>{a...});}template<class...T>constexpr auto max(T...a){return max(initializer_list<common_type_t<T...>>{a...});}template<class...T>void input(T&...a){(cin>>...>>a);}void print(){cout<<'\n';}template<class T,class...Ts>void print(const T& a,const Ts&...b){cout<<a;(cout<<...<<(cout<<' ',b));cout<<'\n';}
// clang-format on

class Vec {
 public:
  ll dx, dy;
  Vec(ll dx, ll dy) : dx(dx), dy(dy) {}
  Vec(ll x1, ll y1, ll x2, ll y2) : dx(x2 - x1), dy(y2 - y1) {}
  Vec(Coord& c1, Coord& c2) : Vec(c1.x, c1.y, c2.x, c2.y) {}
  Vec modify(complex<ll> c) {
    auto buf = complex(dx, dy) * c;
    return Vec(buf.real(), buf.imag());
  }
  Coord operator+(Coord& lhs) { return Coord(lhs.x + dx, lhs.y + dy); }
};
template <class T>
class Grid {
 public:
  ll xmin, xmax, ymin, ymax;
  vector<vector<T>> grid;
  T buf;
  Grid(ll xmin, ll xmax, ll ymin, ll ymax, T value)
      : xmin(xmin),
        xmax(xmax),
        ymin(ymin),
        ymax(ymax),
        grid(xmax - xmin, vector<T>(ymax - ymin, value)) {}
  Grid(ll xmin, ll xmax, ll ymin, ll ymax)
      : Grid(xmin, xmax, ymin, ymax, T()) {}
  Grid(ll xmax, ll ymax, T value) : Grid(0, xmax, 0, ymax, value) {}
  Grid(ll xmax, ll ymax) : Grid(0, xmax, 0, ymax, T()) {}
  T& operator()(ll x, ll y) { return grid[x - xmin][y - ymin]; }
  T& operator()(Coord c) { return this(c.first, c.second); }
  bool isend(ll x, ll y) {
    return x < xmin || x >= xmax || y < ymin || y >= ymax;
  }
  bool isend(Coord c) { return isend(c.first, c.second); }
};

int main() {
  ll n;
  cin >> n;
  Grid grid(5001, 5001, false);
  vector<Coord> p(n);
  rep(i, n) {
    ll x, y;
    cin >> x >> y;
    grid(x, y) = true;
    p[i] = {x, y};
  }

  rep(i, n) rep(j, i + 1, n) {
    auto p1 = p[i];
    auto p2 = p[j];
    Vec v(p1, p2);
    auto p3 = p2 + v.modify(1i);
  }
}

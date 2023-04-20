class Vec {
 public:
  ll dx, dy;
  Vec(ll dx, ll dy) : dx(dx), dy(dy) {}
  Vec(ll x1, ll y1, ll x2, ll y2) : dx(x2 - x1), dy(y2 - y1) {}
  Vec(const pair<ll, ll>& c1, const pair<ll, ll>& c2)
      : Vec(c1.first, c1.second, c2.first, c2.second) {}
  Vec modify(const complex<ll>& c) {
    return Vec(dx * c.real() - dy * c.imag(), dx * c.imag() + dy * c.real());
  }
  Vec operator-() const { return Vec(-dx, -dy); }
};
pair<ll, ll> operator+(const pair<ll, ll>& lhs, const Vec& rhs) {
  return {lhs.first + rhs.dx, lhs.second + rhs.dy};
}
pair<ll, ll> operator+(const Vec& lhs, const pair<ll, ll>& rhs) {
  return rhs + lhs;
}
pair<ll, ll> operator*(ll lhs, const Vec& rhs) {
  return {lhs * rhs.dx, lhs * rhs.dy};
}
pair<ll, ll> operator*(const Vec& lhs, ll rhs) { return rhs * lhs; }
Vec operator*(const complex<ll>& lhs, Vec& rhs) { return rhs.modify(lhs); }
Vec operator*(Vec& lhs, const complex<ll>& rhs) { return rhs * lhs; }
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
  typename vector<T>::reference operator()(ll x, ll y) {
    return grid[x - xmin][y - ymin];
  }
  typename vector<T>::reference operator()(const pair<ll, ll>& c) {
    return (*this)(c.first, c.second);
  }
  bool isin(ll x, ll y) {
    return x >= xmin && x < xmax && y >= ymin && y < ymax;
  }
  bool isin(const pair<ll, ll>& c) { return isin(c.first, c.second); }
};
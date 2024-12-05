#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll N, T;
string s;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> N >> T >> s;

  auto target_b = N - T;

  ll target_len = 1;
  for (auto i = 0; i < target_b; ++i) {
    target_len *= 2;
  }

  string ans = "0";
  ll ct = s.length() / target_len;
  for (auto i = 0; i < ct; ++i) {
    auto ss = s.substr(i * target_len, target_len);

    ans = max(ans, ss);
  }

  cout << ans;

  return 0;
}
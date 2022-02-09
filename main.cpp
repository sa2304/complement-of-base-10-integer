#include <cassert>
#include <iostream>

using namespace std;

class Solution {
 public:
  int bitwiseComplement(int n) {
    if (0 == n) { return 1; }

    int res = 0;
    for (int i = 0; n; ++i) {
      res |= ( ~(n & 0x1) & 0x1 ) << i;
      n = n >> 1;
    }

    return res;
  }
};

void TestBitwiseComplement() {
  Solution s;
  assert(2 == s.bitwiseComplement(5));
  assert(0 == s.bitwiseComplement(7));
  assert(1 == s.bitwiseComplement(0));
  assert(5 == s.bitwiseComplement(10));
}

int main() {
  TestBitwiseComplement();
  std::cout << "Ok"s << std::endl;
  return 0;
}

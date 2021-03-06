// https://leetcode.com/problems/richest-customer-wealth/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int maximumWealth(vector<vector<int>>& accounts) {
    int ans = INT_MIN;
    for (const auto r : accounts) {
      const auto sum = accumulate(begin(r), end(r), 0);
      ans = max(ans, sum);
    }
    return ans;
  }
};
// https://leetcode.com/problems/shuffle-the-array/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  vector<int> shuffle(vector<int>& nums, int n) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    vector<int> ans;
    for (int i = 0, j = n; i < n; ++i, ++j) {
      ans.push_back(nums[i]);
      ans.push_back(nums[j]);
    }
    return ans;
  }
};
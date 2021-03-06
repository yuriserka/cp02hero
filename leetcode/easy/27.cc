// https://leetcode.com/problems/remove-element/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int removeElement(vector<int>& nums, int val) {
    int k = 0;
    int len = nums.size();
    for (int i = 0; i < len; ++i) {
      if (nums[i] != val) nums[k++] = nums[i];
    }
    return k;
  }
};
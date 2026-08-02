#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> mapp;
        mapp[0] = 1;   // base case: empty prefix sum
        int c = 0;     // count of valid subarrays
        int sum = 0;   // running prefix sum

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];   // update prefix sum

            // check if (sum - goal) exists
            if(mapp.count(sum - goal)) {
                c += mapp[sum - goal];
            }

            mapp[sum]++;
        }
        return c;
    }
};

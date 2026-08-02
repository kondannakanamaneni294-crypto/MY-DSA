class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;

        for(int i = 0; i < nums.size(); i++) {
            int needed = target - nums[i];

            if(m.count(needed)) {
                return vector<int>{m[needed], i};
            }

            m[nums[i]] = i;
        }

        return {};
    }
};
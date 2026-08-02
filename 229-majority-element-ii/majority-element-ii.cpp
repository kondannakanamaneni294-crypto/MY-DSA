class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mapp;
        vector<int>vecc;
        for(int i = 0;i < nums.size();i++){
            mapp[nums[i]]++;
            if(mapp[nums[i]]>nums.size()/3){
                if(count(vecc.begin(), vecc.end(), nums[i]) == 0){
                vecc.push_back(nums[i]);
            }}
        }
        return vecc;
    }
};
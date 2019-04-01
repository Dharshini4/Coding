//https://leetcode.com/problems/two-sum/submissions/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int>temp;
    for(int i=0;i<nums.size();++i)
    {
        if(temp.count(target-nums[i]))
        {
            return{temp[target-nums[i]],i};
        }
        temp[nums[i]]=i;
    }
        return {nums.size(),nums.size()};
    }
    
};
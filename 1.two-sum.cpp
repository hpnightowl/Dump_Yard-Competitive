/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> o;
        for (auto i=0; i < nums.size(); i++)
        {
            for (auto j = i+1; j < nums.size(); j++)
            {
                if (nums[i]+nums[j] == target){
                    o.push_back(i);
                    o.push_back(j); 
                }
            }
        
        }
        return o;
    }
};
// @lc code=end


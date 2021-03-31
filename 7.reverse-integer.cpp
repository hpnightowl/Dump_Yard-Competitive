/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int sum=0;
            while (x!=0)
            {
             if (sum > INT_MAX/10 || sum < INT_MIN/10){
                return 0;
                }
                sum = x % 10 + sum*10 ; // eg 123 ==> 1 + 0*1 will become last word 32 [1] <-- this
                x =x /10;
            }
             return sum;
        }
        
};
// @lc code=end


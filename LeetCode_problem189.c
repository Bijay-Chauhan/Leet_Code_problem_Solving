// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
// Example 1:
// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// Example 2:
// Input: nums = [-1,-100,3,99], k = 2
// Output: [3,99,-1,-100]

class Solution {
public:
    void reverse(vector<int>& nums, int st, int end){
        int temp;
        while(st < end){
            temp = nums[st];
            nums[st] = nums [end];
            nums[end] = temp;
            st++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums, 0, nums.size() - k - 1);
        reverse(nums, nums.size() - k, nums.size() - 1);
        return reverse(nums, 0, nums.size() - 1);
    }
};
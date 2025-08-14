// Given an array of integers nums sorted in non-decreasing order,
// find the starting and ending position of a given target value.
// If target is not found in the array, return [-1, -1].
// You must write an algorithm with O(log n) runtime complexity.
// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Example 2:

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]
// Example 3:

// Input: nums = [], target = 0
// Output: [-1,-1]
class Solution {
public:
    int findfirst(vector<int>& nums, int target){
        int ans = -1;
        int st = 0;
        int end = nums.size()-1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(nums[mid] >= target){
                end = mid - 1;
            }else{
                st = mid + 1;
            }
            if(nums[mid] == target){
                ans = mid;
            }
        }
        return ans;
    }
    int findsecond(vector<int>& nums, int target){
        int ans = -1;
        int st = 0;
        int end = nums.size()-1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(nums[mid] <= target){
                st = mid + 1;
            }else{
                end = mid - 1;
            }
            if(nums[mid] == target){
                ans = mid;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {findfirst(nums, target), findsecond(nums, target)};
    }
};
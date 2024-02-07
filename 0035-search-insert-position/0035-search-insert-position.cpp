class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size(), mid;
        while(l < r){
            mid = (l+r)/2;
            if(nums[mid] > target) {
                r = mid;
            }else if(nums[mid] < target){
                l = mid+1;
            }else {
                return mid;
            }
        }
        return l;
    }
};
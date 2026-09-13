class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=nums.size()*(nums.size()+1)/2;
        int sum2=0;
        for(int x:nums){
            sum2+=x;
        }
        return sum-sum2;
    }
};

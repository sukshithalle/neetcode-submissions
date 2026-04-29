class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int n:nums){
            mp[n]++;
        }
        for(auto n:mp){
            if(n.second>=2){
                return true;
            }
        }
        return false;
    }
};
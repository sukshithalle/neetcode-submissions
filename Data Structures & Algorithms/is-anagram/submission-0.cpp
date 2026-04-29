class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        for(auto n:s){
            mp[n]++;
        }
        for(auto n : t){
            mp[n]--;
        }
        for(auto n:mp){
            if(n.second !=0) return false;
            else return true;
        }

    }
};

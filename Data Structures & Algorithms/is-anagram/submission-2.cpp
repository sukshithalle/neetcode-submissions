class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        vector<int>v(26,0);
        for(int x = 0;x<s.size();x++){
            v[s[x]-'a']++;
            v[t[x]-'a']--;
        }
        for(auto n : v){
            if(n!=0)return false;
        }
        return true;
    }
};

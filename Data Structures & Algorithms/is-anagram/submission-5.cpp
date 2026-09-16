class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> f;
        if(s.length()!=t.length()){
            return false;
        }
        for(int i =0;i<s.length();i++){
            f[s[i]]++;
            f[t[i]]--;
        }
        for(auto it:f){
            if(it.second!=0){
                return false;
            }
        }
        return true;

    }
};

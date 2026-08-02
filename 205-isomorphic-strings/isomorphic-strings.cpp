class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,char>charr1;
        unordered_map<char,char>charr2;
        for(int i =0;i < s.length();i++){
            char s1 = s[i];
            char s2 = t[i];
           if(charr1.count(s1) && charr1[s1] != s2) return false;
           if(charr2.count(s2) && charr2[s2] != s1) return false;


            charr1[s1] = s2;
        charr2[s2] = s1;
        }
       return true;
    }
};
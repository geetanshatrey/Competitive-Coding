// Link to the problem : https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3350/

class Solution {
public:
    void reverseString(vector<char>& s) {
         int i;
         for(i = 0 ; i < s.size()/2; i++) {
             char ch = s[i];
             s[i] = s[s.size() - i - 1];
             s[s.size() - i - 1] = ch;
         }
    }
};

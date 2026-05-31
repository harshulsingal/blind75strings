class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(char ch:s){
            if(isalnum(ch)){
                str+=tolower(ch);
            }
        }
        string str2=str;
        reverse(str2.begin(),str2.end());
        if(str==str2){
            return true;
        }
        return false;
    }
};

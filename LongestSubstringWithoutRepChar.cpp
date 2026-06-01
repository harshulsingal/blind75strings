class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int left=0;
        int right=0;
        int mx=0;
        set<char> st;
        while(right<n&&left<=right){
            while(st.find(s[right])!=st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            mx=max(mx,right-left+1);
            right++;
        }
        return mx;
    }
};

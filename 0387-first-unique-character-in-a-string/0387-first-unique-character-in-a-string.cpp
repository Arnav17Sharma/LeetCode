class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> d(26, 0);
        for(auto x: s){
            d[x - 'a']++;
        }
        for(int i=0; i<s.length(); i++){
            if(d[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};
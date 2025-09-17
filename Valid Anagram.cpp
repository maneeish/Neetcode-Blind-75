// Using Sorting 
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        return false;
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
    
    return s==t;
    }
};


// Using Hash Map or Dictionary
class Solution {
public:
    bool isAnagram(string s1, string s2) {
     if(s1.size() != s2.size()){
        return false;
    }
    unordered_map<char, int> charCount;
    for(char ch: s1) 
        charCount[ch] += 1;
    for(char ch: s2) 
        charCount[ch] -= 1;
    for (auto& pair : charCount) {
        if (pair.second != 0) {
            return false;
        }
    }
    return true;
}   
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = "";
        int minLen = strs[0].length();

        
        for (int i = 1; i < strs.size(); i++) {
            if (strs[i].length() < minLen) {
                minLen = strs[i].length();
            }
        }

        for (int i = 0; i < minLen; i++) {
            char currentChar = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != currentChar) {
                    return prefix;
                }
            }
            prefix += currentChar;
        }

        return prefix;
    }
};
/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters if it is non-empty.*/

class Solution {
public:
    char nextChar(char c) {
        return (c == 'z') ? 'a' : c + 1;
    }

    char kthCharacter(int k) {
        string word = "a";
        while (word.size() < k) {
            string next = "";
            for (char c : word) {
                next += nextChar(c);
            }
            word += next;
        }
        return word[k - 1];
    }
};

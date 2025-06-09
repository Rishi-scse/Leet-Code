class Solution {

public:
    string countAndSay(int n) {
        string result = "1";

        while (--n > 0) {
            string next = "";
            for (int i = 0; i < result.length(); ++i) {
                int count = 1;
                while (i + 1 < result.length() && result[i] == result[i + 1]) {
                    ++count;
                    ++i;
                }
                next += to_string(count) + result[i];
            }
            result = next;
        }

        return result;
    }
};

    

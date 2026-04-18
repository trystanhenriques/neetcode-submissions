class Solution {
public:
    bool isAnagram(string s, string t) {
        
        // Case where the size of the strings are different
        if (s.size() != t.size()) {
            return false;
        }

        bool sameAmountOfOccurrences {false};

        for (size_t i {}; i < s.size(); ++i) {
           char searchChar { s[i] }; 

           if ( numOfOccurrences(s, searchChar) == numOfOccurrences(t, searchChar) )
                sameAmountOfOccurrences = true;
            else
                return false;
        }

        return sameAmountOfOccurrences;
    }

    size_t numOfOccurrences(const string& str, char searchChar) {

        size_t count {};

        for ( char c : str ) {
            if (c == searchChar)
                ++count;
        }
        return count;
    }
};

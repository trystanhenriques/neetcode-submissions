class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> hasDuplicates {nums.begin(), nums.end()};
        

        // Original vector is larger than the set, meaning there must be duplicates
        if (nums.size() > hasDuplicates.size()) {
            return true;
        }

        return false;
    }
};
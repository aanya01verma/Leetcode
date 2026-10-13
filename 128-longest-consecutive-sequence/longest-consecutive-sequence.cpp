class Solution {
public:
    int longestConsecutive(vector<int> &nums) {
        unordered_set <int> values (nums.begin(), nums.end());
        int longestlength = 0;

        for (int value : values) {
            if (values.count(value-1)) {
                continue;
            }
            int currentlength = 1;
            int nextvalue = value + 1;

            while (values.count(nextvalue)) {
                currentlength++;
                nextvalue++;
            }
            longestlength = max (longestlength, currentlength);
        }

        return longestlength;
    }
};
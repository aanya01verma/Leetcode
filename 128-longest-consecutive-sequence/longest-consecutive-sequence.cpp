class Solution {
public:
    int longestConsecutive(vector<int> &nums) {
        vector <int> sortedNums = nums;
        if (sortedNums.empty()) {
            return 0;
        }
        sort (sortedNums.begin(), sortedNums.end());

        int longestlength = 1;
        int currentlength = 1;
        int previousvalue = sortedNums[0];

        for (int i = 0; i < sortedNums.size(); i++) {
            if (sortedNums[i] == previousvalue + 1) {
                currentlength++;
                previousvalue = sortedNums[i];
            }
            else if (sortedNums[i] != previousvalue) {
                currentlength = 1;
                previousvalue = sortedNums[i];
            }
            longestlength = max (longestlength, currentlength);
        }

        return longestlength;
    }
};
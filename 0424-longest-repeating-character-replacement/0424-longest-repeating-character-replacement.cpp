
        class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int left = 0, maxCount = 0, maxLength = 0;

        for (int right = 0; right < s.size(); right++) {
            freq[s[right] - 'A']++;
            
            // Update max frequency
            maxCount = max(maxCount, freq[s[right] - 'A']);
            
            // If invalid window
            while ((right - left + 1) - maxCount > k) {
                freq[s[left] - 'A']--;
                left++;
            }
            
            // Update answer
            maxLength = max(maxLength, right - left + 1);
        }
        
        return maxLength;
    }
};
    
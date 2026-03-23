class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> r;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (i && nums[i] == nums[i - 1]) continue;
            int l = i + 1, h = nums.size() - 1;
            while (l < h) {
                int s = nums[i] + nums[l] + nums[h];
                if (s == 0) {
                    r.push_back({nums[i], nums[l++], nums[h--]});
                    while (l < h && nums[l] == nums[l - 1]) l++;
                    while (l < h && nums[h] == nums[h + 1]) h--;
                } else if (s < 0) l++;
                else h--;
            }
        }
        return r;
    }
};
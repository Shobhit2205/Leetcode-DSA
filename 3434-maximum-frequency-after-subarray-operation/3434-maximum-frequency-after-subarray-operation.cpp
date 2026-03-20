class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        int ans = mp[k];
        
        for(auto it: mp){
            int num = it.first;
            if(num == k) continue;

            int best = 0, curr = 0;
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] == num){
                    curr++;
                }
                else if(nums[i] == k) {
                    curr--;
                }

                if(curr < 0) curr = 0;

                if(curr > best) best = curr;
            }
            if(mp[k] + best > ans){
                ans = mp[k] + best;
            }
        }
        return ans;
    }
};
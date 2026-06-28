class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(auto i:nums) freq[i]++;
        vector<pair<int,int>> ans;
        for(auto i:freq) ans.push_back({i.second,i.first});
        sort(ans.begin(),ans.end(), greater<pair<int,int>>());
        vector<int> sol;
        for(int i=0;i<k;i++){
            sol.push_back(ans[i].second);
        }
        return sol;
    }
};

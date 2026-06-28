class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> sorted = strs;
        for(int i=0;i<strs.size();i++) sort(sorted[i].begin(),sorted[i].end());
        map<string,vector<string>> sol;
        for(int i=0;i<strs.size();i++){
            sol[sorted[i]].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto i:sol) ans.push_back(i.second);
        return ans;
    }
};

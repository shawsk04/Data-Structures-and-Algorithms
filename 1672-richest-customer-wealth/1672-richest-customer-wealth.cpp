class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx_wealth=0;
        int wealth=0;
        for(int i=0; i<accounts.size(); i++){
            for(int j=0; j<accounts[0].size(); j++){
                wealth+=accounts[i][j];
                
            }
            mx_wealth=max(wealth, mx_wealth);
            wealth=0;
        }
        
        return mx_wealth;
    }
};
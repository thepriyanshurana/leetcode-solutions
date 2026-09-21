class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int Profit = 0;

        for(int i=1;i<prices.size();i++){
            if(prices[i]<buy){
                buy = prices[i];
            }
            if(prices[i]-buy > Profit){
                Profit = prices[i]-buy;
            }
        }

        return Profit;
    }
};
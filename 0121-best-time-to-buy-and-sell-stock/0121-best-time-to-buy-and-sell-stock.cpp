class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minProfit= INT_MAX;
        int maxProfit=0;

        for(int price : prices){
            if(price < minProfit){
                minProfit=price;
            }

            if(price-minProfit > maxProfit){
                maxProfit = price - minProfit;
            }
        }

        return maxProfit;
    }
};
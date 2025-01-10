// Greedy approach

#include <stdio.h>
#include <vector>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {

        if(prices.empty())
        {
            return 0;
        }
        int maxPrice = 0;
        int minPrice = prices[0];
        
        for (int i = 0; i < prices.size(); i++) {
             minPrice = min(prices[i], minPrice);
            int profit = prices[i] - minPrice;
            maxPrice = max(profit, maxPrice);
        }
        return maxPrice;
    }
};
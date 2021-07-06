#include<bits/stdc++.h>
class Solution {
public:
 
    int maxProfit(vector<int>& prices) {
        int s1 = prices[0], s2 = prices[0],profit = 0;
		
		for(int i=0; i<prices.size(); i++) {
			if (prices[i] <= s1) {
				s1 = prices[i];
				s2 = prices[i];
			}
			else {
				s2 = prices[i];
			}
			profit = max(profit, s2 - s1);
		}
		return profit;        
    }

};
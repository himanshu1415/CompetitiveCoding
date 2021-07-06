class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sp = prices[0], cp = prices[0], profit = 0,sum=0,flag;
		for(int i=0; i<prices.size(); i++) {
			if (prices[i] <= cp) {
				cp = prices[i];
				sp = prices[i];
			}
			else {
				sp = prices[i];
                profit = max(profit, sp - cp);
                flag=1;
                sum = sum+profit; 
			}
            if(flag==1)
            {
                cp = prices[i];
				sp = prices[i];
                profit=0;
            }
            
		}
		return sum;        
    }
};


//  Alternative solution
/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxprofit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i - 1])
                maxprofit += prices[i] - prices[i - 1];
        }
        return maxprofit;        
    }
};
*/

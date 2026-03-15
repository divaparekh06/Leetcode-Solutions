class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
    int min_price = prices[0];
    
    int max_profit = 0;
    for(int i=1; i<prices.size();i++){
        if(prices[i]<min_price){
            min_price = prices[i];
            
        }
        int profit = prices[i] - min_price;
        if(profit>max_profit){
        max_profit = profit;
    }
    }
    
    
    return max_profit;
        
    }
};

//------------LOGIC------------
//Trick: Best profit today = today’s price − cheapest price before today
// The rule of the problem is:

// You must BUY before you SELL.

// So when we reach a day i, the best profit we can make must use a price from an earlier day.

// That leads to this idea:

// profit = current_price − lowest_price_before_today

// So during the scan we keep track of two things:

// minimum price seen so far (best day to buy)

// maximum profit seen so far


// prices = [7,1,5,3,6,4]
//   | Day | Price | Minimum so far | Profit | Max Profit |
// | --- | ----- | -------------- | ------ | ---------- |
// | 0   | 7     | 7              | 0      | 0          |
// | 1   | 1     | 1              | 0      | 0          |
// | 2   | 5     | 1              | 4      | 4          |
// | 3   | 3     | 1              | 2      | 4          |
// | 4   | 6     | 1              | 5      | 5          |
// | 5   | 4     | 1              | 3      | 5          |





//---------------------My Original Code-----------------
#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int min_price = prices[0];
    int day = 0;
    for(int i=1; i<prices.size();i++){
        if(prices[i]<min_price){
            min_price = prices[i];
            day = i+1;
        }
    }
    int max_price = prices[day];
    for(int i=day;i<prices.size();i++){
        if(prices[i]>max_price){
            max_price = prices[i];
        }

    }
    return max_price - min_price;
    
    
    

        
    }

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    cout <<"The maximum profit: "<<maxProfit(prices);
    
    
    // But this code worked particularly for this test case.
    

}

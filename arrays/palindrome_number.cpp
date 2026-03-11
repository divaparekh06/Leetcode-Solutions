class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int temp = x;
        if(x<0) return false;
        else{
            while(x>0){
                int n = x%10;
                rev= rev*10 + n;
                x/=10;
            }
            return rev==temp;
        }
        
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            
                if(nums[i]==nums[i-1]){
                    return true;
                    
                }
        }
        return false;
        
    }
};

//"One approach is sorting the array and checking adjacent elements in O(n log n).
//But we can improve to O(n) using a hash set to track previously seen values."
//Interviewer Psychology (Important)

// If you immediately say:

// I'll sort the array and check neighbors

// Interviewer may ask:

// Can we do better than O(n log n)?

// At that moment you should say:

// Yes, using a hash set we can do it in O(n).

// That’s the perfect interview response.

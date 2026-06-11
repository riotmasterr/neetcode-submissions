class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int consecutive_1 = 0;
        int max_1 = 0;
        for(int num : nums){
            if(num == 1){
                consecutive_1 += 1;
                max_1 = max(max_1, consecutive_1);
            }
            else if(num == 0){
                consecutive_1 = 0;
            }
        }
        return max_1;  // ← added
    }  // ← added
};
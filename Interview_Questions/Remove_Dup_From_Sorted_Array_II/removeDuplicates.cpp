#include <vector>
using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            
            int length = nums.size();

            if(length < 2)
                return length;
            
            int i = 2;

            for(int j = 2; j < length; j++) {
                if(nums[j] != nums[i-2]) {
                    nums[i] = nums[j];
                    i++;
                }
            }

            return i;
        }
};
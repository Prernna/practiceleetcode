Given an array of integers called nums, you can perform the following operation while nums contains at least 2 elements:

Choose the first two elements of nums and delete them.
The score of the operation is the sum of the deleted elements.

Your task is to find the maximum number of operations that can be performed, such that all operations have the same score.
//Solution

class Solution {
public:
    int maxOperations(vector<int>& nums) {
        
    int n = nums.size();
    int sum = nums[0] + nums[1];
    int cnt = 0;
    for(int i =0;i<n-1; i+=2){
        if(sum==(nums[i]+nums[i+1])) cnt++;
        else break;
    }    
    return cnt; 
        
    }
};

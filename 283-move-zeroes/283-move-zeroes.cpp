class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    //naive approach 
    int res=0;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        if(nums[i]!=0)
        {
            nums[res]=nums[i];
            res++;
        }
    }
    for(int i=res;i<n;i++) // starting with res not res+1, because in the loop last if will increase the result
    {
        nums[i]=0;
    }
    }
};
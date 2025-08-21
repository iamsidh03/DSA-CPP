class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int ans;
        int first=0,second=0;

        for(int i=n-1;i>=0;i--){
            ans=max(nums[i]+second,first);
            second=first;
            first=ans;
        }
        return ans;
    }
};
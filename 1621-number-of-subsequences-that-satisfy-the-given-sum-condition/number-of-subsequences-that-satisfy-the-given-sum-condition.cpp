class Solution {
public:
    
    int numSubseq(vector<int>& nums, int target) {
        int MOD=1e9+7;
         sort(nums.begin(), nums.end());
        int n=nums.size();
        vector<int>power(n,1);
        for(int i=1;i<n;i++){
            power[i]=(power[i-1]*2)%MOD;
        }

       int i=0;
       int j=n-1;
       int res=0;
       while(i<=j){
        if(nums[i]+nums[j]<=target){
            res= (res+power[j-i])%MOD;
            i++;
        }
        else j--;
       }
       return res;
    }
};
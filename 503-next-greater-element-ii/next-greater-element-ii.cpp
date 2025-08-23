class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        int n =nums.size();
        vector<int>ans(n,-1);
        
        for(int i=2*n-1;i>=0;i--){
            int idx=i%n;
            
            while(!st.empty() && st.top()<=nums[idx]) st.pop();
                
            
        
                if(!st.empty())
                    ans[idx]=st.top();
                
            st.push(nums[idx]);
        }
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>>ans;

        sort(nums.begin(),nums.end());

       
        int n = nums.size();

        for(int i=0; i<n; i++){
                //avoid repeating i values
            if(i>0 && nums[i] == nums[i-1]) continue;

             //like 2 pointer approch
             
            int j = i+1 , k = n-1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0){
                    j++;
                }else if(sum > 0){
                    k--;
                }else{
                    ans.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;
                // avoid repeating j values
                while(j<k && nums[j]==nums[j-1]) j++;
                }
            }
        }
        return ans;
    }
};
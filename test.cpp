class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;

        int n=nums.size();
        if(n==0)
            return {};
        
        int p,q;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-3;i++)
        {
            int t3=target-nums[i];
            for(int j=i+1;j<n-2;j++)
            {
                int t2=t3-nums[j];
                p=j+1;
                q=n-1;
                while(p<q)
                {
                    int temp=nums[p]+nums[q];
                    if(temp==t2)
                    {
                        vector<int> tmp={nums[i],nums[j],nums[p],nums[q]};
                        res.push_back(tmp);
                        while(p<q && nums[p]==tmp[2])
                            p++;
                        while(q>p && nums[q]==tmp[3])
                            q--;
                        continue;
                    }
                    if(temp<t2)
                    {
                        p++;
                        continue;
                    }
                    else
                    {
                        q--;
                        continue;
                    }
                }
                while(nums[j]==nums[j+1] && j<n-2)
                    j++;
            }
                while(nums[i]==nums[i+1] && i<n-3)
                    i++;
        }
        return res;
    }
};

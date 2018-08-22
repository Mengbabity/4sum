class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        int res=0;
        
        map<int,int> temp;
        
        for(auto a:A)
            for(auto b:B)
                temp[a+b]++;
        
        for(auto c:C)
        {
            for(auto d:D)
            {
                auto it=temp.find(0-c-d);
                if(it!=temp.end())
                    res+=it->second;
            }
        }
        
        return res;
            
                
    }
};

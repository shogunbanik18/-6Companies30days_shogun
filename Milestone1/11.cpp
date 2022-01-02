class Solution{
public:
    int *findTwoElement(int *arr, int n)
    {
        int *ans=new int[2];
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        
        for(auto x:mp)
        {
            if(x.second>1)
            {
                ans[0]=x.first;
            }
        }
        
        for(int i=1;i<=n;i++)
        {
            if(mp[i]==0)
            {
                ans[1]=i;
                break;
            }
        }
        return ans;
    }
};

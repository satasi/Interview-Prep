int sum = 0;
    int ans = INT_MIN;
    int total=0;
    for(int i=0;i<n;i++){
        sum=sum+A[i]*i;
        total+=A[i];
        
    }
    ans=sum;
    for(int i=n-1;i>=1;i--)
    {
        int nextsum = sum + total -n*A[i];//8*0 + 3*1 +1*2 +2*3
                                        //+   8   + 3  +1  +2 -4*A[n-1]--next config
        ans = max(ans, nextsum);
        sum = nextsum;
        
       
    }
    return ans;
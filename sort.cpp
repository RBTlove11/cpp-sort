void Sortdfs(vector<int>&nums, int first, int last)  
{  
    if(first<last)  
    {  
        int a=first+rand()%(last-first+1);  
        swap(nums[first],nums[a]);  
        int i=first+1, j=last;  
        //分成小于等于和大于两段  
        while(true)  
        {  
            while(i<=j && nums[j]>nums[first])  
                j--;  
            while(i<j && nums[i]<=nums[first])  
                i++;  
            if(i<j)  
                swap(nums[i],nums[j]);  
            else  
                break;  
        }  
        //first到j小于等于，j+1到last大于  
  
         //分成小于和等于两段  
        int p=first+1, q=j;  
        while(true)  
        {  
            while(p<=q && nums[q]==nums[first])  
                q--;  
            while(p<q && nums[p]<nums[first])  
                p++;  
            if(p<q)  
                swap(nums[q],nums[p]);  
            else  
                break;      
        }  
        swap(nums[first], nums[q]);  
        //first到q-1小于，q到j等于  
        Sortdfs(nums, j+1, last);  
        Sortdfs(nums, first, q-1);  
    }    
}  

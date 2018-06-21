void quick_sort2(vector<int>&nums, int first, int last)  
{  
    if (first<last)  
    {  
        int a = first + rand() % (last - first + 1), aa = nums[a], l = first, r = last, i = first;  
        while (i <= r){  
            if (nums[i] > aa){  
                swap(nums[i], nums[r]);  
                --r;  
            }  
            if (nums[i] == aa) ++i;  
            if (i <= r && nums[i] < aa){  
                swap(nums[i], nums[l]);  
                ++l, ++i;  
            }  
        }  
        quick_sort2(nums, first, l-1);  
        quick_sort2(nums, r+1, last);  
    }  
}  

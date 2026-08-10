#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i,j,*sonuc;
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if (nums[i]+nums[j]==target){
            sonuc=(int*)malloc(2 * sizeof(int));

            sonuc[0]=i;
            sonuc[1]=j;
            
            *returnSize=2;
            return sonuc;
            }    
        }
    }

    *returnSize=0;
    return 0;
}

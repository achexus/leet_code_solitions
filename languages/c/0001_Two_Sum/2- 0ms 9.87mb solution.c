#include <stdlib.h>
 
 struct pocket {
    int value;
    int index;
     };

int sort(const void *a, const void *b){
    const struct pocket *pocketA = (const struct pocket*)a;
    const struct pocket *pocketB = (const struct pocket *)b;
    return (pocketA->value - pocketB->value);
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i,j,left=0,right=numsSize-1,eq;
    struct pocket *pockets = (struct pocket*) malloc (numsSize * sizeof(struct pocket));
    
    for (i=0;i<numsSize;i++){
        pockets[i].value = nums[i];
        pockets[i].index = i;
    }

    qsort(pockets, numsSize, sizeof(struct pocket), sort);

    while (left < right){
    eq = pockets[left].value + pockets[right].value;

    if(eq == target){
    int *result = (int*) malloc(2 * sizeof(int));
        result[0] = pockets[left].index;
        result[1] = pockets[right].index;
        *returnSize = 2;
        free(pockets);
        return result;}

        else if (eq < target) {
            left++;
        }
        else {
            right--;
        }
    }
    
    *returnSize = 0;
    free(pockets);
    return 0;
}

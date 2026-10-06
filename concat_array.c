
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize * 2;
    
    int* arr3 = (int*)malloc((*returnSize) * sizeof(int));
    
    
    for (int i = 0; i < numsSize; i++) {
        arr3[i] = nums[i];           
        arr3[i + numsSize] = nums[i]; 
        
       
    }
    
    return arr3;
}

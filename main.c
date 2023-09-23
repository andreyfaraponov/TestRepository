#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define STRING_SIZE 10

int* twoSum(int* nums, int numsSize, int target, int* returnSize);
int* resultArray(int i, int j);
int getSum(int firstNum, int secondNum);

int main(void)
{
    int* nums = malloc(sizeof(int) * 4);
    int returnSize = 0;
    nums[0] = 2;
    nums[1] = 7;
    nums[2] = 11;
    nums[3] = 15;

    int* resultArray = twoSum(nums, 4, 7, &returnSize);
    for (size_t i = 0; i < returnSize; i++)
    {
        printf("%d\n", resultArray[i]);
    }
    
    free(resultArray);

    return 0;
}


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    for (int i = 0; i < numsSize; i++)
    {
        for(int j = i + 1; j < numsSize; j++)
        {
            int sum = getSum(nums[i], nums[j]);
            
            if (sum == target)
                {
                    *returnSize = 2;
                    return resultArray(i, j);
                }
        }
    }

    *returnSize = 2;
    return resultArray(0, 1);
}

int getSum(int firstNum, int secondNum) {
    return firstNum + secondNum;
}

int* resultArray(int i, int j) {
    int* array = malloc(sizeof(int) * 2);
    array[0] = i;
    array[1] = j;

    return array;
}



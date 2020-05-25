#include <stddef.h>
#include <stdlib.h>

//Find the missing number in a AP

int find_missing(const int *nums, size_t n)
{
    int firstDif = nums[1] - nums[0];
    int lastDif = nums[n-1] - nums[n-2];
    int finalDif;

    //printf("%d-%d", firstDif, lastDif);
    //Finding the correct factor of the AP
    if(abs(firstDif) > abs(lastDif)){
      finalDif = lastDif;
    } else {
      finalDif = firstDif;
    }
    for(int i=0; i<(n-1); i++){
      if((nums[i+1]-nums[i]) != finalDif){
        return (nums[i] + finalDif);
      }
    }
    //If none of the results differ, then the factor is 0, suffice to return the first value
    return nums[0];
}

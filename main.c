#include <stdio.h>
#include <stdlib.h>
// void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     int* tmp = (int*)malloc((m+n)*sizeof(int));
//     while (i <= m && j <= n)
//     {
//         if (nums1[i] <= nums2[j])
//             tmp[k++] = nums1[i++];
//         else
//             tmp[k++] = nums2[j++];
//     }
//     while (i <= m)
//     {
//         /* code */
//         tmp[k++] = nums1[i++];
//     }
//     while (j <= m)
//     {
//         /* code */
//         tmp[k++] = nums2[j++];
//     }
//     for (size_t i = 0; i < k; i++)
//     {
//         /* code */
//         nums1[i] = tmp[i];
//     }
//     free(tmp);
//     tmp = NULL;
// }

// int main()
// {
//     int a1[4] = {1, 2, 3, 0};
//     int a2[1] = {4};
//     merge(a1, 4, 2, a2, 1, 0);
//     int len = sizeof(a1) / sizeof(a1[0]);
//     for (size_t i = 0; i < len; i++)
//     {
//         /* code */
//         printf("%d", a1[i]);
//     }
//     return 0;
// }
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    // Initialize i and j to store indices of the last element of 1st and 2nd array respectively...
    int i = m - 1;
    int j = n -1;
    // Create a loop until either of i or j becomes zero...
    while(i>=0 && j>=0) {
        if(nums1[i] > nums2[j]) {
            nums1[i+j+1] = nums1[i];
            i--;
        } else {
            nums1[i+j+1] = nums2[j];
            j--;
        }
    }
    // While j does not become zero...
    while(j >= 0) {
        nums1[i+j+1] = nums2[j];
        j--;
    }
}
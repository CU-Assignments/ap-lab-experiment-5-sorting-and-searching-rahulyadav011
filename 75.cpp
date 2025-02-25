public class Solution {
    public void sortColors(int[] nums) {
        int low = 0;        // Pointer for 0s
        int mid = 0;        // Pointer for 1s
        int high = nums.length - 1;  // Pointer for 2s
        
        while (mid <= high) {
            if (nums[mid] == 0) {
                // Swap nums[low] and nums[mid], then move both pointers
                swap(nums, low, mid);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                // Just move the mid pointer forward
                mid++;
            } else {
                // Swap nums[mid] and nums[high], then move the high pointer
                swap(nums, mid, high);
                high--;
            }
        }
    }

    // Helper function to swap two elements in the array
    private void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}
Input
nums =
[2,0,2,1,1,0]
Output
[0,0,1,1,2,2]
Expected
[0,0,1,1,2,2]

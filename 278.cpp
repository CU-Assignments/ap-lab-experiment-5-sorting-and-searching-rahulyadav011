public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (isBadVersion(mid)) {
                right = mid;  // mid might be the first bad version, so we move to the left half
            } else {
                left = mid + 1;  // we know all versions before mid are good, so we move to the right half
            }
        }
        
        return left;  // left and right will converge at the first bad version
    }
}
Input
n =
5
bad =
4
Output
4
Expected
4

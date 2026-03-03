#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        multiset<int> arr;   // use multiset to keep duplicates
        
        // insert first m elements of nums1
        for(int i = 0; i < m; i++) {
            arr.insert(nums1[i]);
        }
        
        // insert all elements of nums2
        for(int i = 0; i < n; i++) {
            arr.insert(nums2[i]);
        }
        
        // copy back into nums1
        int i = 0;
        for(int val : arr) {
            nums1[i++] = val;
        }
    }
};
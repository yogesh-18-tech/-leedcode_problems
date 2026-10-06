class Solution(object):
    def concatWithReverse(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        arr=nums[::-1]
        nums=nums+arr
        return nums
        

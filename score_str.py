class Solution(object):
    def scoreOfString(self, s):
        """
        :type s: str
        :rtype: int
        """
        su1=0
        #su,su1=0
        for i in range (len(s)-1):
            su=abs(ord(s[i]) - ord(s[i+1]))
            su1=su1+su
            
        return su1

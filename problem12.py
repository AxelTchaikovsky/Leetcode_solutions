class Solution:
    def intToRoman(self, num: int) -> str:
        numlst = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
        roma = ['M',    'CM','D', 'CD','C','XC','L','XL','X','IX','V','IV','I']

        result = ''
        for i in range(len(numlst)):
            while num-numlst[i]>=0:
                num -= numlst[i]
                result += roma[i]

        return result
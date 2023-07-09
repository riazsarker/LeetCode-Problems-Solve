class Solution {
public:
    bool isPalindrome(int x) {
        long long int reverse = 0, rem, temp;
   
   
 
    temp = x;
    //loop to find reverse number
    while(temp != 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp /= 10;
    };
    
    // palindrome if num and reverse are equal
    if (x < 0) return false;
    if (x == reverse)
        return true;
    else
       return false;

    }
};
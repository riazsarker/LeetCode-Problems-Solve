class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         int carry = 1; 
    for (int i = digits.size() - 1; i >= 0; --i) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10; // Update the current digit
        carry = sum / 10;     // Calculate carry for the next iteration
    }
    
    if (carry) {
        digits.insert(digits.begin(), carry); // Insert carry as the most significant digit
    }
    
    return digits;
    }
};
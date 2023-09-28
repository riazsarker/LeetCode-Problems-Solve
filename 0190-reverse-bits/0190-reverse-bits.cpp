class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t t = 0;
        for(int i=0;i<=31;i++){
            if(n & (1<<i)){
                t = t | (1<<(31-i));
            }
        }
        return t;
        
    }
};
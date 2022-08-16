**Editorial**
**Hint**  Think bitwise instead of converting to decimal.
**Solution**
This was actually very easy question. We can easily check from given conditions that if subtract A from B answer will always be 1. 
Proof 
Let n+1th bit is rightmost set bit then sum of all bits which are to the left of n+1th bit will be same in both the numbers. So the actual answer is 2^n^ -2^0^ - 2^1^ ...... -2^n^ = 1.
So our answer is 1.


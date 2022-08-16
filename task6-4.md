##                  Gift Comparator  	
Pulak and Pulkit are twin brothers so they both celebrate their birthdays on the same date. Also, they both love to receive gifts. Pulak remains happy with whatever he gets from his parent but his brother Pulkit always wants to choose the gift which has more price. Mr Priyansh wants to give both of them gifts but he is aware of the nature of Pulkit so he has decided to convert the price of gifts from decimal representation to binary representation so that it becomes hard for Pulkit to guess the price. Gifts given by Mr Priyansh are really very costly so instead of converting the price into decimal representation Pulkit wants to calculate the difference between the prices. For this, he needs your help. He has noticed the following pattern in the binary strings.
1.  All the bits of the second string which are to the right of the rightmost bit of the first string are set.
2. The rightmost bit of the first string is 0 in the second string.
3. Lengths of both strings are the same.
For example string A=100100 and string B=100011.
Help Pulkit in finding the difference between the prices of gifts so that he can choose the better one.

**Input**
Each test contains multiple test cases. The first line contains the number of test cases t(1≤t≤10^9). Description of the test cases follows.

The first line of each test case contains string A.(1≤|A|≤10^18).
The second line of each test case contains string B. (1≤|B|≤10^18).

**Output**

For each test case print one integer absolute difference between the prices of gifts.

**Example**

Input
1
100100
100011

Output 
1


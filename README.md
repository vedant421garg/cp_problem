# cp_problem
## cp_problem
### cp_problem

- heelo bhai
Problem Statement
You are given three strings “A”, “B” and “C”. Your task is to check whether “C” is formed by an interleaving of A and B. C is said to be interleaving “A” and “B”, if the length of “C” is equal to the sum of the length of A and length of B, all the characters of “A” and “B” are present in “C”, and the order of all these characters remains the same in all three strings.
For Example:
If A = “aab”, B = “abc”, C = “aaabbc”
Here C is an interleaving string of A and B. Because C contains all the characters of A and B and the order of all these characters is also the same in all three strings.

If A = “abc”, B = “def”, C = “abcdefg”
Here C is not an interleaving string of A and B as neither A nor B contains the character ‘g’.
Input Format:
The first line contains an integer 'T' which denotes the number of test cases or queries to be run. Then, the T test cases follow.

The first and only line of each test case contains three strings A, B, and C each separated by a single space.
Output Format:
For each test, print True, if C is an interleaving string of A and B, otherwise print False 

Output for each test case will be printed in a separate line.
Note:
You do not need to print anything; it has already been taken care of. Just implement the given function.
Constraints:
1 <= T <= 100
1 <= |A|, |B| <= 1000
1 <= |C| <= 2000
where |A|, |B|, |C| denotes the length of string A, B and C respectively.   
All the characters of the strings A, B, and C contain lowercase English letters only.

Time limit: 1 second
Sample Input 1:
2
abdd fef abfddef
aab abc aabbc
Sample Output 1:
True
False
Explanation For Sample 1:
For the first test case, all the characters of A and B are present in C, and All the characters of A are present in C in the same order as “abfddef”, and All the characters of B are present in C in the same order as “abfddef”.
For the second case, length of C < (length of A + length of B).
Sample Input 2:
2
zxry qwr qwzxxryr
a a aa
Sample Output 2:
False
True

Bit manipulation is a technique in computer programming that involves manipulating the individual bits of binary data. Here is a summary of some common bit manipulation techniques: 
1. Bitwise AND: The bitwise AND operator (&) returns a 1 in each bit position where the corresponding bits of both operands are 1. 
2. Bitwise OR: The bitwise OR operator (|) returns a 1 in each bit position where at least one of the corresponding bits of both operands is 1. 
3. Bitwise XOR: The bitwise XOR operator (^) returns a 1 in each bit position where the corresponding bits of either but not both operands are 1.
4. Bitwise NOT: The bitwise NOT operator (~) flips all the bits in the operand. It converts 0 to 1 and 1 to 0.  
5. Bitwise left shift: The left shift operator (<<) shifts the bits of its left operand to the left by a specified number of positions. The vacated positions are filled with zeros.
6. Bitwise right shift: The right shift operator (>>) shifts the bits of its left operand to the right by a specified number of positions. The vacated positions are filled with zeros or the sign bit, depending on the type of the operand.
7. Setting a bit: To set a bit in a binary number, use the bitwise OR operator (|) with a mask that has a 1 in the bit position to be set and zeros elsewhere.
8. Clearing a bit: To clear a bit in a binary number, use the bitwise AND operator (&) with a mask that has a 0 in the bit position to be cleared and ones elsewhere.
9. Flipping a bit: To flip a bit in a binary number, use the bitwise XOR operator (^) with a mask that has a 1 in the bit position to be flipped and zeros elsewhere.
10. Checking if a bit is set: To check if a bit in a binary number is set, use the bitwise AND operator (&) with a mask that has a 1 in the bit position to be checked and zeros elsewhere. If the result is non-zero, the bit is set.
11. Checking if a bit is clear: To check if a bit in a binary number is clear, use the bitwise AND operator (&) with a mask that has a 0 in the bit position to be checked and ones elsewhere. If the result is zero, the bit is clear.

Bit manipulation is commonly used in low-level programming, such as device drivers and embedded systems, where memory and processing power are limited. It can also be used in high-level programming for performance optimization or algorithm design.

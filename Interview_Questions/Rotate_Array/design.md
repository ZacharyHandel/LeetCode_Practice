# Problem
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

# Solution
- I started this solution way too complicated, but after a little research this is when I found the reverse() function from the algorithms library for C++. If we want to rotate the array by k, we must avoid k being negative by modding it by the size of the array so we can find the overflow amount. Then, we reverse the array, reverse the first k%n elements, then we reverse the remaining elements past k%n (starting with the n+k element). This will get us a rotated array by k.
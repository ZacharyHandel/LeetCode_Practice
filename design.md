# Problem
Given an integer array nums sorted in non-decreasing order, remove some duplicates in-place such that each unique element appears at most twice. The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.

# Solution Explained
For this solution, I decided to choose to iterate throughout the array to compare the elements within it. To start, we must consider a few cases:
- If the array is only 2 elements long, we must accept it.
- We must assume that the first 2 elements of the array will always stay the same. This is because we cannot compare these two elements to be an exeding third number in groups of 3.

Now, for my comparison strategy (since we can allow elemenets to be shown no more than twice), I decided it was best to compare each element to the element 2 indexes behind it (n-2). Fruthermore, I used 2 index counters that will keep track of which element we will be changing and which element we will be checking. If the element 2 spaces behind the element we want to change is different than the element that we are checking, we will change the elemtn and increment the index of both index trackers. However, if they are the same, we will only increment the comparison index tracker. This also allows us to shift all the elements to the front of the array to where the array size will be the requested k.

# Future Fixes
I probably could have made this more elegant in terms of the condiditons within the conditional statements.
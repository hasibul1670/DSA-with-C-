def two_sum(nums, target):
    # Create a dictionary to store the complement of each number and its index
    num_map = {}

    # nums = [2, 7, 11, 15]
    # Iterate through the list with indices
    for i, num in enumerate(nums):
        # Calculate the complement needed to reach the target
        print("index : ", i)
        print("value : ", num)
        complement = target - num
        # 9-2=7
        print("diff", complement)
        # Check if the complement exists in the dictionary
        if complement in num_map:
            # Return the indices of the current number and its complement
            print("diff-index", num_map[complement])
            return [num_map[complement], i]
        num_map[num] = i
    return []


# Test the function with the given input
nums = [2, 7, 11, 15]
target = 17
result = two_sum(nums, target)
print(result)  # Output: [0, 1]

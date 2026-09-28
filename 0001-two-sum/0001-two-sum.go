func twoSum(nums []int, target int) []int {
    mp := make(map[int]int)

    for i := 0; i < len(nums); i++ {
        val, exists := mp[target - nums[i]]

        if exists {
            return []int{i, val}
        } else {
            mp[nums[i]] = i
        }
    }

    return []int{0, 0}
}
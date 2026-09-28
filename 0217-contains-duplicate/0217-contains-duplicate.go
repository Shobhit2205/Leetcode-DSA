func containsDuplicate(nums []int) bool {
    mp := make(map[int]int)

    for i:= 0; i < len(nums); i++ {
        _, exists := mp[nums[i]]
        if exists {
            return true
        } else {
            mp[nums[i]] = i
        }
    }
    return false
}
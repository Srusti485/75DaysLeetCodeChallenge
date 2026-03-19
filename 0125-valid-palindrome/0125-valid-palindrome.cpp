class Solution {
public:
    bool isPalindrome(string s) {
     int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        // Skip non-alphanumeric characters from the left
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        // Skip non-alphanumeric characters from the right
        while (left < right && !isalnum(s[right])) {
            right--;
        }
        // Compare characters ignoring case
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    string s1 = "A man, a plan, a canal: Panama";
    string s2 = "race a car";
    string s3 = " ";

    cout << boolalpha; // print true/false instead of 1/0
    cout << isPalindrome(s1) << endl; // true
    cout << isPalindrome(s2) << endl; // false
    cout << isPalindrome(s3) << endl; // true

    return 0;   
    }
};
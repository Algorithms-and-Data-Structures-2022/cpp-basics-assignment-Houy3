#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    int diff = left - right;
    return diff*diff;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {

    if (mask < 0 or bit_pos < 0) {
      return false;
    }
    for (int i = 0; i < bit_pos; i++) {
      mask = mask / 2;
    }
    return mask % 2 == 1;
  }

  // Task 3
  int max3(int left, int middle, int right) {

    int max = left;
    if (middle > max) {
      max = middle;
    }
    if (right > max) {
      max = right;
    }

    return max;
  }

  // Task 4
  void swap_args(int *left, int *right) {

    if (left != nullptr && right != nullptr) {
      int leftCopy = *left;
      *left = *right;
      *right = leftCopy;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {

    if (arr == nullptr || length <= 0) {
      return 0;
    }

    int sum = 0;
    for (int i = 0; i < length; i++) {
      sum += arr[i];
    }
    return sum;
  }

  // Task 6
  int* find_max_elem(int *arr, int length) {

    if (arr == nullptr || length <= 0) {
      return nullptr;
    }

    int* max = arr;
    for (int i = 0; i < length; i++) {
      if (*max < arr[i]) {
        max = &arr[i];
      }
    }

    return max;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

    if (length <= 0) {
      return nullptr;
    } else {
      int* arr = new int[length];
      std::fill(arr, arr + length, init_value);
      return arr;
    }
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    if (length <= 0 || arr_in == nullptr) {
      return nullptr;
    } else {
      int* arr = new int[length];
      std::copy(arr_in, arr_in+length, arr);
      return arr;
    }

  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    if (arr == nullptr) {
      os << "Invalid argument: arr\n";
    } else if (length <= 0) {
      os << "Invalid argument: length\n";
    } else if (k <= 0) {
      os << "Invalid argument: k\n";
    } else {
      for (int i = 0; i < length; i = i + k) {
        os << arr[i] << "\t";
      }
    }

  }

}  // namespace assignment

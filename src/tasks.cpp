#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    if (lhs != nullptr && rhs != nullptr)
    {
        int temp = *rhs;
        *rhs = *lhs;
        *lhs = temp;
    }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    if (num_rows > 0 && num_cols > 0)
    {
        int **arr =new int*[num_rows];
        for (int i = 0; i < num_rows; i++)
        {
            arr[i] = new int[num_cols];
        }
        for (int i = 0; i < num_rows; i++)
        {
            for(int j = 0; j < num_cols; j++)
            {
                arr[i][j] = init_value;
            }
        }
        return arr;
    }
    return nullptr;
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    if (arr_2d_target != nullptr && arr_2d_source != nullptr)
    {
        if (num_rows > 0 && num_cols > 0)
        {
            for (int i = 0; i < num_rows; i++)
            {
                for (int j = 0; j < num_cols; j++)
                {
                    arr_2d_target[i][j] = arr_2d_source[i][j];
                }
            }
            return true;
        }
    }
    return false;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    int temp;
    for(int i = 0; i < arr.size()/2; i++)
        {
            temp = arr[i];
            arr[i] = arr[(arr.size() - i) - 1];
            arr[(arr.size() - i) - 1] = temp;
        }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    if (arr_begin != nullptr && arr_end != nullptr)
    {
        int temp;
        while (arr_begin < arr_end)
        {
            temp = *arr_begin;
            *arr_begin = *arr_end;
            *arr_end = temp;
            arr_begin++;
            arr_end--;
        }
    }
    else {return;}
}

// Задание 6
int *find_max_element(int *arr, int size) {
    if (arr != nullptr && size > 0)
    {
        int *max_elem = arr;
        for (int i = 0; i < size; i++)
        {
            if (*arr > *max_elem)
            {max_elem = arr;}
            arr++;
        }
        return max_elem;
    }
    return nullptr;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    if (!arr.empty())
    {
        vector<int> odd_arr;
        for (int i : arr)
        {
            if (i % 2 != 0)
            {odd_arr.push_back(i);}
        }
        return odd_arr;
    }
    return {};
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    if (!arr_a.empty() && !arr_b.empty())
    {
        vector<int> common_elem;
        for (int i = 0; i < arr_a.size(); i++)
        {
            for (int j = 0; j < arr_b.size(); j++)
            {
                if (arr_a[i] == arr_b[j])
                {
                    common_elem.push_back(arr_a[i]);
                }

            }
        }
        return common_elem;
    }
    return {};
}

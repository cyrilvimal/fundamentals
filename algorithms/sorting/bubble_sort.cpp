
#include <iostream>

void bubble_sort(int size, int *arr)
{
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        for (size_t j = i + 1; j < size; j++)
        {
            /* code */
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void display(int size, int arr[])
{
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        std::cout << arr[i] << " ";
    }
}

int main()
{
    int size = 5;

    // int * arr = new int[size];
    int arr[] = {44, 21, 22, 1, 55};

    bubble_sort(5, arr);
    display(5, arr);
}
#include<iostream>

int addArray(int *array, int n);

int main(int argc, char *argv[])
{
    int data[] = {0,1,2,3,4,5,6,7,8,9};
    int size = sizeof(data) / sizeof(int);
    
    std::cout << "结果是：" << addArray(data, size) << std::endl;

    return 0;
}

int addArray(int *array, int n)
{
    int sum = 0;
    int i = 0;

    for (i = 0; i < n; i++) {
    	sum += array[i];
    }

    return sum;
}

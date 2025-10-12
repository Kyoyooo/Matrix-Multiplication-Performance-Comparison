#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

double** initializeMatrix(int size)
{
    double** matPtr = (double**)malloc(sizeof(double*) * size);

    for (int i = 0; i < size; ++i)
    {
        matPtr[i] = (double*)malloc(sizeof(double) * size); 
    }

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            matPtr[i][j] = (double)rand() / (double)RAND_MAX; 
        }
    }

    return matPtr; 
}

void deallocateMatrix(double** matPtr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        free(matPtr[i]); 
        matPtr[i] = NULL;
    }

    free(matPtr); 
    matPtr = NULL; 
}

void printMatrix(double** matPtr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            printf("%f ", matPtr[i][j]); 
        }
        printf("\n"); 
    }
    printf("\n"); 
}

double getTimeTakenOfMultiplyMatrix(double** matA_ptr, double** matB_ptr, int size)
{
    double** mulMat_ptr = initializeMatrix(size); 

    clock_t start, end; 
    start = clock(); // Start to get time 
    
    for (int i_row = 0; i_row < size; ++i_row)
    {
        for (int i_col = 0; i_col < size; ++i_col)
        {
            double curTotal = 0; 
            for (int i = 0; i < size; ++i)
            {
                curTotal += matA_ptr[i_row][i] * matB_ptr[i][i_col]; 
            }
            mulMat_ptr[i_row][i_col] = curTotal; 
        }
    }

    end = clock(); // End of time getting 

    deallocateMatrix(mulMat_ptr, size);

    double time_taken_ms = ((double)(end - start)) / CLOCKS_PER_SEC * 1000.0;

    return time_taken_ms; 
}

int main(int argc, char* argv[])
{
    // The number of command-line arguments passed by the 
    // user must be 2 (one for program name and one for matrix's size)
    if (argc != 2) 
    {
        fprintf(stderr, "Usage: %s <matrix_size>\n", argv[0]);
        return -1; 
    }

    // argv[1] is the matrix's size, so it must be conversed to number
    int size = atoi(argv[1]); 
    if (size <= 0) 
    {
        fprintf(stderr, "Matrix size must be a positive integer.\n");
        return -2;
    }

    srand(time(NULL)); // Seed the random number generator with current time

    double** matA_ptr = initializeMatrix(size); 
    double** matB_ptr = initializeMatrix(size); 

    //printMatrix(matA_ptr, size); 
    //printMatrix(matB_ptr, size); 

    double time_taken_ms = getTimeTakenOfMultiplyMatrix(matA_ptr, matB_ptr, size);

    printf("TIME_MS:%f\n", time_taken_ms);

    deallocateMatrix(matA_ptr, size); 
    deallocateMatrix(matB_ptr, size); 

    return 0; 
}
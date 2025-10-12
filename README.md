# Matrix Multiplication Performance Comparison

This project provides a comparison of runtime performance of matrix multiplication across three implementations:
1.  **Pure C** - Low-level compiled language.
2.  **Pure Python** - High-level interpreted language with native loops.
3.  **NumPy** - Python with optimized numerical library.

The goal is to demonstrate the performance tradeoffs between different programming approaches and shows why numerical computing libraries are essential for Python.

## Deliverables
.
1. **matrix_mult.c** - The C source code for matrix multiplication
2. **report.ipynb** - The main Jupyter Notebook with all Python code (inline), timing results, visualizations and written analysis
3. **README.md** - Instructions for running the code

## Prerequisites
Before you begin, ensure you have the following tools installed:

1.  **A C Compiler**: `gcc` is required for the automated compilation step.
2.  **Python 3.x**: Python programming language and runtime (will be installed via conda)
3.  **Jupyter Notebook** or **Jupyter Lab**
4.  **The following Python libraries**:
    *   `pandas`
    *   `numpy`
    *   `matplotlib`
    *   `seaborn`

## Getting started 

### Libraries installation
Firstly, you have to install the required Python libraries using `pip`:

```bash
pip install jupyterlab pandas numpy matplotlib seaborn
```

### Running the Analysis
Follow these steps to execute the performance comparison:

1. **Clone or Download the Project**: Ensure that `matrix_mult.c` and `report.ipynb` are in the same directory.
2. **Launch Jupyter**: Open a terminal, navigate to the project directory, and start Jupyter:

```bash
jupyter lab
```

or

```bash
jupyter notebook
```

3. **Run the Notebook**:
- Open the `report.ipynb` file in your browser.
- Execute all the cells in the notebook from top to bottom by selecting `Run" > "Run All Cells` or `Kernel` - `Restart Kernel & Run All Cells...`

The notebook's timing framework is fully automated and will perform the following actions:
- Compile the matrix_mult.c file into an executable named matrix_mult.
- Run the performance tests for all three implementations across a range of matrix sizes.
- Collect and average the timing data.
- Generate a summary table and plots to visualize the results.
- Automatically remove the compiled C executable (matrix_mult) upon completion to keep the directory clean.

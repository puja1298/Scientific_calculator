This C++ program provides a simple calculator for performing
various arithmetic and mathematical operations. 
The operations include addition, subtraction, multiplication, division, power calculation, trigonometric functions (sine, cosine, tangent), square root, and logarithmic functions (natural log and base-10 log).

# Calculator Program in C++

## Compilation and Execution

1. **Save** the code as `calculator.cpp`.
2. **Compile**: 
   ```bash
   g++ -o calculator calculator.cpp
   ```
3. **Run**:
   ```bash
   ./calculator
   ```

## Usage

- Run the program and enter the number corresponding to the desired operation.
- Follow the prompts to input necessary values.

## Operations

1. **Addition**: Enter two numbers.
2. **Subtraction**: Enter two numbers.
3. **Multiplication**: Enter two numbers.
4. **Division**: Enter two numbers (second number must not be zero).
5. **Power**: Enter base and exponent.
6. **Sine**: Enter angle in radians.
7. **Cosine**: Enter angle in radians.
8. **Tangent**: Enter angle in radians.
9. **Square Root**: Enter a non-negative number.
10. **Logarithm (Natural log)**: Enter a positive number.
11. **Base-10 Logarithm**: Enter a positive number.

## Example

```
What you want to calculate.
Press 1 for addition
Press 2 for subtraction
...
Press 11 for baselog
3
Enter the two numbers for multiplication.
5
6
multiplication: 30
```

## Functions

- `add(double, double)`
- `Subtract(double, double)`
- `Multiplication(double, double)`
- `Division(double, double)`
- `power(double, double)`
- `sine(double)`
- `Cos(double)`
- `Tan(double)`
- `Squareroot(double)`
- `Log(double)`
- `Baselog(double)`

## Notes

- Trigonometric functions use radians.
- Handle errors (e.g., division by zero, invalid inputs for sqrt/log).

# Switch Case Calculator

A simple command-line calculator developed in **C** using the `switch-case` statement. The program allows the user to select an arithmetic operation and enter numbers to calculate the result.

## Features

* Addition
* Subtraction
* Multiplication
* Division
* Menu-based operation selection
* Integer arithmetic for addition, subtraction, and multiplication
* Floating-point arithmetic for division
* Simple command-line interface

## Demo

```text
-----Calculator-----
1: Addition
2: Subtraction
3: Multiplication
4: Division
5: exit

---Enter your choice---
1

Enter your first number: 10
Enter your second number: 20
Result: 30
```

## Technologies Used

* C
* GCC
* Visual Studio Code
* Git
* GitHub

## Concepts Used

This project was created to practice fundamental C programming concepts:

* Variables
* Data types
* `printf()`
* `scanf()`
* `switch-case`
* `case`
* `default`
* `break`
* Arithmetic operators
* Integer data types
* Floating-point data types
* Basic program control flow

## How It Works

The program first displays a menu containing the available arithmetic operations.

The user selects an operation by entering a number.

```text
             Start
               │
               ▼
         Display Menu
               │
               ▼
       Get User Choice
               │
               ▼
        switch(choice)
               │
       ┌───────┼────────┐
       ▼       ▼        ▼
    Addition  Subtraction  Multiplication
       │       │        │
       └───────┼────────┘
               │
               ▼
            Division
               │
               ▼
        Display Result
               │
               ▼
              End
```

The selected `case` takes the required input and performs the corresponding arithmetic operation.

## Project Structure

```text
switch-case-calculator/
│
├── calculator.c
└── README.md
```

## How to Run

### 1. Clone the repository

```bash
git clone https://github.com/isamhax/switch-case-calculator.git
```

### 2. Move into the project directory

```bash
cd switch-case-calculator
```

### 3. Compile the program

Using GCC:

```bash
gcc calculator.c -o calculator
```

### 4. Run the program

On Windows:

```bash
.\calculator.exe
```

On Linux/macOS:

```bash
./calculator
```

## Example

### Addition

```text
Enter your choice: 1

Enter your first number: 25
Enter your second number: 15

Result: 40
```

### Division

```text
Enter your choice: 4

Enter your first number: 10
Enter your second number: 2

Result: 5.000000
```

## Limitations

The current version is intentionally simple and focuses on learning fundamental C concepts.

Current limitations include:

* The calculator performs one operation per program execution.
* The calculations are currently written directly inside the `switch-case`.
* Division-by-zero validation needs to be added.
* Input validation for invalid data types is not implemented.
* Advanced mathematical operations are not included.

## Future Improvements

Planned improvements for future versions:

* [ ] Add division-by-zero handling
* [ ] Move calculations into separate functions
* [ ] Add a loop so the calculator can perform multiple calculations
* [ ] Add more mathematical operations
* [ ] Add better input validation
* [ ] Improve the command-line interface
* [ ] Add a calculation history feature

## Learning Outcomes

This project helped me practice how to build a menu-driven program in C using `switch-case`.

While developing this calculator, I practiced:

* Taking user input with `scanf()`
* Displaying information using `printf()`
* Using variables and different data types
* Using arithmetic operators
* Controlling program flow with `switch-case`
* Understanding `case`, `break`, and `default`
* Working with integer and floating-point values
* Using Git to track project changes
* Creating commits
* Connecting a local repository to GitHub
* Pushing a project to a remote GitHub repository
* Writing basic project documentation with Markdown

## Author

**Sam**

B.Tech CSE Student

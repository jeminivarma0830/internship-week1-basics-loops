# 🖥️ Internship – Week 1: Basics & Loops (C Programming)

This repository contains all assignments and the mini project for **Week 1** of my programming internship.

---

## 📚 Topics Covered

- Syntax, Variables, Data Types
- Input/Output, Operators, If-Else
- Loops (`for`, `while`, `do-while`)
- Switch Case

---

## 📁 Project Structure

```
week1-internship/
│
├── assignments/
│   ├── 01_hello_world.c          # Assignment 1
│   ├── 02_sum_of_two_numbers.c   # Assignment 2
│   ├── 03_even_or_odd.c          # Assignment 3
│   └── 04_fibonacci_series.c     # Assignment 4
│
└── mini_project/
    └── simple_calculator.c       # Mini Project
```

---

## ✅ Assignments

### 1. Hello World
Prints `Hello, World!` to the console — the classic first program.

**Concepts used:** `printf`, basic syntax

---

### 2. Sum of Two Numbers
Takes two numbers as input from the user and displays their sum.

**Concepts used:** Variables, `scanf`, `printf`, arithmetic operators

**Sample Output:**
```
Enter first number:  10
Enter second number: 25

Result: 10.00 + 25.00 = 35.00
```

---

### 3. Check Even or Odd
Takes an integer as input and checks whether it is even or odd using the modulus operator.

**Concepts used:** If-Else, modulus operator (`%`)

**Sample Output:**
```
Enter an integer: 7

7 is an ODD number.
```

---

### 4. Fibonacci Series up to N Terms
Takes `n` as input and prints the Fibonacci sequence up to `n` terms.

**Concepts used:** `for` loop, variables

**Sample Output:**
```
Enter the number of terms: 8

Fibonacci Series up to 8 terms:
0, 1, 1, 2, 3, 5, 8, 13
```

---

## 🔧 Mini Project – Simple Calculator

A fully functional console-based calculator that supports:

| Operation      | Symbol |
|----------------|--------|
| Addition       | `+`    |
| Subtraction    | `-`    |
| Multiplication | `*`    |
| Division       | `/`    |
| Modulus        | `%`    |

**Key Features:**
- Menu-driven interface using **switch case**
- Loops continuously using **do-while** until the user exits
- Handles **division by zero** gracefully

**Sample Output:**
```
==============================
     SIMPLE CALCULATOR
==============================
  1. Addition       (+)
  2. Subtraction    (-)
  3. Multiplication (*)
  4. Division       (/)
  5. Modulus        (%)
  6. Exit
==============================
Enter your choice: 1
Enter first number:  15
Enter second number: 7

Result: 15.00 + 7.00 = 22.00
```

---

## ⚙️ How to Compile & Run

Make sure you have **GCC** installed.

```bash
# Compile any file
gcc assignments/01_hello_world.c -o hello_world
./hello_world

# Compile the calculator
gcc mini_project/simple_calculator.c -o calculator
./calculator
```

---

## 🛠️ Language & Tools

- **Language:** C
- **Compiler:** GCC
- **IDE:** VS Code / any text editor

---

*Submitted as part of Week 1 internship task.*

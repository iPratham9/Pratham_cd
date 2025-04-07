# 🔧 Custom Instruction-Based Mini Compiler

This project simulates a basic custom compiler that reads mathematical instructions from a text file, parses them, takes user input (like the value of `x`), and computes the result.

## 📂 Project Structure

```
MyCompiler/
├── main.cpp
├── instruction.txt
├── utils/
│   ├── instruction.h
│   ├── instruction.cpp
│   ├── compute.h
│   └── compute.cpp
└── README.md
```

## 📌 Features

- Reads instructions from `instruction.txt`
- Parses commands like `power(2,x)`
- Accepts user input for variables like `x`
- Computes and displays the result
- Modular code using utility files

## 🧠 Supported Instruction

- `power(base, exponent)` — Computes base raised to the power of exponent  
  - If exponent is a variable like `x`, user is prompted for the value.

Example:
```
power(2,x)
```

When run:
```
Enter value for x: 4
2^4 = 16
```

## 🔨 Build & Run

### 📁 1. Navigate to the project directory
```bash
cd MyCompiler
```

### ⚙️ 2. Compile
```bash
g++ main.cpp utils/instruction.cpp utils/compute.cpp -o compiler
```

### 🚀 3. Run
```bash
./compiler
```
(Use `compiler.exe` on Windows)

## 📥 Sample instruction.txt

```
power(2,x)
```

## 💡 Future Ideas

- Add more operations: `add(a,b)`, `sub(a,b)`, `sqrt(x)`, etc.
- Add error handling for invalid input
- Support multiple expressions in a single file
- Implement a REPL (read-eval-print loop) interface

## 👨‍💻 Made By

Divya Pratap Singh  
B.Tech CSE, NIT Raipur 
Roll No : 23115030

# Student Record Management System

A console-based C program that lets you enter student details, assigns grades based on marks, and saves the records to a text file.

This is a beginner-friendly C project that demonstrates core language concepts through a practical use case.

## Features

- Accept multiple student records in one run
- Store name, marks, and computed grade for each student
- Append records to `Student_record.txt` for persistent storage
- Display all saved records on screen after writing

## Grading Scale

| Marks   | Grade |
|---------|-------|
| 90–100  | A     |
| 70–89   | B     |
| 50–69   | C     |
| 35–49   | D     |
| Below 35| F     |

## C Concepts Used

- Variables and data types
- Structures (`struct Student`)
- Header files and standard I/O (`stdio.h`)
- File handling (`fopen`, `fprintf`, `fgets`, `fclose`)
- Conditional statements (`if` / `else if` / `else`)
- Loops (`for`)
- Basic error handling (file open check)

## Project Structure

```
PROJEC-C/
├── Student_Record_Managment_System.c   # Main source file
├── Student_record.txt                  # Output file (created/updated at runtime)
├── .gitignore
└── README.md
```

## Requirements

- A C compiler (GCC, Clang, or MSVC)
- A terminal / command prompt

## How to Compile and Run

### Windows (GCC / MinGW)

```bash
gcc Student_Record_Managment_System.c -o Student_Record_Managment_System.exe
Student_Record_Managment_System.exe
```

### Linux / macOS

```bash
gcc Student_Record_Managment_System.c -o Student_Record_Managment_System
./Student_Record_Managment_System
```

## Usage

1. Run the compiled program.
2. Enter how many student records you want to add.
3. For each student, provide:
   - **Name** (single word, no spaces)
   - **Marks** (integer)
4. The program assigns a grade, saves the data to `Student_record.txt`, and prints the file contents.

### Example

```
How many Students records are adding? :2

Deatails of 1 Student :
Name :Sarang
Mark :45

Deatails of 2 Student :
Name :Athulya
Mark :34

All Students details has been saved

The details in file
Name :Sarang
Mark :45
Grade :D

Name :Athulya
Mark :34
Grade :F
```

## Notes

- Records are **appended** to `Student_record.txt`, so previous entries are kept unless you delete or clear the file manually.
- Names are read with `scanf("%s", ...)`, so only a single word (no spaces) is supported per name.

## License

This project is open source and available for learning purposes.

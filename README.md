# Interview_Prepration
For interview prepration in 3 month.
**GIT COMMANDS
 git init
 git add README.md
 git commit -m "first commit"
 git branch -M main
 git remote add origin git@github.com:sumitbounthiyal/sumitbounthiyal.git
 git push -u origin main

# 🚀 90-Day Embedded/Linux Interview Preparation Plan

**Target Companies:** TI, Qualcomm, Samsung, Intel, Microsoft
**Experience Level:** 5+ Years Embedded/Linux Engineer
**CTC Target:** 20–40 LPA

---

## 📌 How to Use This File

* Follow this plan **day by day**
* Do **not jump topics**
* Code **every single day**
* Revise weekly

> ✅ This plan is designed for **product-based & semiconductor companies**.

---

# 🧠 Preparation Structure

| Area          | Weight |
| ------------- | ------ |
| C Programming | 40%    |
| Linux / OS    | 35%    |
| Coding Logic  | 15%    |
| Project       | 10%    |

---

# ⏱️ Daily Study Routine (Weekdays)

| Task               | Time      |
| ------------------ | --------- |
| C / Coding         | 1–1.5 hrs |
| Theory             | 1 hr      |
| Project / Practice | 1 hr      |
| Notes + Revision   | 30 mins   |

**Weekend:** 6–7 hours (project-heavy)

---

# 📅 WEEK 1 — C PROGRAMMING FOUNDATION

## 🎯 Goal of Week 1

By the end of this week, you should be able to:

* Explain C memory layout clearly
* Understand pointers deeply
* Write clean C programs
* Confidently answer C interview questions

---

## 🟢 DAY 1 — Compilation Process & Memory Layout

### 📘 Theory

* C compilation flow:

  * `.c → .i → .s → .o → executable`
* Compiler vs Linker
* Memory layout of C program:

  * Text
  * Data
  * BSS
  * Heap
  * Stack

### ✍️ Coding Practice

* Print address of local variable
* Print address of global variable
* Static variable memory demo
* Stack growth observation

### 🎤 Interview Focus

* Explain memory layout of C program

---

## 🟢 DAY 2 — Pointer Basics

### 📘 Theory

* What is pointer
* Why pointers are required
* Pointer size in 32-bit vs 64-bit
* Pointer to pointer

### ✍️ Coding Practice

* Basic pointer program
* Modify variable using pointer
* Pointer arithmetic
* Print addresses using pointer

### 🎤 Interview Focus

* Why pointer size is same for all data types?

---

## 🟢 DAY 3 — Arrays vs Pointers

### 📘 Theory

* Difference between array and pointer
* Why array name is constant
* Array decay
* sizeof(array) vs sizeof(pointer)

### ✍️ Coding Practice

* Pass array to function
* sizeof behavior inside function
* Reverse array using pointer
* Modify array elements

### 🎤 Interview Focus

* Why sizeof(array) changes inside function?

---

## 🟢 DAY 4 — Strings in C

### 📘 Theory

* What is string in C
* '\0' null character
* char array vs char pointer
* String literal storage

### ✍️ Coding Practice

* Implement strlen
* Implement strcpy
* Implement strcmp
* Reverse string
* Count vowels

### 🎤 Interview Focus

* Difference between:

  ```c
  char *p = "abc";
  char a[] = "abc";
  ```

---

## 🟢 DAY 5 — Functions & Storage Classes

### 📘 Theory

* Function call stack
* Call by value vs call by reference
* Storage classes:

  * auto
  * static
  * extern
* Scope vs lifetime

### ✍️ Coding Practice

* Static variable example
* Multi-file program using extern
* Function returning pointer

### 🎤 Interview Focus

* Difference between scope and lifetime

---

## 🟢 DAY 6 — const & volatile (Interview Gold)

### 📘 Theory

#### const variations

```c
const int *p;      // pointer to const
int *const p;      // const pointer
const int *const p; // const pointer to const
```

#### volatile

* Meaning of volatile
* Compiler optimization
* Hardware register example

### ✍️ Coding Practice

* const pointer programs
* volatile variable demo
* Optimization behavior test

### 🎤 Interview Focus

* Why volatile is mandatory for hardware registers?

---

## 🟢 DAY 7 — Revision & Mock Interview

### 📘 Revision Topics

* Memory layout
* Pointers
* Arrays vs pointers
* Strings
* static / extern
* const / volatile

### ✍️ Practice

* Rewrite 10 programs without reference

### 🎤 Mock Interview Questions

* Explain pointer
* Explain memory layout
* Difference between array and pointer
* What is volatile
* What is static

Try explaining **out loud**.

---

# ✅ Week 1 Output Checklist

* [ ] 25–30 C programs written
* [ ] Notes prepared
* [ ] Pointer concepts clear
* [ ] Able to explain memory layout confidently

---

# 🚫 What NOT to Do in Week 1

* ❌ No Linux yet
* ❌ No device driver yet
* ❌ No DSA yet
* ❌ No random YouTube videos

> Focus only on **C foundation**.

---

# 🔜 Week 2 Preview

* Advanced C
* Function pointers
* Bit manipulation
* Macros vs inline
* Interview-level C questions

---

# 🔥 Final Advice

> Big companies reject candidates mainly because they cannot explain pointers clearly.

This week fixes that problem permanently.

---

✅ **Follow this file exactly.**
✅ **Do not rush.**
✅ **Consistency beats talent.**

---


# 📥 Queue Line Management System (OOP C++)

A **console-based Queue Line Management System** implemented in **C++** using **Object-Oriented Programming (OOP)** principles.  
This project simulates **real-life service queues** (such as bill payments and subscriptions), handling **ticket issuing**, **waiting time calculation**, and **client serving** using **FIFO (First-In First-Out)** logic.

---

## 📌 Features

### 🧱 Internal Structure
- Uses **STL `queue`** for FIFO ticket management
- Uses **STL `stack`** to display tickets in reverse order
- **Nested `Ticket` class** for better encapsulation
- Ticket time-stamping using a **Date utility class**

---

### 🎟️ Ticket Operations
- Issue new tickets with automatic numbering
- Assign ticket prefixes (e.g., `A0`, `B0`)
- Calculate expected service time based on waiting clients
- Store ticket issue time

---

### 🔄 Queue Operations
- Serve next client (FIFO behavior)
- Identify who is next in line
- Count waiting clients
- Count served clients
- Safe handling of empty queue cases

---

### 🖥️ Display Features
- Print full queue information
- Print tickets **Right-To-Left (RTL)**
- Print tickets **Left-To-Right (LTR)**
- Print detailed ticket information:
  - Ticket number
  - Issue time
  - Waiting clients
  - Expected service time

---

## 📊 Console Output Example

```
Queue Info
-------------------------
Prefix           = A0
Total Tickets    = 5
Served Clients   = 0
Waiting Clients  = 5
```

---

## 🧠 Concepts Used
- Object-Oriented Programming (OOP)
- Encapsulation
- Nested Classes
- FIFO Queue Logic
- Stack for reversing output
- Time and date handling
- Real-life system simulation

---

## 🛠️ Technologies Used
- **Language:** C++
- **Application Type:** Console-based
- **Libraries:**
  - `<iostream>`
  - `<queue>`
  - `<stack>`

---

## 🎯 Educational Purpose

This project is designed to:

- Understand how queues work in real-world systems
- Apply FIFO logic to practical scenarios
- Practice OOP design and encapsulation
- Learn how to combine multiple data structures
- Strengthen problem-solving skills in C++
- Prepare for **data structures & technical interviews**

---

## 👨‍💻 Author

**Abdessalem Kessouri**

🙏 **Credits**  
Special thanks to **Mr. Mohammed Abu-Hadhoud** from **Programming Advices** for the clear explanations and structured guidance.

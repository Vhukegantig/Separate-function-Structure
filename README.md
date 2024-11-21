# Separate function Structure
Using arduino IDE 2.3.2

## 1. Create a New Header File (`myfunctions.h`)

- **Steps**:
  1. In the Arduino IDE, click on **... > New Tab**.
  2. Name the new tab `myfunctions.h`.

- **Content of `myfunctions.h`**:
  - Include header guards (`#ifndef`, `#define`, and `#endif`) to avoid duplicate inclusions.
  - Declare all the functions you want to use in your project.(Prototypes)

---

## 2. Create a New Source File (`myfunctions.cpp`)

- **Steps**:
  1. Add another tab, and name it `myfunctions.cpp`.

- **Content of `myfunctions.cpp`**:
  - Include the `myfunctions.h` file.
  - Include `<Arduino.h>` for access to Arduino-specific functions.
  - Define all the declared functions from `functions.h`.

---

## 3. Include the Header File in Your Main `.ino` File

- In your `.ino` file:
  - Include `myfunctions.h` at the top of the file.
  - Call your functions in the `setup()` and `loop()` sections as needed.

---

## 4. Ensure All Files Are in the Same Folder

- Save your sketch, and make sure:
  - The folder contains the `.ino`, `.h`, and `.cpp` files.
  - The Arduino IDE recognizes all these files in the project.

---

This structure keeps your code modular and well-organized.
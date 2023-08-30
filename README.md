# BrewBerry Cafe Ordering System - C Program

This repository contains a simple C program for a console-based ordering system for BrewBerry Cafe. Customers can choose from a menu of breakfast, lunch, and dinner items and place their orders.

## Getting Started

To run this program, follow these steps:

1. **Clone the Repository**: Clone this repository to your local machine using `git clone`.

2. **Compile the Code**: Open a terminal or command prompt and navigate to the cloned directory. Compile the C program using a C compiler, such as GCC.

   ```bash
   gcc -o BrewBerryCafe main.c
   ```

3. **Run the Program**: Run the compiled executable.

   ```bash
   ./BrewBerryCafe
   ```

## Features

- **Login**: Customers are prompted to log in with a predefined username and password to access the ordering system.

- **Main Menu**: Once logged in, customers can access the main menu where they can choose to place an order, view available orders, cancel an order, or exit the program.

- **Ordering**: Customers can select breakfast, lunch, or dinner options from the menu. Each option displays a list of available items with their details.

- **Quantity Selection**: Customers can choose the quantity of the items they want to order.

- **Total Cost Calculation**: The program calculates the total cost of the order based on the selected items and quantities.

- **Bill Generation**: After confirming the order, the program generates a bill that includes the customer's details and the total cost of the order.

- **Menu Navigation**: Customers can navigate through the menu system to order multiple items before proceeding to checkout.

- **Exit and Restart**: After completing the order, customers can choose to return to the main menu or exit the program.

## Usage

1. **Login**: Enter the predefined username and password to access the ordering system.

2. **Main Menu**: Choose options from the main menu to place an order, view available orders, cancel an order, or exit.

3. **Ordering**: Choose breakfast, lunch, or dinner options. Select items and quantities you want to order.

4. **Checkout**: Review the order and total cost. Choose to continue ordering or proceed to checkout.

5. **Bill Generation**: After confirming the order, a bill is generated with customer details and the total cost of the order.

6. **Restart or Exit**: After the bill is generated, choose to return to the main menu or exit the program.

## Note

This program uses the `conio.h` library for some console-related functions. Keep in mind that the `conio.h` library is not a standard C library and might not be available on all systems.

**Disclaimer**: This code is provided as a basic example and may not cover all real-world scenarios or best practices for software development. It's recommended to review and adapt the code to your needs before using it in any serious application.

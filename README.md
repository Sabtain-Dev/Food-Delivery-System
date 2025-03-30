# Food-Delivery-System
A simple food ordering system that allows users to:
- Choose from 3 restaurants (KFC, McDonald's, Pizza Hut)
- Select menu items and quantities
- Pay via card or cash
- Receive an invoice with delivery details

## Features
- Interactive menu system
- Card payment processing with balance tracking
- Cash payment with change calculation
- Loading animations for better user experience
- Invoice generation

## Requirements
- C++11 or later
- Windows OS (uses `system("cls")` for screen clearing)

## Limitations
- Windows-only due to system("cls")
- No persistent data storage
- Pre-defined card database

## How to Run
1. Clone the repository
2. Compile the code:
   ```bash
   g++ src/food_delivery.cpp -o food_delivery

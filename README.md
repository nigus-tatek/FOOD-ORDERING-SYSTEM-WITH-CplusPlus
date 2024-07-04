

# Simple Food Ordering System

Welcome to the **Simple Food Ordering System**! This program allows you to order food items from a variety of categories including international dishes, fasting dishes, local dishes, hot drinks, and soft drinks. 

## Features
- **User-Friendly Interface**: The program guides you through the ordering process with clear prompts.
- **Multiple Categories**: Choose from a variety of food categories.
- **Order Processing**: Calculate the total cost including VAT.
- **Error Handling**: Alerts for invalid choices and allows corrections.
- **Additional Orders**: Option to place additional orders in one session.

## Categories
1. **International Dishes**
    - በርገር (Burger) - 300 ETB
    - ፒዛ (Pizza) - 500 ETB
    - አርስቶ (Arsito) - 1500 ETB
2. **Fasting Dishes**
    - ተጋቢኖ (Tegabino) - 110 ETB
    - ሽሮ ፈሰስ (Shiro Fesese) - 90 ETB
    - በያይነት (Beyaynet) - 80 ETB
3. **Local Dishes**
    - ጥብስ (Tibs) - 200 ETB
    - ቅቅል (Kikil) - 160 ETB
    - እንቁላል (Enkulal) - 100 ETB
4. **Hot Drinks**
    - ቡና (Coffee) - 15 ETB
    - ሻይ (Tea) - 10 ETB
    - የፈላ ወተት (Fela Wotet) - 20 ETB
5. **Soft Drinks**
    - ሚሪንዳ (Mirinda) - 35 ETB
    - ኮካ-ኮላ (Coca-Cola) - 40 ETB
    - ፋንታ (Fanta) - 35 ETB

## How to Use
1. **Greeting**: Enter your name to start the ordering process.
2. **Menu Selection**: Choose a food category from the menu.
3. **Item Selection**: Select the desired item and quantity.
4. **Order Confirmation**: Confirm your order and view the total cost including VAT.
5. **Additional Orders**: Optionally, place additional orders.
6. **Completion**: View the final total and thank you message.

## Code Structure
- **greeting()**: Welcomes the user and takes their name.
- **menu()**: Displays the menu with different food categories.
- **display()**: Shows the food items and their prices within a category.
- **process()**: Processes the user's order and calculates the cost.
- **additional()**: Prompts the user for additional orders.
- **mistake()**: Handles invalid choices and prompts the user to correct them.
- **totals()**: Calculates and displays the total cost including VAT.

## Example Output
```
  እንኳን ወደ ሰናይ ባርና ሪስቶራንት በሰላም መጡ!!  ስለመጡ እናመሠግናለን።

እባክዎ ስምዎን ያስገቡ: John Doe
ሰላም: John Doe

ምን ማዘዝ ይፈልጋሉ?
	ማውጫ
1) የውጪ ሀገር ምግቦች
2) የፆም ምግቦች
3) የፍስክ ምግቦች
4) ትኩስ ነገር
5) ለስላሳ መጠጦች

እባክዎ ምርጫዎን ያስገቡ: 1

1) በርገር : ዋጋ = 300
2) ፒዛ : ዋጋ = 500
3) አርስቶ : ዋጋ = 1500

እባክዎትን የሚፈልጉትን ይምረጡ?: 1

ስንት ይፈልጋሉ?: 2

ያዘዙት 2 በርገር
ተጨማሪ ማዘዝ ይፈልጋሉ?
 1) አዎ
2) አልፈልግም
2

ጠቅላላ ፍጆታ = 600
vat = 90
አጨቃላይ ሂሳብ = 690

እኛን ስለመረጡን እናመሰግናለን።
```

## Running the Program
Compile and run the program using a C++ compiler. For example:
```
g++ -o food_ordering_system food_ordering_system.cpp
./food_ordering_system
```

Enjoy your meal and thank you for choosing **Simple Food Ordering System**!

---

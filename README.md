# Smart AI Diet & Recipe Advisor

## 📌 Project Overview

The Smart AI Diet & Recipe Advisor is a C++ based rule-driven recipe recommendation system.

The program first asks the user about their food goal and then recommends recipes according to the selected goal.

The user can choose from:

1. Weight Loss
2. Muscle Gain
3. Just Enjoy Food

The system uses nutritional information such as calories, protein and fat to filter and recommend suitable recipes.

---

## 🎯 Objectives

- Recommend recipes based on the user's selected goal.
- Use nutritional information to filter recipes.
- Provide a simple and interactive recipe recommendation system.
- Demonstrate Object-Oriented Programming concepts in C++.
- Store and manage recipe and nutritional information.

---

## ⚙️ How It Works

The program follows these steps:

1. The user starts the program.
2. The program asks the user to select a goal.
3. The user enters:
   - `1` for Weight Loss
   - `2` for Muscle Gain
   - `3` for Just Enjoy Food
4. The program analyzes the nutritional information of the recipes.
5. Suitable recipes are displayed to the user.

### Recommendation Logic

### 1. Weight Loss

The program recommends recipes with relatively lower calories and fat.

Current rule:

- Calories ≤ 250 kcal
- Fat ≤ 5 g

### 2. Muscle Gain

The program focuses on recipes with higher protein content.

Current rule:

- Protein ≥ 8 g

### 3. Just Enjoy Food

The program displays the available recipes without applying a strict nutritional filter.

---

## 🍽️ Recipes Included

The project currently contains recipes such as:

- Idli
- Upma
- Dal Rice
- Paneer Butter Masala
- Burger
- Vegetable Salad
- Oats Porridge
- Vegetable Sandwich
- Fried Noodles
- French Fries

Each recipe contains:

- Recipe name
- Ingredients
- Cooking instructions
- Health status
- Protein
- Fat
- Cholesterol
- Calories
- Health benefits

---

## 🧠 C++ Concepts Used

This project demonstrates the following C++ concepts:

- Classes
- Objects
- Inheritance
- Encapsulation
- Polymorphism
- Virtual functions
- Arrays of objects
- Conditional statements
- Loops
- Functions

The project uses a base `Recipe` class and a derived `NutritionRecipe` class.

---

## 💻 Technologies Used

- C++
- Object-Oriented Programming
- Git
- GitHub

---

## ▶️ How to Run the Project

### 1. Clone the Repository

```bash
git clone https://github.com/YOUR-USERNAME/Smart-AI-Diet-Recipe-Advisor.git

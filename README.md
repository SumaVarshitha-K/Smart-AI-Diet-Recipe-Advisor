# Smart AI Diet & Recipe Advisor

## 📌 Project Overview

The **Smart AI Diet & Recipe Advisor** is a C++ based rule-driven recipe recommendation system.

The system first asks the user about their food goal and then recommends recipes according to the selected goal.

The user can choose from three goals:

1. Weight Loss
2. Muscle Gain
3. Just Enjoy Food

Based on the selected goal, the program analyzes the nutritional information of available recipes and displays suitable recommendations.

---

## 🎯 Objectives

The main objectives of this project are:

- To provide recipe recommendations based on the user's goal.
- To use nutritional information such as calories, protein and fat.
- To demonstrate object-oriented programming concepts using C++.
- To organize recipes according to different dietary goals.
- To provide a simple and user-friendly recommendation system.

---

## ⚙️ How the System Works

The system follows these steps:

```text
                START
                  |
                  ↓
       Ask User's Food Goal
                  |
        ┌─────────┼─────────┐
        ↓         ↓         ↓
     Weight     Muscle    Enjoy
      Loss       Gain      Food
        |         |         |
        ↓         ↓         ↓
    Analyze    Analyze    Display
   Calories    Protein    Recipes
     & Fat
        |         |         |
        └─────────┼─────────┘
                  ↓
        Display Recommended
             Recipes
                  |
                  ↓
                 END

#include <iostream>
using namespace std;

// Base Class
class Recipe {
protected:
    string name, ingredients, instructions;

public:
    virtual void setRecipe(string n, string ing, string ins) {
        name = n;
        ingredients = ing;
        instructions = ins;
    }

    virtual void display() {
        cout << "\n========================================\n";
        cout << "         🍽️ RECIPE DETAILS\n";
        cout << "========================================\n";
        cout << "Name        : " << name << endl;
        cout << "Ingredients : " << ingredients << endl;
        cout << "Instructions: " << instructions << endl;
    }
};

// Derived Class
class NutritionRecipe : public Recipe {
private:
    string healthStatus, benefits;
    float protein, fat, cholesterol, calories;

public:
    void setNutrition(string h, float p, float f, float c, float cal, string b) {
        healthStatus = h;
        protein = p;
        fat = f;
        cholesterol = c;
        calories = cal;
        benefits = b;
    }

    void display() {
        Recipe::display();

        cout << "\n---------- 🏥 HEALTH INFO ----------\n";
        cout << "Health Status : " << healthStatus << endl;
        cout << "Protein       : " << protein << " g\n";
        cout << "Fat           : " << fat << " g\n";
        cout << "Cholesterol   : " << cholesterol << " mg\n";
        cout << "Calories      : " << calories << " kcal\n";

        cout << "\n---------- 🌿 BENEFITS ----------\n";
        cout << benefits << endl;
        cout << "========================================\n";
    }
};

int main() {

    NutritionRecipe r[10];

    // Indian Healthy
    r[0].setRecipe("Idli",
        "Rice batter, urad dal",
        "Steam batter in moulds");
    r[0].setNutrition("Very Healthy", 6, 1, 0, 70,
        "Low calorie, easy to digest");

    r[1].setRecipe("Upma",
        "Rava, vegetables",
        "Roast rava → Cook with veggies");
    r[1].setNutrition("Healthy", 5, 3, 0, 180,
        "Good fiber and energy");

    r[2].setRecipe("Dal Rice",
        "Rice, dal",
        "Cook dal → Mix with rice");
    r[2].setNutrition("Healthy", 9, 4, 0, 250,
        "Balanced protein and carbs");

    // Indian Moderate
    r[3].setRecipe("Paneer Butter Masala",
        "Paneer, butter, cream",
        "Cook gravy → Add paneer");
    r[3].setNutrition("Moderate", 14, 20, 30, 450,
        "Rich in protein but high fat");

    // Unhealthy / Fast food
    r[4].setRecipe("Burger",
        "Bun, patty, sauce",
        "Cook patty → Assemble");
    r[4].setNutrition("Unhealthy", 15, 25, 70, 500,
        "High calories and fat");

    r[5].setRecipe("Pizza",
        "Base, cheese, toppings",
        "Add toppings → Bake");
    r[5].setNutrition("Unhealthy", 12, 22, 50, 600,
        "High cholesterol");

    // Balanced
    r[6].setRecipe("Omelette",
        "Eggs, oil",
        "Cook eggs in pan");
    r[6].setNutrition("Healthy", 12, 10, 180, 200,
        "High protein");

    r[7].setRecipe("Fried Rice",
        "Rice, veggies, oil",
        "Fry and mix");
    r[7].setNutrition("Moderate", 7, 12, 10, 450,
        "Energy rich");

    r[8].setRecipe("Sandwich",
        "Bread, vegetables",
        "Assemble");
    r[8].setNutrition("Healthy", 5, 5, 2, 250,
        "Rich in fiber");

    r[9].setRecipe("Maggi",
        "Noodles",
        "Cook quickly");
    r[9].setNutrition("Not Healthy", 6, 14, 0, 350,
        "Quick but less nutritious");

    int goal, choice;

    do {
        cout << "\n========================================\n";
        cout << "   🤖 AI DIET & RECIPE ADVISOR\n";
        cout << "========================================\n";

        cout << "What is your goal?\n";
        cout << "1. 🏃 Weight Loss\n";
        cout << "2. 💪 Muscle Gain\n";
        cout << "3. 😋 Just Enjoy Food\n";
        cout << "0. Exit\n";

        cout << "Enter choice: ";
        cin >> goal;

        switch(goal) {

        case 1:
            cout << "\nRecommended (Healthy) 🌿\n";
            cout << "1. Idli\n2. Upma\n3. Sandwich\nChoose: ";
            cin >> choice;

            if(choice == 1) r[0].display();
            else if(choice == 2) r[1].display();
            else if(choice == 3) r[8].display();
            break;

        case 2:
            cout << "\nProtein Rich 💪\n";
            cout << "1. Omelette\n2. Dal Rice\nChoose: ";
            cin >> choice;

            if(choice == 1) r[6].display();
            else if(choice == 2) r[2].display();
            break;

        case 3:
            cout << "\nEnjoy Food 😋\n";
            cout << "1. Pizza\n2. Burger\n3. Paneer Butter Masala\nChoose: ";
            cin >> choice;

            if(choice == 1) r[5].display();
            else if(choice == 2) r[4].display();
            else if(choice == 3) r[3].display();
            break;

        case 0:
            cout << "\nStay healthy! 👋\n";
            break;

        default:
            cout << "\nInvalid choice!\n";
        }

    } while(goal != 0);

    return 0;
}

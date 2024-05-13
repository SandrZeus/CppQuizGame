#include <iostream>
#include <string>



int main(){

    std::string questions[] = {"1. What year was C++ created?: ",
                                "2. Who invented C++?: ",
                                "3. What is the predecessor of C++?: ",
                                "4. Is the earth flat?: "};
    
    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerber"},
                                {"A. C", "B. C+", "C. C--", "D. B++"},
                                {"A. yes", "B. no", "C. sometimes", "D. What's Earth>"}};
    
    char asnwerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i++){
        std::cout << "*****************************" << '\n';
        std::cout << questions[i] << '\n';
        std::cout << "*****************************" << '\n';

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if(guess == asnwerKey[i]){
            std::cout << "CORRECT\n";
            score++;
        }
        else{
            std::cout << "WRONG\n";
            std::cout << "Answer: " << asnwerKey[i] << '\n';
        }
    }

    std::cout << "*****************************" << '\n';
    std::cout << "             Results            \n";
    std::cout << "*****************************" << '\n';
    std::cout << "Correct guesses: " << score << '\n';
    std::cout << "Number of questions: " << size << '\n';
    std::cout << "Score: " << (score/(double)size)*100 << '%';

    return 0;
}
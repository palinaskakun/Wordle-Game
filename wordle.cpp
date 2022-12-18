#include <iostream>
#include <string>
int main() 
{
    std::cout << "Give me a secret word: " << std::endl;
    std::string secret_word;
    std::cin >> secret_word;
    std::string guess_word;
    int counter=0;
    while (counter<6){
        std::cout << "Give me a guess: " << std::endl;
        std::cin >> guess_word;
        if (std::cin.fail()){
            std::cout<<"You Lose."<<std::endl;
            break;
        }
        counter++;
        std::string attempt;
        for (int i=0; i<guess_word.length(); i++){
            int result = secret_word.find(guess_word.at(i));
            if (secret_word==guess_word){
                break;
                std::cout<<attempt;
            }
            if (guess_word[i]==secret_word[i]){
                attempt.push_back(guess_word.at(i));
    
            }

            else if (result != std::string::npos){
                attempt.append("?");
            }
            
            else {
                attempt.append(".");
            }
        }
        if (secret_word==guess_word){
                std::cout<<secret_word<<std::endl;
                std::cout<<"You Win!"<<std::endl;
                break;
            }
        std::cout<<attempt<<std::endl;
        if (counter==6){
            if (secret_word==guess_word){
                std::cout<<secret_word<<std::endl;
                std::cout<<"You Win!"<<std::endl;
                break;
            }
            else {
                std::cout<<"You Lose."<<std::endl;
                    break;
        }
        }
    }

    return 0;
}

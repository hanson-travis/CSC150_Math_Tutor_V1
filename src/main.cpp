/*****************************************************************************************
 Program......:  CSC150_Math_Tutor_V1
 Version......:  v0.1.0    (Semantic Versioning)
 Programmer(s):  Travis Hanson, Dane McClary  (Section 1)
 Date.........:  2025.08.27
 GitHub Repo..:  https://github.com/hanson-travis/CSC150_Math_Tutor_V1
 Description..:  An easy math tutor for young children.  In version 1, it displays
                 the program's intro, gets the user's name, asks a simple question,
                 and then displays an end-of-program message.
 Helpful hints:  Use FIXME and TODO tags to temporarily place reminders in the code.
                 Delete the tags before building the final release.
 ****************************************************************************************/


#include <iostream> // needed for cout and cin

using namespace std; // set the standard namespace

// start of the main function
int main() {

    // declare and initialize variables


    // Display a welcome screen
    cout << "******************************************************************************" << endl;
    cout << " _____                    _            _____         _                     _  " << endl;
    cout << " |  __|  ___    ___    __| |   __ _   |  __| __ ___ (_)  ____  _____    __| | " << endl;
    cout << " | |_   / _ |  / _ | /  _` |  / _` |  | |_   | '__/ | | / _ | |  _  | /  _' | " << endl;
    cout << " |  _|  |__/_  | __/ | (_| |  | (_||  |  _|  | |    | | |__/_ | | | | | (_| | " << endl;
    cout << " |_|    |___|  |___| |___,_|  |__,_|  |_|    |_|    |_| |___| |_| |_| |___,_| " << endl;
    cout << "******************************************************************************" << endl;
    // Share some fun trivia facts
    cout << endl; // blank line for spacing
    cout << "Did you know..." << endl;
    cout << "  * Tamagotchi keychain pets hit U.S. stores in 1997. They were" << endl;
    cout << "      invented by Aki Maita and sold by Bandai." << endl;
    cout << "  * Neopets launched in 1999; you earned Neopoints by playing games and" << endl;
    cout << "      caring for your pets." << endl;
    cout << "  * Webkinz appeared in 2005 - a plush toy with a secret code to unlock" << endl;
    cout << "      your pet online." << endl;

    // Interact with the user
    /*
    Warm introduction
    "Hi? I'm your Pixel Pet.  What's your name?" - save the user's name.
    "Nice to meet you, [name]! Guess what my name is!" - user enters pet's name.
    "Wow! You got it right! My name is [pet's name]!"
    "You showed up just in time for snacks! I love eating math facts!"
    "Every time you answer a math fact question, I get a little snack!"
    "Let's give it a shot! Try solving a few math facts for me!"    
    */

    // Ask a few simple math questions
    /* Present the math fact problem. Let them answer and save it.
       "What is 2 + 2?" - user enters answer.
       No branching yet. Show them their answer compared to the correct answer.
       "You answered [user's answer]. The correct answer is 4! Did you match it?"
       "Yum! That was a tasty snack! Let's try another one!"
       Do four more questions like this.
    */

    // Close it Down
    /* That was a lot of fun, [name]! Those snacks were tasty!
    I can't wait to play again soon! See you later, Friend!
    */

    // Refactor the code and remove any FIXME tags or TODO Tags (including these)
    return 0;
}

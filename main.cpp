#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:       dog                     // 1)
//  action 1:   the dog barks           // 2)
dog.bark();                             // 3)
//  action 2:   the dog wags            // 2)
dog.wag();                              // 3)
//  action 3:   the dog chases a ball   // 2)
dog.chaseBall();                        // 4)
//  2)
//  Noun:       girl                    // 1)
//  action 1:   the girl loves flowers  // 2)
girl.loveFlower();                      // 4)
//  action 2:   the girl puts on makeup // 2)
girl.putOnMakeup();                       // 4)
//  action 3:   the girl gets pregnant  // 2)
girl.getPregnant();                     // 4)
//  3)
//  Noun:       ocean                   // 1)
//  action 1:   the ocean cleanses      // 2)
ocean.cleanse();                        // 3)
//  action 2:   the ocean sends waves   // 2)
ocean.sendWave();                       // 4)
//  action 3:   the ocean sustains life // 2)
ocean.sustainLife();                    // 4)
//  4)
//  Noun:       snare drum              // 1)
//  action 1:   the snare drum fills the room with noise
snareDrum.fillRoomNoise();              // 4)
//  action 2:   the snare drum resonates
snareDrum.resonate();                   // 3)
//  action 3:   the snare drum breaks   // 2)
snareDrum.break();                      // 3)
//  5)
//  Noun:       hawaii                  // 1)
//  action 1:   hawaii gives warmth     // 2)
hawaii.giveWarmth();                    // 4)
//  action 2:   hawaii helps tourism    // 2)
hawaii.helpTourism();                   // 4)
//  action 3:   hawaii creates a high cost of living
hawaii.createHighCostLiving();          // 4)
//  6)
//  Noun:       student                 // 1)
//  action 1:   the student studies     // 2)
student.study();                        // 3)
//  action 2:   the student gets drunk  // 2)
student.getDrunk();                     // 4)
//  action 3:   the student passes the test
student.passTest();                     // 4)
//  7)
//  Noun:       buddha                  // 1)
//  action 1:   the buddha meditates    // 2)
buddha.meditate();                      // 3)
//  action 2:   the buddha sits under a tree
buddha.sitUnderTree();                  // 4)
//  action 3:   the buddha becomes enlightened
buddha.becomeEnlightened();             // 4)
//  8)
//  Noun:       king cobra              // 1)
//  action 1:   the king cobra eats snakes
kingCobra.eatSnake();                   // 4)
//  action 2:   the king cobra seeks solitude
kingCobra.seekSolitude();               // 4)
//  action 3:   the king cobra controls it's venom output
kingCobra.controlVenomOutput();         // 4)
//  9)
//  Noun:       butt                    // 1)
//  action 1:   the butt farts          // 2)
butt.fart();                            // 3)
//  action 2:   the butt poops          // 2)
butt.poop();                            // 3)
//  action 3:   the butt smells         // 2)
butt.smell();                           // 3)
//  10)
//  Noun:       black dildo             // 1)
//  action 1:   the black dildo gives pleasure
blackDildo.givePleasure();              // 4)
//  action 2:   the black dildo lays around
blackDildo.layAround();                 // 4)
//  action 3:   the black dildo disintegrates
blackDildo.disintegrate();              // 3)


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}

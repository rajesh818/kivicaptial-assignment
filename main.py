import random
Possibilities = ['Rock','Paper','Scissor']

# Function to find computers choice
def Computer_Choice():
    index = random.randint(0,2)
    return Possibilities[index]

# Funtion to find users choice
def User_Choice():
    S = input('Enter your Choice(Rock/Paper/Scissor) : ')
    return S

# Running loop infinte times
while(True):
    user = User_Choice() # Geting users choice
    computer = Computer_Choice() # Getting computer choice
    
    # Handing invalid input
    if user not in Possibilities:
        print("Invalid Choice")
        continue
    # Deciding the winner
    print("Computer choice is ",computer," Your choice is ", user)
    if user==computer:
        print("Tie")
    else:
        if user=='Rock':
            if computer=='Scissor':
                print("You Win :)")
            else:
                print("You Lose :(")
        elif user=='Paper':
            if computer=='Rock':
                print("You Win :)")
            else:
                print("You Lose :(")
        elif user=='Scissor':
            if computer=='Paper':
                print("You Win :)")
            else:
                print("You Lose :(")
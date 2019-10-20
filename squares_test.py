
def raise_to_power(b,e):
    final = b
    if e == 0:
        return 1
    elif abs(e) > 0:
        for _ in range(abs(e)-1):
            final *= b
        if e > 0:
            return final
        else:
            return 1/final


print(raise_to_power(2,5))



def sqrt(v, initial_guess = 1):
    
    new_val = 0.5*(initial_guess + v / initial_guess)
    error = new_val - initial_guess
    while abs(error) > 0.005:
        error = 0.5*(new_val + v/new_val) - new_val
        new_val = 0.5*(new_val + v/new_val)
    
    return round(new_val,2)


print(sqrt(25))


def moredata():
    yes_no = input('Would you like to process another pair of numbers?')
    while True:
        if yes_no == 'y':
            return True
        elif yes_no == 'n':
            return False
        else:
            yes_no = input('Would you like to process another pair of numbers?')

moredata()
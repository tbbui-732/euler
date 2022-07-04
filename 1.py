### Multiples of 3 or 5

def multiple(): 
    total = 0
    
    for i in range(0, 1000): 
        if i % 3 == 0 or i % 5 == 0: 
            total += i 
    
    return total

if __name__ == '__main__': 
    print(multiple())

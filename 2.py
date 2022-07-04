### Even Fibonacci numbers

def fib(n=1000): 
    total, a, b = 0, 1, 2

    for _ in range(0, n): 
        a, b = b, a + b
        if a % 2 == 0 and a < int(4e6):
            total += a
        elif a >= int(4e6): 
            break

    return total

if __name__ == '__main__': 
    print(fib())


# Longest Common Pattern 
https://www.codechef.com/problems/LCPESY   >>  probleam link
Solution in python 3.x

```python
for _ in range(int(input())):
    s = [0]*257                #  for integers , small letters and capital letters
    m = [0]*257                # ( [65-90][A-B],  [97-122][a-z],]
    k = 0
    a = str(input())
    b = str(input())
    for i in a:  
        p = ord(i)
        s[p]+=1               # calculated How Many times a char appered in string a.
    for j in b:
        p = ord(j)            # calculated How Many times a char appered in string b.
        m[p]+=1
    for l in range(257):
        k += min(s[l],m[l])    # minimum count because have to be match in both
    print(k)        
                                 # Happy Coding   :)
                                 
```                        
                                 

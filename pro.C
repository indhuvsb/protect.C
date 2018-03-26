#include<stdio.h>
 
int main
{
        int odd_count = 0, even_count = 0;
 
               if (n < 0) n = -n;
        if (n == 0) return 1;
        if (n == 1) return 0;
 
        while (n != 0) {
             
                        if ((n & 1) != 0)
                odd_count++;
                 
            n = n >> 1;
 
                       if ((n & 1) != 0)
                even_count++;
 
            n = n >> 1;
        }
 
        return isMultipleOf3(Math.Abs(odd_count - even_count));
    }
 
        public static void Main()
    {
        int num = 24;
 
        if (isMultipleOf3(num) != 0)
            Console.Write(num + " is multiple of 3");
        else
            Console.Write(num + " is not a multiple of 3");
    }
}

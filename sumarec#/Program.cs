using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("Ingrese un número para sumar sus dígitos recursivamente:");
        int num = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("La suma recursiva de los dígitos de " + num + " es: " + SumaDigitosRecursiva(num));
    }

    static int SumaDigitosRecursiva(int num)
    {
        if (num == 0)
        {
            return 0;
        }
        else
        {
            return num % 10 + SumaDigitosRecursiva(num / 10);
        }
    }
}
using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("Ingrese un número para sumar sus dígitos iterativamente:");
        int num = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("La suma iterativa de los dígitos de " + num + " es: " + SumaDigitosIterativa(num));
    }

    static int SumaDigitosIterativa(int num)
    {
        int suma = 0;
        while (num > 0)
        {
            suma += num % 10;
            num /= 10;
        }
        return suma;
    }
}
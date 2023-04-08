using System;

class Program
{
    static void Main(string[] args)
    {
        // create a new random number generator
        Random rand = new Random();

        // generate a random integer between 0 and 99
        int randomInt = rand.Next(100);

        Console.WriteLine("Random number between 0 and 99: " + randomInt);

        // generate a random double between 0 and 1
        double randomDouble = rand.NextDouble();

        Console.WriteLine("Random double between 0 and 1: " + randomDouble);
    }
}

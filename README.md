CIS 165 Lab 4

Plans

Average program: I planned to store 28, 32, 37, 24, and 33 in five separate double variables. Then I would add them into sum, divide sum by 5, store the answer in average, and print both results.

Ocean-level program: I planned to use 1.5 millimeters per year as a constant and store 5, 7, and 10 years separately. I would multiply the rate by each number of years, store each result, and print the projections with units.

Testing

I used OnlineGDB to compile and run the programs. I compared the outputs with the expected answers, then changed the values to test them again.

|Program and test|Values used|Expected results|Actual results|Match or correction|
|-|-|-|-|-|
|Average - assigned|28, 32, 37, 24, 33|Sum: 154; Average: 30.8|Sum: 154; Average: 30.8|Match; no correction|
|Average - changed|1, 2, 3, 4, 7|Sum: 17; Average: 3.4|Sum: 17; Average: 3.4|Match; no correction|
|Ocean - assigned|1.5 mm/year|5 years: 7.5 mm; 7 years: 10.5 mm; 10 years: 15 mm|5 years: 7.5 mm; 7 years: 10.5 mm; 10 years: 15 mm|Match; no correction|
|Ocean - changed|2.3 mm/year|5 years: 11.5 mm; 7 years: 16.1 mm; 10 years: 23 mm|5 years: 11.5 mm; 7 years: 16.1 mm; 10 years: 23 mm|Match; no correction|

I restored the original values (28, 32, 37, 24, 33 and 1.5 mm/year) and ran both programs again with those values.

Code explanations

1. I used double for the five values and the average because it can store decimal numbers. Even if the original numbers are whole numbers, their average might not be.
2. The program adds 28 + 32 + 37 + 24 + 33 and stores 154 in sum. Then it divides 154 by 5 and stores 30.8 in average.
3. The average uses the total of all five numbers. Dividing only the last number would give the wrong answer because it leaves out the other four numbers.
4. The ocean program multiplies the yearly rise by the number of years. For example, 1.5 \* 7 = 10.5 millimeters after 7 years.
5. The annual rate is a good constant because it is supposed to stay at 1.5 during each run. Giving it a name also makes it easy to identify and change when testing.
6. Saving calculations in variables before cout makes the code easier to read and debug. It also follows the class requirement to keep calculations separate from output.

How to run

In OnlineGDB, open one .cpp file at a time, choose C++17, and click Run. Each file is its own program and has its own main function.


## How to Compile and Run

I used OnlineGDB to compile and run both C++ programs separately using C++17.

To compile the programs using g++, use these commands:

g++ -std=c++17 -Wall -Wextra average.cpp -o average
g++ -std=c++17 -Wall -Wextra ocean_levels.cpp -o ocean_levels

To run the programs:

./average
./ocean_levels

Both programs display their results automatically without requiring user input.
  

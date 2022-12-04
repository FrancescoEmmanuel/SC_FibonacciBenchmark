# Measuring Time and Space complexity of a Fibonacci algorithm: Recursive vs. Iterative

In this assignment, I will be comparing the time and space complexity between the iterative and recursive approach to the Fibonacci sequence.
Let's first start by showing how the iterative and recursive approach of finding the nth value in a Fibonacci sequence works.

## Recursive
A recursive function is defined as a function that calls itself during its execution once or more. This function is very useful for many different types of problems as it allows programmers to write very efficient programs using minimal amount code. Below is an example of a recursive function used to find the nth value of a Fibonacci sequence:<br>
<br>
![](Fibonacci-benchmark-images/fibonacci-recursive.PNG)


## Iterative
An iterative program is a program that runs its code repeitively until a specific wanted end result is achieved.
Below is an example of an iterative program used to find the nth value of a Fibonnaci sequence:
<br>
<br>
![](Fibonacci-benchmark-images/fibonacci-iterative.PNG)


## Testing
<br>
In this section, I will be testing the functionality of my recursive and iterative codes.
<br>
To do this I will run the mylib.c file which contains both my recursive and iterative functions of finding the nth value of a Fibonacci sequence, the following will be results will be printed in the terminal:
<br>
<br>

<img src =Fibonacci-benchmark-images/testing-code.jpg>

From the results that I have obtained above, it can be seen that the same output on the iterative and recursive approach for a Fibonacci number of an input N was returned. This shows the validity of both my iterative and recursive code implementation.

## Benchmarking
As can be seen from the previous section, the results of the two algorithm are the same. So what differentiates the two and which one is better?
To find out we can compare their time and space complexities.
<br>
<br>

### Time complexity
The time complexity of an algorithm can be defined as the amount of time taken by an algorithm to run, as a function of the length of the input.It measures the time taken to execute each statement of code in an algorithm.
<br>
<br>
For this test, I will be using the N value 30
#### Recursive
To find the time complexity of the recursive program:
<br>
1. Open terminal and direct to the "fibonacci-benchmark" folder using cd<folder path> 
2. run make time-recursive; ./main_b_time_recursive.out
<br>
<br>
The result when N = 30 is as shown below:
<br>
<br>
<img src = Fibonacci-benchmark-images/fibonacci-recur-time.jpg>
<br>
  
#### Iterative
To find the time complexity of the iterative program:
<br>
1.Repeat the same steps from before but replace the second step with Run make time-iterative; ./main_b_time_iterative.out
<br>
<br>
The result when N = 30 is as shown below:
<br>
<br>
<img src =Fibonacci-benchmark-images/fibonacci-iter-time.jpg>
<br> 
  
### Space complexity
The space complexity of an algorithm is defined as the amount of memory or space an algorithm takes to run as a function of the length of the input. Space complexity is a way to evaluate the performance of an algorithm.
<br>
<br>
For this test, I will be using the N value 1000
  <br>
#### Recursive
To find the space complexity of the recursive program:
<br>
<br>1. Search "Command Prompt" and run it
<br>2. Direct to the "fibonacci-benchmark" folder using cd <folder path>
<br>3. Run make space-recursive; main_b_space_recurive.exe
<br>4. Do not close the Command Prompt
<br>
<br>

#### Iterative
To find the space complexity of the iterative program:
<br>
1. Repeat steps 1,2,4 from before
<br>
2. Replace step 3 with run make space-iterative; main_b_space_iterative.exe

#### Results:
To see and compare the space complexities :
<br>
Open "Task Manager" and search main_b_space_iterative and main_b_space_recursive
<br><br>
The results will be shown as below:
<br>
<img src =Fibonacci-benchmark-images/space-complexity.jpg>













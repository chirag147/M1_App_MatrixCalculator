# Requirements
## Introduction
 Mathematical operations are a part of our daily lives. Everyday we will be involving with various types of calculations around us. Matrices is a mathematical entity where numbers are arranged in rows and columns. A lot of applications exist with matrices in real life.The major application lies in the software industry such as development of algorithms like path finder algorithms, image processing algorithms and many more.
 In this project, some of the basic matrix operations are presented where a user can select the operation to be performed on the matrix. Then the matrices with their size are entered. Note that only square matrices are being considered for the project.

## Research

### Objective
This project focuses on matrix operations on square matrices. The operations performed on a pair of square matrices are, addition, subtraction and multiplication. The operations performed on a single square matrix are, transpose, determinant and inverse. 

### Benefits

A user who is working on a laptop or a desktop who would be working on matrix based calculations, can make use of this application as handy. A human being can find the output values of a matrix for a maximum of size 3 X 3, i.e 3 rows and 3 columns. If they try to solve the matrix for dimensions above 3 , the time consumed is large and verification that the solution is correct or not consumes extra time. Hence this tool can be used to cross check the matrix operations conducted.

## Cost and Features
The cost for implementing a project involving matrix calculations is minimal to none. But the extension of matrix applications to various state of the art domains like machine learning, image processing, cryptography , path finder algorithms etc will have a research and development being done. And for the required calculations related to matrices, this program comes in handy.
 
### Some of The features of the project
This program has dynamic memory allocation involved for allocating memory for the matrices, i.e 2 dimensional arrays. A structure is implemented for storing the input matrices. The user can select the opeation to be performed by pressing a number on the keyboard. The significance of each number, i.e the operation which it performs will be displayed on the screen during the execution of the program.

## Defining Our System
The system on the whole is viewed as a blackbox which accepts input of a single number. Then the mapping of the number is done so as to perform the appropriate function. Then the user will be prompted to enter the matrix size. After that the user is prompted to enter the matrix elements. The input is stored in 2D arrays which are dynamically allocated and passed to the respective functions. Then the output is printed on the screen. This whole process is in a loop until the user presses a key which will exit the program.

## SWOT ANALYSIS

![SWOT-Sample](https://github.com/chirag147/M1_App_MatrixCalculator/blob/4e265e677c43b5b0d57811a6b3146367678cbb51/1_Requirements/SWOT.png)

## Who
Students who want to solve matrix related problems for their academic work
Datascience workers working on machine learning and deep learning applications which majorly involve matrices
Software engineers
Researchers and mathematicians

## What
Calculate the sum, differemce, product of two matrices and also the determinnt, transpose and inverse of a single matrix.

## When
Students facing a difficulty in solving a matrix related problem, can use this program to conform their outputs.
Researchers can use it for getting a quick calculation output.
Comes to a great use when calculating for matrices of huge order.

## Where
Students, employees and researchers all over the world.

## How
This program can be executed in a system which has Linux or Windows operating system. 

## High Level Requirements
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | User shall be able to specify the size of the matrix |Technical| IMPLEMENTED |
| HR02 | User shall be able to add the matrices| Techincal | IMPLEMENTED | 
| HR03 | User shall be able to subtract the matrices| Techincal |  IMPLEMENTED  |
| HR04 | User shall be able to multiply the matrices | Techincal |  IMPLEMENTED  |
| HR05 | User shall be able to find determinant, transpose and inverse of a matrix | Techincal |  IMPLEMENTED  |
## Low level Requirements 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | (1). User must specify the size of the matrix.                                                    (2). The size specified is the dimensions of the square matrix | HR01 |  IMPLEMENTED  |
| LR02 | Addition of two matrices can be done (1). Both the matrices need to be of same size(2). The size entered in the begining is same for both the matrices | HR02 |  IMPLEMENTED |
| LR03 | Subtraction of two matrices is implemented in the same manner as addition| HR03 | IMPLEMENTED |
| LR04 | Multiplication of two matrices is done on two square matrices of a specified size| HR04 |  IMPLEMENTED  |
| LR05 | The determinant of a single matrix of a specified size is implemented| HR05 |  IMPLEMENTED  |
| LR06 | The transpose of a single matrix operation is implemented | HR05 |  IMPLEMENTED  |
| LR07 | To find the inverse of a matrix, both the determinant function and the transpose functions are used in it. The condition that a matrix is invertible is to check if the determinant of the matrix is equal to 0. | HR05 |  IMPLEMENTED  |

# Design

## High Level Design 

### Architectural Diagram
![Architecture](https://github.com/chirag147/M1_App_MatrixCalculator/blob/2f7cd31a2423557dc6a498f2772590102849d739/2_Design/FlowChart.png)

### Use Case Diagram
![Use Case Diagram](https://github.com/chirag147/M1_App_MatrixCalculator/blob/2f7cd31a2423557dc6a498f2772590102849d739/2_Design/usecasediagram.png)

## Low Level Design 

### UML Class Diagram
![UML class diagram](https://github.com/chirag147/M1_App_MatrixCalculator/blob/2f7cd31a2423557dc6a498f2772590102849d739/2_Design/Umlclassdiagram.png)

# Implementation

## Folder Structure
Folder        | description
--------------| ----------------------------------------------
`inc`         | All header files
`src`         | Main source code for calculator
`unity`       | All unity files
`test`        | All source code and data for testing purposes
`build`       | Build output (Not included in git)

# TEST PLAN
## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |tested addition of two matrices|  matrix1, matrix2, n| SUCCESS|SUCCESS|Technical |
|  H_02       |tested subtraction of two matrices|  matrix1, matrix2, n|SUCCESS|SUCCESS|Technical   |
|  H_03       |tested multiplication of two matrices|  matrix1, matrix2, n|SUCCESS|SUCCESS|Technical |
|  H_04       |tested determinant of a matrix|  matrix1, n|SUCCESS|SUCCESS|Technical |
|  H_05       |tested transpose of a matrix|  matrix1, n|SUCCESS|SUCCESS|Technical |
|  H_06       |tested inverse of a matrix|  matrix1, n|SUCCESS|SUCCESS|Technical |
|  H_07       |tested power of -1 function| 3|-1|-1|Technical |
|  H_08       |tested power of -1 function| 2|1|1|Technical |

## Table no: Low level test plan

| **Test ID** | **HLT ID** |**Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | H_01, H_02, H_03|Tested on functions which accept two matrices as input|  matrix1, matrix2, n |SUCCESS|SUCCESS |Technical |
|  L_02       | H_04, H_05, H_06|Tested on functions which accept single matrix as input|  matrix1, n |SUCCESS|SUCCESS |Technical |
|  L_03       | H_07, H_08 |Tested on function which returns an integer value|  3  |-1|-1|Technical |

# images

## Some of the screenshots of the program testing each functionality

### Inputting choice

![Inputting choice](https://github.com/hemanthasapu/256889-miniproject-ltts/blob/main/5_Images/inputchoice.PNG)

### Inputting matrix data

![matrix data](https://github.com/hemanthasapu/256889-miniproject-ltts/blob/main/5_Images/matrixdata.PNG)

### Sum of the matrices

![sum](https://github.com/hemanthasapu/256889-miniproject-ltts/blob/main/5_Images/sum.PNG)

### Difference of the matrices

![Difference](https://github.com/hemanthasapu/256889-miniproject-ltts/blob/main/5_Images/difference.PNG)

### Product of the matrices

![Product](https://github.com/hemanthasapu/256889-miniproject-ltts/blob/main/5_Images/product.PNG)

### Determinant of the matrix

![Determinant](https://github.com/hemanthasapu/256889-miniproject-ltts/blob/main/5_Images/determinant.PNG)

### Transpose of the matrix

![Transpose](https://github.com/hemanthasapu/256889-miniproject-ltts/blob/main/5_Images/transpose.PNG)

### Inverse of the matrix

![Inverse](https://github.com/hemanthasapu/256889-miniproject-ltts/blob/main/5_Images/inverse.PNG)

### Exiting the application

![Exit](https://github.com/hemanthasapu/256889-miniproject-ltts/blob/main/5_Images/exit.PNG)

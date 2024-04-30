# Tic-Tac-Toe-game---C

## [ENG]
Simple tic-tac-toe game for the console terminal. The game consists of a board with 8 rows and 8 columns. Initially, all 64 squares are set to circle ('O'). During the game, the player is asked to choose a row and column number. After selection, the state of the chosen square and its four adjacent squares is reversed (circle becomes cross, cross becomes circle). The game ends with victory when all squares have a cross state. The game keeps track of and displays the number of moves made.

1) Hardware Platform
   Operating System: Windows 10
   
3) Launching and Compilation Method
   The program is compiled and run in Visual Studio Code.
   
5) Operation Principle
   The algorithm creates a matrix with dimensions of 8x8, then fills it with only 0s, giving it the appearance of a matrix, creates a frame, and numbers the rows and columns. The user selects rows and columns, the algorithm ensures that they are selected from the correct range, counts the user's moves, changes 0s to
   1s, counts the number of zeros in the matrix, and if the matrix is filled with only zeros, it displays a message about winning.
   
7) List of Variables
   - I used global variables in the code:
   - int matrix[8][8]; // 8x8 matrix
   - int i; // row
   - int j; // column
   - int row; // row
   - int column; // column
   - int move; // user move
   - int counting = 0; // variable used to count 1s in the matrix
   
9) List of Functions
   - void createMatrix(); // creates an 8x8 matrix filled with 0s
   - void showMatrix(); // displays the matrix, labels rows and columns, creates a frame
   - void moveCounter(); // counts user moves
   - void selectRow(); // responsible for selecting a row
   - void selectColumn(); // responsible for selecting a column
   - void change01Matrix(); // changes 0s to 1s
   - void countMatrix(); // checks if the matrix contains only 1s
   - void winningMessage(); // displays a message about winning

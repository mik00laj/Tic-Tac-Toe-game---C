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
   
   I used global variables in the code:
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

## [PL]

Prosta gra w kółko i krzyżyk na konsolę – terminal. Gra składa się z planszy: 8 wierszy i 8 kolumn. Początkowo, wszystkie 64 pola przyjmują stan: kółko. W ramach gry gracz proszony jest o wybranie numeru wiersza i kolumny. Po wybraniu, stan danego pola oraz czterech pól przyległych zamieniany jest na przeciwny (zamiast kółka wstawiamy krzyżyk, zamiast krzyżyka wstawiamy kółko). Gra kończy się zwycięstwem, gdy wszystkie pola będą miały stan krzyżyk. Gra zlicza i wyświetla ilość wykonanych ruchów.

1) Platforma sprzętowa
   
   System operacyjny Windows 10
3) Sposób uruchamiania i kompilacji
   
   Kompilacja i uruchomienie programu odbywa się w Visual Studio Code
5) Zasada działania
   
   Algorytm tworzy macierz o wymiarze 8x8, a następnie wypełnia ją samymi 0, nadaję wyglądu macierzy, tworzy ramkę i numeruje wiersze i kolumny. Użytkownik wybiera wiersze i kolumny, algorytm pilnuje żeby były wybrane z poprawnego zakresu, zlicza ruchy użytkownika, zamienia 0 na 1, zlicza ilość zer w macierzy,         jeśli macierz jest wypełniona samymi zerami, wyświetla komunikat o wygranej.
7) Wykaz zmiennych
   
   Użyłem w kodzie zmiennych globalnych:
   - int macierz[8][8]; // macierz 8x8
   - int i; // wiersz
   - int j; // kolumna
   - int wiersz; // wiersz
   - int kolumna; // kolumna
   - int ruch; // ruch użytkownika
   - int zliczanie=0; // zmienna wykorzystana do zliczania 1 w macierzy

9) Wykaz funkcji
   - void stworzMacierz(); //tworzy macierz 8x8 wypełnioną 0
   - void pokazMacierz(); //wyświetla macierz, podpisuje wiersze i kolumny, tworzy ramkę
   - void licznikRuchow(); //zlicza ruchy użytkownika
   - void wybierzWiersz(); //odpowiada za prawidłowy wybór wiersza
   - void wybierzKolumna(); //odpowiada za prawidłowy wybór kolumny
   - void zamiana01Macierz(); //zamienia 0 na 1
   - void zliczanieMacierz(); //sprawdza czy macierz zawiera same 1
   - void komunikatWygrana(); //wyświetla komunikat o wygranej

  # Results 
  
Start

![image](https://github.com/mik00laj/Tic-Tac-Toe-game---C/assets/108618874/91578d76-2670-4811-bce1-14b7b43d87ba)

Step 1

![image](https://github.com/mik00laj/Tic-Tac-Toe-game---C/assets/108618874/346233ee-1bf2-4382-b300-14d3eea035b6)

Step 2

![image](https://github.com/mik00laj/Tic-Tac-Toe-game---C/assets/108618874/0b265b1c-8452-4ffe-8c82-895adc8d7c1f)





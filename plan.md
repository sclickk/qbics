The method for solving should reflect that of the solution guide [here](http://lghttp.38568.nexcesscdn.net/8013252/pdf/uploads/general_content/Rubiks_cube_3x3_solution-en.pdf).

Qbics relies on cubefiles:
* ```qbics solve <cubefile>``` to solve.
* ```qbics gencf <name>``` to generate a template cubefile.

Cubefiles should be plain text files like they are in the sample.

In general, the solve command should work like this:

1. Is the cube real? If so,
2. Are any of the steps alresdy solved? If so, skip them
3. Follow the steps:
  * Solve white edges
  * Solve white corners
  * Solve second layer
  * Solve yellow corners
  * Solve yellow edges
4. If all is successful then simplify and print out the move notation.

When I say "simplify" I mean to remove redundant moves. The most basic examples are X X or X' X' = X2, X X X = X', and X' X' X' = X. This reduces the overall number of moves spit out.

**USACOW** 
<br>
[ Memory: 32 MB, CPU: 1 sec ]

Farmer John’s N
 cows (1≤N≤20
) have recently gotten into programming contests like the USACOW. In fact, the cows have already taken K
 USACOW contests (1≤K≤10
), and Farmer John knows the rankings of the cows in each contest.

In order to find out whether his cows are actually smart enough to solve programming problems, or if they just got lucky, Farmer John decides to figure out how consistent the rankings are. A pair of two different cows is consistent if one cow placed higher than the other one in every contest.

Please help Farmer John compute the number of consistent pairs.

INPUT FORMAT

The first line of the input file contains two integers K
 and N
. The next K
 lines each contain the integers 1…N
 in some order, denoting the rankings of the cows. Cows can be identified by the numbers 1
 to N
. If A
 comes before B
 in one of these lines, that means cow A
 placed higher than cow B
.

OUTPUT FORMAT

Output an integer on a single line: The number of consistent pairs.
<br>
<br>
SAMPLE INPUT

    3 4
    4 1 2 3
    4 1 3 2
    4 2 1 3
SAMPLE OUTPUT

    4
<br>
There are 4 consistent pairs of cows: (1,4)
, (2,4)
, (3,4)
, and (1,3)

<br>
<br>
MODE: normal<br>
Language: cpp<br>

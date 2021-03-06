# Assigning mice to Holes

# There are N Mice and N holes are placed in a straight line.

# Each hole can accomodate only 1 mouse.

# A mouse can stay at his position, move one step right from x to x + 1, or move one step left from x to x − 1. Any of these moves consumes 1 minute.

# Assign mice to holes so that the time when the last mouse gets inside a hole is minimized.

# Input Format

# First line contains the integer N. Next line contains N integers, the position of the mice.
# Third line contains N integers, the position of the holes.

# Constraints

# 1 <= N <= 105

# Output Format

# Output one number corresponding to the minimum number of minutes it will take for the last mice to go into the hole.

# Sample Input 0

# 3
# 4 -4 2
# 4 0 5
# Sample Output 0

# 4

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n
    int mice[n],holes[n];
    for(int i=0;i<n;i++)
        cin>>mice[i];
        
     for(int i=0;i<n;i++)
         cin>>holes[i];
         
     sort(mice,mice+n);
     sort(holes,holes+n);
     int max=0;
     int count;
     
     for(int i=0;i<n;i++)
     {
        count=abs(mice[i]-holes[i]);
        if(count>max)
           max=count;
     }
     cout<<max;
}

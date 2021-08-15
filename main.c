#include <stdio.h>
int main()
{
  int n,o,k;
  int x=1,i,p,g,b,h,m,t;
  int q,a;
  printf("Create a string");
  printf("\nEnter the letter count of your string: ");
  scanf("%d",&n);
  char s[n];
  for (i=0;i<n+1;i++)
  {
    scanf("%c",&s[i]);
  }
  printf("\nString 1 is: ");
  for (i=0;i<n+1;i++)
  {
    printf("%c",s[i]);
  }
  printf("\n\nDo you want to create a new string?\n 1: Yes\n 2: No\n Type here: ");
  scanf("%d",&a);
  if(a==1)
  {
    printf("\nEnter the letter count of your string: ");
    scanf("%d",&o);
    char d[o];
    printf("\nEnter the letters of your string here: ");
    for (i=0;i<o+1;i++)
    {
      scanf("%c",&d[i]);
    }
    printf("\nString 2 is: ");
    for (i=0;i<o+1;i++)
    {
      printf("%c",d[i]);
    }
    while(x!=0)
    {
      printf("\n\nList of Functions :\n 0: To exit\n 1: To copy a string\n 2: To concatinate your 2 strings\n 3: To compare your 2 strings\n 4: To find whether your new string is a substring of either of the two of your strings\n 5: To find whether your new string is a subsequence of either of the two of your strings\n 6: To recreate String 1\n 7: To recreate String 2\n 8: To find the length of either string\n Type here: ");
      scanf("%d",&q);
      if(q==0)
      {
        x=0;
      }
      if(q==1)
      {
        printf("\nEnter the string you want to copy: \n1: For String 1\n2: For String 2\n Type here: ");
        scanf("%d",&g);
        if (g==1)
        {
          b=n;
          char k[b];
          for (i=0;i<n+1;i++)
          {
            k[i]=s[i];
          }
          printf("\nYour copied string is: ");
          for (i=0;i<b+1;i++)
          {
            printf("%c",k[i]);
          }
        }
        if (g==2)
        {
          b=n;
          char k[b];
          for (i=0;i<n+1;i++)
          {
            k[i]=s[i];
          }
          printf("\nYour copied string is: ");
          for (i=0;i<b+1;i++)
          {
            printf("%c",k[i]);
          }
        }
        if(g!=1 && g!=2)
        {
          printf("\nIncorrect value entered!!!");
        }
      }
      if(q==2)
      {
        b=n+o+1;
        char k[b];
        for (i=0;i<n+2;i++)
        {
          k[i]=s[i];
        }
        for (i=0;i<o+1;i++)
        {
          k[i+n+1]=d[i];
        }
        printf("\nYour concatinated string is: ");
        for (i=0;i<b+1;i++)
        {
          printf("%c",k[i]);
        }
      }
      if(q==3)
      {
        if(n>o)
        {
          int flag=1;
          for (i=0;i<n+1;i++)
          {
            if (s[i]!=d[i])
            {
              flag=0;
            }
          }
          if (flag==1)
          {
            printf("\nBoth of your strings are the same!!!");
          }
          else
          {
            printf("\nBoth of your strings are different!!!"); 
          }
        }
        if(o>n)
        {
          int flag=1;
          for (i=0;i<o+1;i++)
          {
            if (d[i]!=s[i])
            {
              flag=0;
            }
          }
          if (flag==1)
          {
            printf("\nBoth of your strings are the same!!!");
          }
          else
          {
            printf("\nBoth of your strings are different!!!"); 
          }
        }
        if(o==n)
        {
          int flag=1;
          for (i=0;i<o+1;i++)
          {
            if (d[i]!=s[i])
            {
              flag=0;
            }
          }
          if (flag==1)
          {
            printf("\nBoth of your strings are the same!!!");
          }
          else
          {
            printf("\nBoth of your strings are different!!!"); 
          }
        }
      }
      if(q==4)
      {
        printf("\nEnter which string you want to find the substring of: \n1: For String 1\n2: For String 2\n Type here: ");
        scanf("%d",&g);
        if (g==1)
        {
          printf("\nEnter the letter count of your string: ");
          scanf("%d",&b);
          char k[b];
          printf("\nEnter the letters of your string here: ");
          for (i=0;i<b+1;i++)
          {
            scanf("%c",&k[i]);
          }
          printf("\nString to be checked is: ");
          for (i=0;i<b+1;i++)
          {
            printf("%c",d[i]);
          }
          int v=n;
          int f[v];
          for (i=0;i<v+1;i++)
          {
            f[i]=i;
          }
          int u=b;
          int l[u];
          for (i=0;i<u+1;i++)
          {
            l[i]=0;
          }
          for (i=0;i<b+1;i++)
          {
            for (t=0;t<n+1;t++)
            {
              if (k[i]==s[t])
              {
                int flaag=0;
                if(l[i]==0)
                {
                  for (m=0;m<u;m++)
                  {
                    if(f[t]==l[m])
                    {
                      flaag=1;
                    }
                  }
                  if (flaag!=1)
                  {
                    l[i]=f[t];
                  }
                }
              }
            }
          }
          int c=0;
          for (i=1;i<u;i++)
          {
            c=c+1;
          }
          if (c!=u-1)
          {
            printf("\n\nThis string isn't a Substring of String 1!!!");
          }
          if (c==u-1)
          {
            printf("\n\nThis string is a Substring of String 1!!!");
          }
        }
        if (g==2)
        {
          printf("\nEnter the letter count of your string: ");
          scanf("%d",&b);
          char k[b];
          printf("\nEnter the letters of your string here: ");
          for (i=0;i<b+1;i++)
          {
            scanf("%c",&k[i]);
          }
          printf("\nString to be checked is: ");
          for (i=0;i<b+1;i++)
          {
            printf("%c",d[i]);
          }
          int v=o;
          int f[v];
          for (i=0;i<v+1;i++)
          {
            f[i]=i;
          }
          int u=b;
          int l[u];
          for (i=0;i<u+1;i++)
          {
            l[i]=0;
          }
          for (i=0;i<b+1;i++)
          {
            for (t=0;t<o+1;t++)
            {
              if (k[i]==d[t])
              {
                int flaag=0;
                if(l[i]==0)
                {
                  for (m=0;m<u;m++)
                  {
                    if(f[t]==l[m])
                    {
                      flaag=1;
                    }
                  }
                  if (flaag!=1)
                  {
                    l[i]=f[t];
                  }
                }
              }
            }
          }
          int c=0;
          for (i=1;i<u+1;i++)
          {
            c=c+1;
          }
          if (c!=u-1)
          {
            printf("\n\nThis string isn't a Substring of String 2!!!");
          }
          if (c==u-1)
          {
            printf("\n\nThis string is a Substring of String 2!!!");
          }
        }
        if(g!=1 && g!=2)
        {
          printf("\nIncorrect value entered!!!");
        }
      }
      if(q==5)
      {
        printf("\nEnter which string you want to find the subsequence of: \n1: For String 1\n2: For String 2\n Type here: ");
        scanf("%d",&g);
        if (g==1)
        {
          printf("\nEnter the letter count of your string: ");
          scanf("%d",&b);
          char k[b];
          printf("\nEnter the letters of your string here: ");
          for (i=0;i<b+1;i++)
          {
            scanf("%c",&k[i]);
          }
          printf("\nString to be checked is: ");
          for (i=0;i<b+1;i++)
          {
            printf("%c",d[i]);
          }
          int v=n;
          int f[v];
          for (i=0;i<v+1;i++)
          {
            f[i]=i;
          }
          int u=b;
          int l[u];
          for (i=0;i<u+1;i++)
          {
            l[i]=0;
          }
          for (i=0;i<b+1;i++)
          {
            for (t=0;t<n+1;t++)
            {
              if (k[i]==s[t])
              {
                int flaag=0;
                if(l[i]==0)
                {
                  for (m=0;m<u;m++)
                  {
                    if(f[t]==l[m])
                    {
                      flaag=1;
                    }
                  }
                  if (flaag!=1)
                  {
                    l[i]=f[t];
                  }
                }
              }
            }
          }
          int flg=0;
          for (i=1;i<u;i++)
          {
            if(l[i]>=l[i+1])
            {
              flg=1;
            }
          }
          if (flg==1)
          {
            printf("\n\nThis string isn't a Subsequence of String 1!!!");
          }
          if (flg==0)
          {
            printf("\n\nThis string is a Subsequence of String 1!!!");
          }
        }
        if (g==2)
        {
          printf("\nEnter the letter count of your string: ");
          scanf("%d",&b);
          char k[b];
          printf("\nEnter the letters of your string here: ");
          for (i=0;i<b+1;i++)
          {
            scanf("%c",&k[i]);
          }
          printf("\nString to be checked is: ");
          for (i=0;i<b+1;i++)
          {
            printf("%c",d[i]);
          }
          int v=o;
          int f[v];
          for (i=0;i<v+1;i++)
          {
            f[i]=i;
          }
          int u=b;
          int l[u];
          for (i=0;i<u+1;i++)
          {
            l[i]=0;
          }
          for (i=0;i<b+1;i++)
          {
            for (t=0;t<o+1;t++)
            {
              if (k[i]==d[t])
              {
                int flaag=0;
                if(l[i]==0)
                {
                  for (m=0;m<u;m++)
                  {
                    if(f[t]==l[m])
                    {
                      flaag=1;
                    }
                  }
                  if (flaag!=1)
                  {
                    l[i]=f[t];
                  }
                }
              }
            }
          }
          int flg=0;
          for (i=1;i<u;i++)
          {
            if(l[i]>=l[i+1])
            {
              flg=1;
            }
          }
          if (flg==1)
          {
            printf("\n\nThis string isn't a Subsequence of String 2!!!");
          }
          if (flg==0)
          {
            printf("\n\nThis string is a Subsequence of String 2!!!");
          }
        }
        if(g!=1 && g!=2)
        {
          printf("\nIncorrect value entered!!!");
        }
      }
      if(q==6)
      {
        printf("\nEnter the letter count of your string: ");
        scanf("%d",&n);
        char s[n];
        for (i=0;i<n+1;i++)
        {
          scanf("%c",&s[i]);
        }
        printf("\nString 1 is: ");
        for (i=0;i<n+1;i++)
        {
          printf("%c",s[i]);
        }
      }
      if(q==7)
      {
        printf("\nEnter the letter count of your string: ");
        scanf("%d",&o);
        char d[o];
        printf("\nEnter the letters of your string here: ");
        for (i=0;i<o+1;i++)
        {
          scanf("%c",&d[i]);
        }
        printf("\nString 2 is: ");
        for (i=0;i<o+1;i++)
        {
          printf("%c",d[i]);
        }
      }
      if(q==8)
      {
        printf("\nEnter which string you want to find the length of: \n1: For String 1\n2: For String 2\n Type here: ");
        scanf("%d",&g);
        if(g==1)
        {
          printf("\nThe length of String 1 is: %d",n);
        }
        if(g==2)
        {
          printf("\nThe length of String 2 is: %d",o);
        }
        if(g!=1 && g!=2)
        {
          printf("\nIncorrect value entered!!!");
        }
      }
      if(q!=0 && q!=1 && q!=2 && q!=3 && q!=4 && q!=5 && q!=6 && q!=7 && q!=8)
      {
        printf("Incorrect value entered!!!");
      }
    }
  }
  printf("Thank You!");
return 0;
}

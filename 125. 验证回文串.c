bool isPalindrome(char * s)
{
	int len,i,k=0;
	len=strlen(s);
	char *a=(char *)malloc(sizeof(char)*len);
	for(i=0;i<len;i++)
	{
		if((s[i]>='0'&&s[i]<='9')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
		{
			a[k++]=tolower(s[i]);
		}
	}
	for(i=0;i<k/2;i++)
	{
		if(a[i]!=a[k-i-1])
		{
			return false;
		}
	}
	return true;
}

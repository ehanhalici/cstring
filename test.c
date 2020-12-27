#include <stdio.h>
#include "cstring.h"



int main()
{
	cstring s = String("---------------------");
	
	printf("Text is :\n");
	printf("%s\n\n",s->string);
	
	//new String create
	cstring ns = String("");

	//slice s to ns
	s->slice(s,ns,5,10);
	printf("slice Text  5 to 10:\n");
	printf("%s\n\n",ns->string);

	s->addHead(s,"head ");
	printf("add head :\n");
	printf("%s\n\n",s->string);
	
	s->addEnd(s," end");
	printf("add end :\n");
	printf("%s\n\n",s->string);

	
	s->addTo(s,15," new ");
	printf("add new text to :\n");
	printf("%s\n\n",s->string);

	s->replaceThisIndex(s,5,10," random text ");
	printf("reaplace in 5 yo 10 :\n");
	printf("%s\n\n",s->string);

	int location = s->find(s,0,"random");
	printf("random is in this location :\n");
	printf("%d\n\n",location);

	int count = s->howManyAreIn(s,"random");
	printf("how many \"random\" in text :\n");
	printf("%d\n\n",count);
	
	s->replaceThisString(s,"random","set");
	printf("replace  \"random\" to \"set\" :\n");
	printf("%s\n\n",s->string);

	printf("parse this text and keep it in list :\n");
	cstringList l = s->getListFromParse(s," ");
	cstringList p = l;

	for (size_t i = 0; i < l->listCount(l); i++)
	{
		printf("%s\n",p->data->string);
		p=p->next;
	}

	return 0;
}
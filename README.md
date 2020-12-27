# cstring

cstring is an object oriented string library for c. It does the memory management itself. 


# Usage

include header files
>  #include  "cstring.h"

create new String
> cstring  s = String("this is new string");

get length
> int length = s->length(s);

delete and create new string
>s->new(s,"---------------------")

slice to ns
>cstring  ns = String("");
>s->slice(s,ns,5,10);
>ns = -----

add head
>s->addHead(s,"head ");
>s = head ---------------------

add end
>s->addEnd(s," end");
>s = head --------------------- end

add to
>s->addTo(s,15," new ");
>head ---------- new ----------- end

replace in 5 to 10
>s->replaceThisIndex(s,5,10," random text ");
>s = head  random text ----- new ----------- end

find "random" location
>int  location = s->find(s,0,"random");
location = 6

random count
>int  count = s->howManyAreIn(s,"random");
>count = 1

replace 
>s->replaceThisString(s,"random","set");
>ead  set text ----- new ----------- end

parse and show
>cstringList  l = s->getListFromParse(s," ");
>cstringList  p = l;
>for (size_t  i = 0; i < l->listCount(l); i++)
>{
>    printf("%s\n",p->data->string);
>p=p->next;
>}
>
>return :
>head, set, text,-----,new,-----------,end


## WARNING

s and s->string is a pointer, do not do the following
1 - dont do
>cstring s = String()

do 
>cstring s = String("")

2 - dont do
>s->string  = "new text"

do
>s->new("new text")

3 - dont do
>cstring ns = String("new varriable")
>s->string = ns->string

you lost last data, this causes memory leak. s->string and ns->string, point the same address

4 - if you want to delete
>free(s->string)

than
>free(s)

5- and never forget that these are a pointer
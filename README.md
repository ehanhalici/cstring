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
>s->slice(s,ns,5,10);<br>
>ns = -----

add head
>s->addHead(s,"head ");<br>
>s = head ---------------------

add end
>s->addEnd(s," end");<br>
>s = head --------------------- end

add to
>s->addTo(s,15," new ");<br>
>head ---------- new ----------- end

replace in 5 to 10
>s->replaceThisIndex(s,5,10," random text ");<br>
>s = head  random text ----- new ----------- end

find "random" location
>int  location = s->find(s,0,"random");<br>
>location = 6

random count
>int  count = s->howManyAreIn(s,"random");<br>
>count = 1

replace 
>s->replaceThisString(s,"random","set");<br>
>ead  set text ----- new ----------- end

parse and show
>cstringList  l = s->getListFromParse(s," ");<br>
>cstringList  p = l;<br>
>for (size_t  i = 0; i < l->listCount(l); i++)<br>
>{<br>
>    printf("%s\n",p->data->string);<br>
>p=p->next;<br>
>}<br>
>
>return :<br>
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
>cstring ns = String("new varriable")<br>
>s->string = ns->string

you lost last data, this causes memory leak. s->string and ns->string, point the same address

4 - if you want to delete
>free(s->string)

than
>free(s)

5- and never forget that these are a pointer

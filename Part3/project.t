function real foo2(real x; int z)
{
	var real a;
	var int y;
	a=11.1;

	for(y=1; y<a ; y++) {
		if(y==1){
			a= a + 1.1; 
		}
		else{
			a= a + 2.1;
		}
	}

	return a;	
}

function void main()
{
	var int b;
	b=foo2(3.14, 12);
	return;
}



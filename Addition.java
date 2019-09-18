import java.io.*;
class Addition
{
public static void main(String[] args)
{
	try{
		
int a,b,c;
DataInputStream obj=new DataInputStream(System.in);
System.out.println("enter the numbers");
a=Integer.parseInt(obj.readLine());
b=Integer.parseInt(obj.readLine());
//a=10;
//b=30;
c=a+b;
System.out.println("addition"+c);
	}
	catch(Exception e)
	{
		System.out.print("caught");
	}
}
}
# include <stdio.h>
# include <math.h>


int main(void)
{
	int choice = 0;
	float num1 = 0;
	float num2 = 0;

	int a = 0;	
	int b = 0;
	int c = 0;
	int d = 0;

	int e = 0;
	int f = 0;
	int g = 0;
	int h = 0;
	
	int I = 0;
	int J = 0;
	int K = 0;
	int L = 0;

	float mat1 = 0;
	float mat2 = 0;
	float mat3 = 0;
	float mat4 = 0;

	int det = 0;
	float result = 0;
	
	float period = 0;
	float gravitationalConstant = 0;
	float massEarth = 0;
	double radiusCubed = 0;
	float metersToMiles = 0.000621371;
	float pi = 3.141592653;
	float radiusMeters = 0;
	float radiusMiles = 0;
	

	printf("\"1\" Addition\n");
	printf("\"2\" Subtraction\n");
	printf("\"3\" Multiplication\n");
	printf("\"4\" Division\n");
	printf("\"5\" Matrix Addition\n");
	printf("\"6\" Matrix Inverse\n");
	printf("\"7\" Matrix Transpose\n");
	printf("\"8\" Orbiting Radius\n");
	printf("Enter the number of the operation? ");
	scanf("%d", &choice);

	switch(choice) 
	{
		// Addition
		case 1: 
			printf("Enter two numbers for the addition? ");  
			scanf("%f %f", &num1, &num2);
			
			result = num1 + num2;

			printf("Answer is: %.2f", result);
			printf("\n");		
			break;			

		// Subtraction		
		case 2:
			printf("Enter two numbers for the subtraction? ");
			scanf("%f %f", &num1, &num2);

			result = num1 - num2;

			printf("Answer is: %.2f", result);
			printf("\n");		
			break;

		// Multiplication		
		case 3:
			printf("Enter two numbers for the multiplication? ");
			scanf("%f %f", &num1, &num2);

			result = num1 * num2;

			printf("Answer is: %.2f", result);
			printf("\n");		
			break;

		// Division		
		case 4:
			printf("Enter two numbers for the division? ");
			scanf("%f %f", &num1, &num2);

			result = num1 / num2;

			if(num2 == 0)
			{
				printf("Answer is : Error in division\n");
			}
			else // num2 != 0
			{
				printf("Answer is: %.2f", result);
				printf("\n");		
			}
		
			break;
		// Matrix Addition
		case 5:
			printf("Enter eight numbers for the matrix addition, 4 numbers in each row? ");
			scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
			
			I = a + e;
			J = b + f;
			K = c + g;
			L = d + h; 
			
			printf("Answer is : %d %d %d %d", I, J, K, L);
			printf("\n");
			break;

		// Inverse of 2x2 Matrix
		case 6:
			printf("Enter four numbers for the matrix inverse? ");
			scanf("%d %d %d %d", &a, &b, &c, &d);
			
			det = a*d - b*c;
			
			mat1 = (float)d / det;
			mat2 = (float)b*-1 / det;
			mat3 = (float)c*-1 / det;
			mat4 = (float)a / det;			
	
			printf("Answer is : %.2f %.2f %.2f %.2f", mat1, mat2, mat3, mat4);
			printf("\n");
			break;

		// Transpose of a 2×2 matrix
		case 7: 
			printf("Enter four numbers for the matrix inverse? ");
			scanf("%d %d %d %d", &a, &b, &c, &d);
			
			I = a;
			J = c;
			K = b;
			L = d;		
	
			printf("Answer is : %d %d %d %d", I, J, K, L);
			printf("\n");
			break;
		// Orbiting radius of a geosynchronous satellite
		case 8:
			printf("Enter T, G and m ? ");
			scanf("%f %f %f", &period, &gravitationalConstant, &massEarth);

			radiusCubed = (period * period * gravitationalConstant * massEarth) / (4 * pi * pi);

			radiusMeters = pow(radiusCubed, 1.0 / 3.0);

			radiusMiles = floor(radiusMeters * metersToMiles); 	

			printf("Answer is : %.0f", radiusMiles);
			printf("\n");
			break;

		default: 
			// do nothing
			break;
	}

	return 0;
}




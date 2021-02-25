/**
 * Esta función comprueba si el puntero dado es un número de tipo float.
 *
 * - Input:
 * 		- inputF (*char): input a comprobar.
 *
 * 	- Return:
 * 		- (int): valor booleano para indicar si el puntero contine un texto que puede convertirse en float.
 */

/**
 * This function checks whenever the char poiter contains a valid float number.
 * 
 * - Input:
 * 		- inputF (*char): input to check.
 * 
 * - Return:
 * 		- (int): boolean value representing the conclusion of this comprobation.
 */
int charPointsIsFloat(char *inputF) {
	// Si hemos detectado un signo decimal
	// If we have detected a decimal sign
	int decimalFlag = 0; 
	// Para cada caracter en el puntero
	do { // For each character on the pointer
		// Caracter a comprobar 
		// Character to check
		char p = *inputF; 

		// Si p es un signo decimal y no hemos detectado ninguno antes
		// If p is a decimal sign and no decimal sign detected yet
		if ((p == '.' || p == ',') && !decimalFlag) {
			decimalFlag = 1;
		}
		// Si p no es un número
		// if p is not a number
		else if(isdigit(p) == 0) {
			// no es un input válido
			// the input is not valid
			return 0;
		}
	// Repite esto con todos los caracteres del puntero
	// Repeat for each characted on the loop
	} while (*++inputF != '\0'); 

	return 1; // Si estamos aquí, es válido
}

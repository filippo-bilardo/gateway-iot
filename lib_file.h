//==========================================================================================
//
// Project:  lib_file
// Date:     25/02/19
// Author:   Filippo Bilardo
//
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
//  File function
// 
// Ver   Date       Comment
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// 1.0   25/02/19   Versione iniziale
// 
//==========================================================================================
//------------------------------------------------------------------------------------------
//=== Constants ============================================================================
//------------------------------------------------------------------------------------------
#define BUFFER_SIZE 1024

//------------------------------------------------------------------------------------------
//=== Function prototypes ==================================================================
//------------------------------------------------------------------------------------------
void replaceStringIfFindSubstring(char *oldString, const char *subString, const char *newString);
int main_test_replaceStringIfFindSubstring();
char *fileToString(char *filename);
void replaceAllString(char *buf, const char *old, const char *new);
void replaceAll(char *str, const char *oldWord, const char *newWord);

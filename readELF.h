/* 
* @Author: Xiaokang Yin
* @Date:   2017-05-21 22:03:36
* @Last Modified by:   Xiaokang Yin
* @Last Modified time: 2017-05-21 22:04:49
*/
#include <stdlib.h>
#include <stdio.h>

/** e_ident identification indexes */
#define EI_NIDENT 	16		//Size of e_ident[]
#define EI_MAG0     0		//File identification 	0x7f
#define EI_MAG1     1		//File identification	'E'
#define EI_MAG2     2		//File identification	'L'
#define EI_MAG3     3		//File identification	'F'
#define EI_CLASS    4		//file class
#define EI_DATA		5		//Data encoding
#define EI_VERSION	6		//File version
#define EI_PAD		7		//Start of padding bytes

/** EI_CLASS */
#define ELFCLASSNONE	0		//Invalid class
#define ELFCLASS32		1		//32-bit objects
#define ELFCLASS64		2		//64-bit objects

/** EI_DATA */
#define ELFDATANONE		0		//Invalid data encoding
#define ELFDATA2LSB		1		//Little endian, the high bit is in low address
#define ELFDATA2MSB 	2		//Big endian, the high bit is in high address

/** EI_VERSION */
#define EV_NONE		0		//Invalid version
#define EV_CURRENT	1		//Current version

/** Common types */
typedef unsigned char 	u_char;  		//Unsigned small integer
typedef unsigned int 	elf32_Addr		//Unsigned program address
typedef unsigned short	elf32_Half;		//Unsigned medium integer
typedef	unsigned int 	elf32_Off;		//Unsigned file offset
typedef signed int 		elf32_Sword;	//Signed large interger
typedef unsigned int 	elf32_Word;		//Unsigned large integer

typedef struct{
	u_char 			e_ident[EI_NIDENT];
	elf32_Half		e_type;
	elf32_Half		e_machine;
	elf32_Word 		e_version;
	elf32_Addr 		e_entry;
	elf32_Off		e_phoff;
	elf32_Off		e_shoff;
	elf32_Word 		e_flags;
	elf32_Half 		e_ehsize;
	elf32_Half		e_phentsize;
	elf32_Half		e_phnum;
	elf32_Half		e_shentsize;
	elf32_Half		e_shnuml
	elf32_Half		e_shstrndx;
}elf32_Ehdr;
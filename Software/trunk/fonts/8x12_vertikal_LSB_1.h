// table of the bits for the 8x12 character set
// each byte hold 8 bits of a row, the upper bit is 1, the bit for the 8th line is 128

#ifdef LCD_CYRILLIC                                      
 #define CHAR_COUNT 0xa0
#else
 /* ---------------------------------- */
 #if defined LANG_FRANCAIS 
  // Caracteres accentues francais
  #define a_grave       'a' /* e0 */
  #define a_circ        'a' /* e2 */
  #define a_elig        'a' /* e6 */
  #define c_cedil       'c' /* e7 */
  #define e_acute       'e' /* e9 */
  #define e_circ        'e' /* ea */
  #define e_grave       'e' /* e8 */
  #define e_uml         'e' /* eb */ 
  #define i_circ        'i' /* ee */ 
  #define i_uml         'i' /* ef */
  #define o_circ        'o' /* f4 */
  #define o_elig        'o' /* bd */
  #define u_grave       'u' /* f9 */
  #define u_circ        'u' /* fb */
  #define u_uml         'u' /* fc */
  #define y_uml         'y' /* ff */
  #define CHAR_COUNT 128
 /* ---------------------------------- */
 #elif defined LANG_CZECH || defined LANG_SLOVAK
  #define a_acute       'a' /* e1 */
  #define a_uml         'a' /* e4 */
  #define c_caron       'c' /* e8 */
  #define d_caron       'd' /* ef */
  #define e_acute       'e' /* e9 */
  #define e_caron       'e' /* ec */
  #define i_acute       'i' /* ed */
  #define l_acute       'l' /* e5 */
  #define l_caron       'l' /* b5 */
  #define n_caron       'n' /* f2 */
  #define o_acute       'o' /* f3 */
  #define o_uml         'o' /* f6 */
  #define o_circ        'o' /* f4 */
  #define r_acute       'r' /* e0 */
  #define r_caron       'r' /* f8 */
  #define s_caron       's' /* b9 */
  #define t_caron       't' /* bb */
  #define u_acute       'u' /* fa */
  #define u_uml         'u' /* fc */
  #define u_ring        'u' /* f9 */
  #define y_acute       'y' /* fd */
  #define z_caron       'z' /* b9 */
  #ifdef WITH_CAPITAL_SPECIALS
   #define A_acute       'A' /* c1 */
   #define A_uml         'A' /* c4 */
   #define C_caron       'C' /* c8 */
   #define D_caron       'D' /* cf */
   #define E_acute       'E' /* c9 */
   #define E_caron       'E' /* cc */
   #define I_acute       'I' /* cd */
   #define L_acute       'L' /* c5 */
   #define L_caron       'L' /* a5 */
   #define N_caron       'N' /* d2 */
   #define O_acute       'O' /* d3 */
   #define O_uml         'O' /* d6 */
   #define O_circ        'O' /* d4 */
   #define R_acute       'R' /* c0 */
   #define R_caron       'R' /* d8 */
   #define S_caron       'S' /* a9 */
   #define T_caron       'T' /* ab */
   #define U_acute       'U' /* da */
   #define U_uml         'U' /* dc */
   #define Y_acute       'Y' /* dd */
   #define Z_caron       'Z' /* ae */
   #define CHAR_COUNT   128 // 0x9b
  #else
   #define A_acute       a_acute
   #define A_uml         a_uml
   #define C_caron       c_caron
   #define D_caron       c_caron
   #define E_acute       e_acute
   #define E_caron       e_caron
   #define I_acute       i_acute
   #define L_acute       l_acute
   #define L_caron       l_caron
   #define N_caron       n_caron
   #define O_acute       o_acute
   #define O_uml         o_uml
   #define O_circ        o_circ
   #define R_acute       r_acute
   #define R_caron       r_caron
   #define S_caron       s_caron
   #define T_caron       t_caron
   #define U_acute       u_acute
   #define U_uml         u_uml
   #define Y_acute       y_acute
   #define Z_caron       z_caron
   #define CHAR_COUNT    128 // 0x86
  #endif
 /*--------------------------------------- */
 #elif defined LANG_SERBIAN || LANG_CROATIAN || LANG_SLOWENIAN || LANG_BOSNIAN
  #define c_acute       'c'  /* e6 */
  #define c_caron       'c'  /* e8 */
  #define d_eth         'd'  /* f0 */
  #define s_caron       's'  /* b9 */
  #define z_caron       'z'  /* be */
  #define C_acute       'C'  /* c6 */
  #define C_caron       'C'  /* c8 */
  #define D_eth         'D'  /* d0 */
  #define S_caron       'S'  /* a9 */
  #define Z_caron       'Z'  /* ae */
  #define CHAR_COUNT   128 // 0x7f + 1
 /* ---------------------------------- */
 #elif defined LANG_POLISH
  #define a_ogon        'a' /* b1  */
  #define c_acute       'c' /* e6  */
  #define e_ogon        'e' /* ea  */
  #define l_stroke      'l' /* b3  */
  #define n_acute       'n' /* f1  */
  #define o_acute       'o' /* f3  */
  #define s_acute       's' /* b6  */
  #define z_acute       'z' /* bc  */
  #define z_dot         'z' /* bf  */
  #define A_ogon        'A' /* a1  */
  #define C_acute       'C' /* c6  */
  #define E_ogon        'E' /* ca  */
  #define L_stroke      'L' /* a3  */
  #define N_acute       'N' /* d1  */
  #define O_acute       'O' /* d3  */
  #define S_acute       'S' /* a6  */
  #define Z_acute       'Z' /* ac  */
  #define Z_dot         'Z' /* ae  */
  #define CHAR_COUNT  128 // 0x82
 /* ---------------------------------- */
 #elif defined LANG_GERMAN || defined LANG_ALBANIAN
  #define a_uml         'a' /* e4    */
  #define c_cedil       'c' /* e7    */
  #define e_uml         'e' /* f6    */
  #define o_uml         'o' /* f6    */
  #define s_sharp       's' /* df    */
  #define u_uml         'u' /* fc    */
  #define A_uml         'A' /* c4    */
  #define C_cedil       'C' /* c7    */
  #define E_uml         'E' /* d6    */
  #define O_uml         'O' /* d6    */
  #define U_uml         'U' /* dc    */
  #define CHAR_COUNT 128
/* ---------------------------------- */
 #elif defined LANG_HUNGARIAN
  #define a_acute       'a' /* e1 */
  #define e_acute       'e' /* e9 */
  #define o_acute       'o' /* f3 */
  #define o_doubleAcute 'o' /* f5 */
  #define o_uml         'o' /* f6 */
  #define u_acute       'u' /* fa */
  #define u_doubleAcute 'u' /* fb */
  #define u_uml         'u' /* fc */
  #define A_acute       'A' /* c1 */
  #define E_acute       'E' /* c9 */
  #define O_acute       'O' /* d3 */
  #define O_doubleAcute 'O' /* d5 */
  #define O_uml         'O' /* d6 */
  #define U_acute       'U' /* da */
  #define U_doubleAcute 'U' /* db */
  #define U_uml         'U' /* dc */
  #define CHAR_COUNT  128 // 0x7f + 1
 /* ---------------------------------- */
  #elif defined LANG_ROMANIAN  || LANG_DANISH
 /* ----RO-------ISO-8859-2-------- */
  #define a_circ        'a' /* e2 */
  #define a_breve       'a' /* e3 */
  #define i_circ        'i' /* ee */
  #define s_cedil       's' /* ba */
  #define t_cedil       't' /* fe */
  #define A_circ        'A' /* c2 */
  #define A_breve       'A' /* c3 */
  #define I_circ        'I' /* ce */
  #define S_cedil       'S' /* aa */
  #define T_cedil       'T' /* de */
/* ----DK-------ISO-8859-15------- */
  #define a_ring        'a' /* e5 */
  #define a_elig        'a' /* e6 */
  #define o_slash       'o' /* f8 */
  #define A_ring        'A' /* c5 */
  #define A_elig        'A' /* c6 */
  #define O_slash       'O' /* d8 */
 #define CHAR_COUNT   128 // 0x7f + 1
 /* ---------------------------------- */
 #else
  #define CHAR_COUNT 128
 #endif
#endif

#define LastChar (CHAR_COUNT - 1)
                               
#if defined(MAIN_C)
const unsigned char PROGMEM font[CHAR_COUNT][(FONT_WIDTH * ((FONT_HEIGHT + 7)/8))]={
{0x60,0xF8,0x98,0x98,0x98,0x98,0xF8,0x60, 0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00},  /* 0x00 Resistor3  */                
{0x60,0xFE,0xFC,0xF8,0xF0,0x60,0xFE,0x60, 0x00,0x07,0x03,0x01,0x00,0x00,0x07,0x00},  /* 0x01 Diode1  */                    
{0x60,0xFE,0x60,0xF0,0xF8,0xFC,0xFE,0x60, 0x00,0x07,0x00,0x00,0x01,0x03,0x07,0x00},  /* 0x02 Diode2  */                  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x03 ' ' */                         
{0x60,0xFE,0xFE,0x00,0x00,0xFE,0xFE,0x60, 0x00,0x07,0x07,0x00,0x00,0x07,0x07,0x00},  /* 0x04 Capacitor  */               
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x05 ' ' */                         
{0x60,0xFC,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C, 0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03},  /* 0x06 Resistor2  */               
{0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0xFC,0x60, 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00},  /* 0x07 Resistor1  */               
{0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x08  Line1 */                         
{0x60,0x60,0xE0,0x00,0x00,0xC0,0xC0,0x00, 0x00,0x00,0x01,0x03,0x03,0x01,0x01,0x03},  /* 0x09  Inductor1 */                         
{0x00,0xC0,0xC0,0x00,0x00,0xE0,0x60,0x60, 0x03,0x01,0x01,0x03,0x03,0x01,0x00,0x00},  /* 0x0a  Inductor2 */                         
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x0b  ' ' */                         
{0x00,0xFE,0xFF,0x01,0x11,0xFF,0xEE,0x00, 0x07,0x03,0x00,0x00,0x01,0x01,0x00,0x00},  /* 0x0c Beta  */                         
{0x38,0x7C,0xC6,0x06,0xC6,0x7C,0x38,0x00, 0x03,0x03,0x03,0x00,0x03,0x03,0x03,0x00},  /* 0x0d Omega  */                   
{0x00,0xFC,0xFC,0x00,0x00,0xF0,0xF0,0x00, 0x0E,0x07,0x01,0x02,0x01,0x03,0x03,0x00},  /* 0x0e mu  */                      
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x0f  */                         
	                                  

#if defined LANG_FRANCAIS 
{0x00,0xC0,0xEC,0x2A,0x4A,0xFC,0xF0,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x03,0x00},  /* 0x10 Fr_a_grave */                      
{0x00,0xC0,0xEC,0x2B,0x4B,0xFC,0xF0,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x03,0x00},  /* 0x11 Fr_a_circ */                      
{0x00,0xF0,0xFC,0x4A,0x4B,0x79,0x70,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x12 Fr_e_aigu */                      
{0x00,0xF0,0xFC,0x4B,0x4B,0x7C,0x70,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x13 Fr_e_circ */                      
{0x00,0xF0,0xF9,0x4B,0x4A,0x7C,0x70,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x14 Fr_e_grave */                      
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x15  */                         
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x16  */                         
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x17  */                         
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x18  */                         
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x19  */                         
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x1a  */                         
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x1b  */                         
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x1c  */                         
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x1d  */                         
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x1e  */                         
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x1f  */                         

 #elif defined LANG_CZECH || LANG_SLOVAK
{0x00,0xC0,0xE8,0x2A,0x4B,0xF9,0xF0,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x03,0x00},  /* 0x10 Cz_a */                    
{0x00,0xF1,0xFB,0x0A,0x0B,0x19,0x10,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x11 Cz_c */                    
{0x00,0xF0,0xF8,0x08,0x10,0xFF,0x04,0x03, 0x00,0x01,0x03,0x02,0x02,0x03,0x00,0x00},  /* 0x12 Cz_d*/               
{0x00,0xF0,0xF8,0x4A,0x4B,0x79,0x70,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x13 Cz_e */                    
{0x00,0xF1,0xFB,0x4A,0x4B,0x79,0x70,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x14 ,Cz_ee */                   
{0x00,0x00,0x08,0xFA,0xFB,0x01,0x00,0x00, 0x00,0x00,0x02,0x03,0x03,0x02,0x00,0x00},  /* 0x15 Cz_i */                    
{0x00,0xF9,0xFB,0x32,0x1B,0xF9,0xF0,0x00, 0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00},  /* 0x16 Cz_n */                 
{0x00,0xF0,0xF8,0x0A,0x0B,0xF9,0xF0,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x17 Cz_o */                         
{0x00,0xF9,0xFB,0x32,0x1B,0x39,0x30,0x00, 0x00,0x03,0x03,0x00,0x00,0x00,0x00,0x00},  /* 0x18 Cz_r */                         
{0x00,0x31,0x7B,0x4A,0x4B,0xD9,0x90,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x19 Cz_s */                         
{0x08,0x08,0xFE,0xFF,0x08,0x08,0x03,0x01, 0x00,0x00,0x01,0x03,0x02,0x03,0x01,0x00},  /* 0x1a Cz_t */                         
{0x00,0xF8,0xF8,0x02,0x03,0xF9,0xF8,0x00, 0x00,0x01,0x03,0x02,0x01,0x03,0x03,0x00},  /* 0x1b Cz_u */                         
{0x00,0xF8,0xFA,0x05,0x05,0xFA,0xF8,0x00, 0x00,0x01,0x03,0x02,0x01,0x03,0x03,0x00},  /* 0x1c Cz_uu */                         
{0x00,0x78,0xF8,0x82,0x43,0xF9,0xF8,0x00, 0x00,0x02,0x06,0x04,0x04,0x07,0x03,0x00},  /* 0x1d Cz_y */                         
{0x00,0x19,0x9B,0xCA,0x6B,0x39,0x18,0x00, 0x00,0x03,0x03,0x02,0x02,0x03,0x03,0x00},  /* 0x1e Cz_z */                         
{0x00,0x06,0xC6,0xF3,0x3A,0x0F,0x02,0x00, 0x00,0x03,0x03,0x02,0x02,0x03,0x03,0x00},  /* 0x1f  */                         
// #elif defined LANG_SERBIAN || LANG_CROATIAN || LANG_SLOWENIAN || LANG_BOSNIAN 
// #elif defined LANG_POLISH
// #elif defined LANG_GERMAN || LANG_ALBANIAN
// #elif defined LANG_HUNGARIAN
// #elif defined LANG_ROMANIAN || LANG_DANISH
 #else	
{0x00,0x38,0x78,0x40,0x40,0xF8,0xF8,0x00, 0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x00},  /* 0x10 Cyr_tsch */                     
{0xF8,0xF8,0x00,0xF8,0x00,0xF8,0xF8,0x00, 0x03,0x03,0x02,0x03,0x02,0x03,0x03,0x00},  /* 0x11 Cyr_sch */                      
{0x18,0xF8,0xF8,0x40,0x20,0xE0,0xC0,0x00, 0x00,0x03,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x12 Cyr_hh */                       
{0xF8,0xF8,0x20,0xC0,0x00,0xF8,0xF8,0x00, 0x03,0x03,0x02,0x01,0x00,0x03,0x03,0x00},  /* 0x13 Cyr_y */                        
{0x00,0xF8,0xF8,0x40,0x20,0xE0,0xC0,0x00, 0x00,0x03,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x14 Cyr_ww */                       
{0x00,0x10,0x08,0x48,0x48,0xF8,0xF0,0x00, 0x00,0x01,0x02,0x02,0x02,0x03,0x01,0x00},  /* 0x15 Cyr_e */                        
{0xF8,0xF8,0x40,0xF0,0x08,0xF8,0xF0,0x00, 0x03,0x03,0x00,0x01,0x02,0x03,0x01,0x00},  /* 0x16 Cyr_ju */                       
{0x00,0xB0,0xF8,0x48,0x48,0xF8,0xF8,0x00, 0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00},  /* 0x17 Cyr_ja */                       
{0x00,0xFC,0xFE,0x03,0x01,0xFF,0xFF,0x00, 0x06,0x07,0x03,0x02,0x02,0x03,0x07,0x06},  /* 0x18 Cry_D */                    
{0x00,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0x00, 0x00,0x03,0x03,0x02,0x02,0x03,0x07,0x06},  /* 0x19 Cyr_C */                    
{0xFF,0xFF,0x00,0xFF,0x00,0xFF,0xFF,0x00, 0x03,0x03,0x02,0x03,0x02,0x03,0x07,0x07},  /* 0x1a Cyr_Schtsch*/               
{0x00,0xC0,0xE0,0x30,0x18,0xF8,0xF8,0x00, 0x06,0x07,0x03,0x02,0x02,0x03,0x07,0x06},  /* 0x1b Cyr_d */                    
{0xF0,0xF8,0x08,0xFE,0x08,0xF8,0xF0,0x00, 0x01,0x03,0x02,0x0F,0x02,0x03,0x01,0x00},  /* 0x1c Cyr_f */                   
{0x00,0xF8,0xF8,0x00,0x00,0xF8,0xF8,0x00, 0x00,0x03,0x03,0x02,0x02,0x03,0x07,0x07},  /* 0x1d Cyr_c */                    
{0xF8,0xF8,0x00,0xF8,0x00,0xF8,0xF8,0x00, 0x03,0x03,0x02,0x03,0x02,0x03,0x07,0x07},  /* 0x1e Cyr_scht */                 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x1f  */                         
 #endif     
                                
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x20 ' ' */                      
{0x00,0x00,0x1E,0xFF,0xFF,0x1E,0x00,0x00, 0x00,0x00,0x00,0x0D,0x0D,0x00,0x00,0x00},  /* 0x21 '!' */                      
{0x00,0x08,0x0F,0x07,0x08,0x0F,0x07,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x22 '"' */                      
{0x00,0x84,0xFF,0x84,0x84,0xFF,0x84,0x00, 0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00},  /* 0x23 '#' */                      
{0x00,0x1C,0xFF,0x22,0x42,0xFF,0x84,0x00, 0x00,0x02,0x0F,0x04,0x04,0x0F,0x03,0x00},  /* 0x24 '$' */                      
{0x00,0x1E,0x92,0xEE,0x30,0x9C,0x86,0x00, 0x00,0x06,0x03,0x00,0x07,0x04,0x07,0x00},  /* 0x25 '%' */                      
{0xC0,0x6E,0x3B,0x31,0x7B,0xCE,0x60,0x00, 0x01,0x03,0x02,0x02,0x03,0x01,0x03,0x00},  /* 0x26 '&' */                      
{0x00,0x00,0x08,0x0F,0x07,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x27 ''' */                      
{0x00,0xF8,0xFC,0x06,0x03,0x01,0x00,0x00, 0x00,0x01,0x03,0x06,0x0C,0x08,0x00,0x00},  /* 0x28 '(' */                      
{0x00,0x00,0x01,0x03,0x06,0xFC,0xF8,0x00, 0x00,0x00,0x08,0x0C,0x06,0x03,0x01,0x00},  /* 0x29 ')' */                      
{0x00,0xB4,0xFC,0x78,0x78,0xFC,0xB4,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x2a '*' */                      
{0x00,0x30,0x30,0xFE,0xFE,0x30,0x30,0x00, 0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00},  /* 0x2b '+' */                      
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x08,0x0F,0x07,0x00,0x00,0x00},  /* 0x2c ',' */                      
{0x00,0x60,0x60,0x60,0x60,0x60,0x60,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x2d '-' */                      
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x07,0x07,0x00,0x00,0x00},  /* 0x2e '.' */                      
{0x00,0x80,0xC0,0x70,0x38,0x0C,0x07,0x03, 0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x2f '/' */                      
{0x00,0xFE,0xFF,0x01,0x01,0xFF,0xFE,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x30 '0' */                      
{0x00,0x0C,0x06,0xFF,0xFF,0x00,0x00,0x00, 0x00,0x02,0x02,0x03,0x03,0x02,0x02,0x00},  /* 0x31 '1' */                      
{0x00,0x06,0x87,0xC1,0x61,0x3F,0x1E,0x00, 0x00,0x03,0x03,0x02,0x02,0x03,0x03,0x00},  /* 0x32 '2' */                      
{0x00,0x03,0x01,0x09,0x1D,0xF7,0xE3,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x33 '3' */                      
{0x70,0x7F,0x4F,0x40,0xFC,0xFC,0x40,0x00, 0x00,0x00,0x00,0x02,0x03,0x03,0x02,0x00},  /* 0x34 '4' */                      
{0x00,0x1F,0x1F,0x09,0x09,0xF9,0xF1,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x35 '5' */                      
{0x00,0xFC,0xFE,0x13,0x11,0xF1,0xE0,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x36 '6' */                      
{0x00,0x03,0x03,0xE1,0xF1,0x1F,0x0F,0x00, 0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00},  /* 0x37 '7' */                      
{0x00,0xEE,0xFF,0x11,0x11,0xFF,0xEE,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x38 '8' */                      
{0x00,0x1E,0x3F,0x21,0x21,0xFF,0xFE,0x00, 0x00,0x00,0x02,0x02,0x03,0x01,0x00,0x00},  /* 0x39 '9' */                      
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00, 0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00},  /* 0x3a ':' */                      
{0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00, 0x00,0x00,0x04,0x07,0x03,0x00,0x00,0x00},  /* 0x3b ';' */                      
{0x00,0x60,0xF0,0x98,0x0C,0x06,0x02,0x00, 0x00,0x00,0x00,0x01,0x03,0x06,0x04,0x00},  /* 0x3c '<' */                      
{0x00,0x98,0x98,0x98,0x98,0x98,0x98,0x00, 0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00},  /* 0x3d '=' */                      
{0x00,0x02,0x06,0x0C,0x98,0xF0,0x60,0x00, 0x00,0x04,0x06,0x03,0x01,0x00,0x00,0x00},  /* 0x3e '>' */                      
{0x00,0x06,0x07,0xC1,0xE1,0x3F,0x1E,0x00, 0x00,0x00,0x00,0x06,0x06,0x00,0x00,0x00},  /* 0x3f '?' */                      
{0x00,0xFE,0xFF,0x01,0x79,0x4B,0x7E,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x40 '@' */                      
{0x00,0xFC,0xFE,0x23,0x23,0xFE,0xFC,0x00, 0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00},  /* 0x41 'A' */                      
{0x00,0xFF,0xFF,0x11,0x11,0xFF,0xEE,0x00, 0x00,0x03,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x42 'B' */                      
{0x00,0xFE,0xFF,0x01,0x01,0x03,0x02,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x43 'C' */                      
{0x00,0xFF,0xFF,0x01,0x01,0xFF,0xFE,0x00, 0x00,0x03,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x44 'D' */                      
{0x00,0xFF,0xFF,0x11,0x11,0x13,0x03,0x00, 0x00,0x03,0x03,0x02,0x02,0x03,0x03,0x00},  /* 0x45 'E' */                      
{0x00,0xFF,0xFF,0x11,0x11,0x13,0x03,0x00, 0x00,0x03,0x03,0x00,0x00,0x00,0x00,0x00},  /* 0x46 'F' */                      
{0x00,0xFE,0xFF,0x01,0x41,0xC3,0xC2,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x03,0x00},  /* 0x47 'G' */                      
{0x00,0xFF,0xFF,0x10,0x10,0xFF,0xFF,0x00, 0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00},  /* 0x48 'H' */                      
{0x00,0x00,0x01,0xFF,0xFF,0x01,0x00,0x00, 0x00,0x00,0x02,0x03,0x03,0x02,0x00,0x00},  /* 0x49 'I' */                      
{0x00,0x83,0x83,0x01,0x01,0xFF,0xFF,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x4a 'J' */                      
{0x00,0xFF,0xFF,0x10,0x38,0xEF,0xC7,0x00, 0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00},  /* 0x4b 'K' */                      
{0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00, 0x00,0x03,0x03,0x02,0x02,0x03,0x03,0x00},  /* 0x4c 'L' */                      
{0xFF,0xFE,0x1C,0x78,0x1C,0xFE,0xFF,0x00, 0x03,0x03,0x00,0x00,0x00,0x03,0x03,0x00},  /* 0x4d 'M' */                      
{0x00,0xFF,0xFF,0x1C,0xE0,0xFF,0xFF,0x00, 0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00},  /* 0x4e 'N' */                      
{0x00,0xFE,0xFF,0x01,0x01,0xFF,0xFE,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x4f 'O' */                      
{0x00,0xFF,0xFF,0x21,0x21,0x3F,0x1E,0x00, 0x00,0x03,0x03,0x00,0x00,0x00,0x00,0x00},  /* 0x50 'P' */                      
{0x00,0xFE,0xFF,0x01,0xC1,0xBF,0xFE,0x00, 0x00,0x01,0x03,0x03,0x03,0x01,0x03,0x00},  /* 0x51 'Q' */                      
{0x00,0xFF,0xFF,0x21,0x71,0xDF,0x8E,0x00, 0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00},  /* 0x52 'R' */                      
{0x00,0x0E,0x1F,0x31,0x31,0xE3,0xC2,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x53 'S' */                      
{0x00,0x03,0x01,0xFF,0xFF,0x01,0x03,0x00, 0x00,0x00,0x02,0x03,0x03,0x02,0x00,0x00},  /* 0x54 'T' */                      
{0x00,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x55 'U' */                      
{0x00,0x3F,0xFF,0xC0,0xC0,0xFF,0x3F,0x00, 0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00},  /* 0x56 'V' */                      
{0x7F,0xFF,0xC0,0x78,0xC0,0xFF,0x7F,0x00, 0x00,0x03,0x03,0x00,0x03,0x03,0x00,0x00},  /* 0x57 'W' */                      
{0x00,0x87,0xCF,0x78,0x78,0xCF,0x87,0x00, 0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00},  /* 0x58 'X' */                      
{0x00,0x0F,0x1F,0xF0,0xF0,0x1F,0x0F,0x00, 0x00,0x00,0x02,0x03,0x03,0x02,0x00,0x00},  /* 0x59 'Y' */                      
{0x00,0x03,0xC3,0xF1,0x3D,0x0F,0x03,0x00, 0x00,0x03,0x03,0x02,0x02,0x03,0x03,0x00},  /* 0x5a 'Z' */                      
{0x00,0x00,0xFF,0xFF,0x01,0x01,0x00,0x00, 0x00,0x00,0x07,0x07,0x04,0x04,0x00,0x00},  /* 0x5b '[' */                      
{0x03,0x07,0x0C,0x38,0x70,0xC0,0x80,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03},  /* 0x5c '\' */                      
{0x00,0x00,0x01,0x01,0xFF,0xFF,0x00,0x00, 0x00,0x00,0x04,0x04,0x07,0x07,0x00,0x00},  /* 0x5d ']' */                      
{0x08,0x0C,0x06,0x03,0x06,0x0C,0x08,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x5e '^' */                      
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04},  /* 0x5f '_' */                      
{0x00,0x00,0x00,0x07,0x0F,0x08,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x60 '`' */                      
{0x00,0xC0,0xE8,0x28,0x48,0xF8,0xF0,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x03,0x00},  /* 0x61 'a' */                      
{0x00,0xFF,0xFF,0x10,0x08,0xF8,0xF0,0x00, 0x00,0x03,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x62 'b' */                      
{0x00,0xF0,0xF8,0x08,0x08,0x18,0x10,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x63 'c' */                      
{0x00,0xF0,0xF8,0x08,0x10,0xFF,0xFF,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x03,0x00},  /* 0x64 'd' */                      
{0x00,0xF0,0xF8,0x48,0x48,0x78,0x70,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x65 'e' */                      
{0x00,0x08,0xFE,0xFF,0x09,0x03,0x02,0x00, 0x00,0x02,0x03,0x03,0x02,0x00,0x00,0x00},  /* 0x66 'f' */                      
{0x00,0x70,0xF8,0x88,0x48,0xF8,0xF8,0x00, 0x00,0x02,0x06,0x04,0x04,0x07,0x03,0x00},  /* 0x67 'g' */                      
{0x00,0xFF,0xFF,0x10,0x08,0xF8,0xF0,0x00, 0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00},  /* 0x68 'h' */                      
{0x00,0x00,0x08,0xFB,0xFB,0x00,0x00,0x00, 0x00,0x00,0x02,0x03,0x03,0x02,0x00,0x00},  /* 0x69 'i' */                      
{0x00,0x00,0x00,0x00,0x08,0xFB,0xFB,0x00, 0x00,0x02,0x06,0x04,0x04,0x07,0x03,0x00},  /* 0x6a 'j' */                      
{0x00,0xFF,0xFF,0x40,0xE0,0xB8,0x18,0x00, 0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00},  /* 0x6b 'k' */                      
{0x00,0x00,0x01,0xFF,0xFF,0x00,0x00,0x00, 0x00,0x00,0x02,0x03,0x03,0x02,0x00,0x00},  /* 0x6c 'l' */                      
{0xF8,0xF0,0x18,0xF0,0x18,0xF8,0xF0,0x00, 0x03,0x03,0x00,0x01,0x00,0x03,0x03,0x00},  /* 0x6d 'm' */                      
{0x00,0xF8,0xF8,0x30,0x18,0xF8,0xF0,0x00, 0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00},  /* 0x6e 'n' */                      
{0x00,0xF0,0xF8,0x08,0x08,0xF8,0xF0,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x6f 'o' */                      
{0x00,0xF8,0xF8,0x88,0x08,0xF8,0xF0,0x00, 0x00,0x07,0x07,0x00,0x01,0x01,0x00,0x00},  /* 0x70 'p' */                      
{0x00,0xF0,0xF8,0x08,0x88,0xF8,0xF8,0x00, 0x00,0x00,0x01,0x01,0x00,0x07,0x07,0x00},  /* 0x71 'q' */                      
{0x00,0xF8,0xF8,0x30,0x18,0x38,0x30,0x00, 0x00,0x03,0x03,0x00,0x00,0x00,0x00,0x00},  /* 0x72 'r' */                      
{0x00,0x30,0x78,0x48,0x48,0xD8,0x90,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x73 's' */                      
{0x08,0x08,0xFE,0xFF,0x08,0x08,0x00,0x00, 0x00,0x00,0x01,0x03,0x02,0x03,0x01,0x00},  /* 0x74 't' */                      
{0x00,0xF8,0xF8,0x00,0x00,0xF8,0xF8,0x00, 0x00,0x01,0x03,0x02,0x01,0x03,0x03,0x00},  /* 0x75 'u' */                      
{0x00,0x38,0xF8,0xC0,0xC0,0xF8,0x38,0x00, 0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00},  /* 0x76 'v' */                      
{0xF8,0xF8,0x80,0xF0,0x80,0xF8,0xF8,0x00, 0x00,0x03,0x03,0x00,0x03,0x03,0x00,0x00},  /* 0x77 'w' */                      
{0x00,0x98,0xF8,0x60,0x60,0xF8,0x98,0x00, 0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00},  /* 0x78 'x' */                      
{0x00,0x78,0xF8,0x80,0x40,0xF8,0xF8,0x00, 0x00,0x02,0x06,0x04,0x04,0x07,0x03,0x00},  /* 0x79 'y' */                      
{0x00,0x18,0x98,0xC8,0x68,0x38,0x18,0x00, 0x00,0x03,0x03,0x02,0x02,0x03,0x03,0x00},  /* 0x7a 'z' */                      
{0x00,0x60,0x60,0x9E,0x9F,0x01,0x01,0x00, 0x00,0x00,0x00,0x07,0x0F,0x08,0x08,0x00},  /* 0x7b '{' */                      
{0x00,0x00,0x00,0x9F,0x9F,0x00,0x00,0x00, 0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00},  /* 0x7c '|' */                      
{0x00,0x01,0x01,0x9F,0x9E,0x60,0x60,0x00, 0x00,0x08,0x08,0x0F,0x07,0x00,0x00,0x00},  /* 0x7d '}' */                      
{0x00,0x04,0x06,0x02,0x06,0x04,0x06,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x7e '~' */                      
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x7f  */                         
 #if defined LANG_CZECH || defined LANG_SLOVAK
 #elif defined LANG_POLISH 
 #elif defined LCD_CYRILLIC                                                              
{0x00,0xFF,0xFF,0x09,0x09,0xFB,0xF3,0x00, 0x00,0x03,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x80 Cyr_B  */                       
{0x00,0xFF,0xFF,0x01,0x01,0x03,0x03,0x00, 0x00,0x03,0x03,0x00,0x00,0x00,0x00,0x00},  /* 0x81 Cyr_G  */                       
{0x00,0xFD,0xFD,0x24,0x24,0x25,0x0D,0x00, 0x00,0x03,0x03,0x02,0x02,0x02,0x03,0x00},  /* 0x82 Cyr_Jo  */                      
{0xC7,0xEF,0x38,0xFF,0x38,0xEF,0xC7,0x00, 0x03,0x03,0x00,0x03,0x00,0x03,0x03,0x00},  /* 0x83 Cyr_Zsch */                     
{0x00,0x02,0x13,0x11,0x11,0xFF,0xEE,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x84 Cyr_Z */                        
{0x00,0xFF,0xFF,0xE0,0x1C,0xFF,0xFF,0x00, 0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00},  /* 0x85 Cyr_I */                        
{0x00,0xFC,0xFC,0xC2,0x3B,0xFD,0xFC,0x00, 0x00,0x03,0x03,0x01,0x00,0x03,0x03,0x00},  /* 0x86 Cyr_J  */                       
{0x00,0xF8,0xFC,0x06,0x03,0xFF,0xFF,0x00, 0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00},  /* 0x87 Cyr_L  */                       
{0x00,0xFF,0xFF,0x01,0x01,0xFF,0xFF,0x00, 0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00},  /* 0x88 Cyr_P  */                       
{0x00,0x1F,0x3F,0x20,0x20,0xFF,0xFF,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x89 Cyr_U  */                       
{0xFC,0xFE,0x02,0xFF,0x02,0xFE,0xFC,0x00, 0x00,0x01,0x01,0x07,0x01,0x01,0x00,0x00},  /* 0x8a Cyr_F  */                       
{0x00,0x1F,0x3F,0x20,0x20,0xFF,0xFF,0x00, 0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x00},  /* 0x8b Cyr_Tsch  */                    
{0xFF,0xFF,0x00,0xFF,0x00,0xFF,0xFF,0x00, 0x03,0x03,0x02,0x03,0x02,0x03,0x03,0x00},  /* 0x8c Cyr_Sch  */                     
{0x07,0xFF,0xFF,0x20,0x10,0xF0,0xE0,0x00, 0x00,0x03,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x8d Cyr_HH */                       
{0xFF,0xFF,0x10,0xE0,0x00,0xFF,0xFF,0x00, 0x03,0x03,0x02,0x01,0x00,0x03,0x03,0x00},  /* 0x8e Cyr_Y */                        
{0x00,0x02,0x13,0x11,0x11,0xFF,0xFE,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x8f Cyr_E */                        
{0xFF,0xFF,0x18,0xFE,0x01,0xFF,0xFE,0x00, 0x03,0x03,0x00,0x01,0x02,0x03,0x01,0x00},  /* 0x90 Cyr_Ju */                       
{0x00,0x8E,0xDF,0x71,0x21,0xFF,0xFF,0x00, 0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00},  /* 0x91 Cyr_Ja */                       
{0x00,0xF8,0xFC,0x26,0x12,0xF3,0xE1,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x92 Cyr_b */                        
{0x00,0xF8,0xF8,0x48,0x48,0xF8,0xB0,0x00, 0x00,0x03,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x93 Cyr_v */                        
{0x00,0xF8,0xF8,0x08,0x08,0x18,0x18,0x00, 0x00,0x03,0x03,0x00,0x00,0x00,0x00,0x00},  /* 0x94 Cyr_g */                        
{0x00,0xF2,0xFA,0x48,0x48,0x7A,0x72,0x00, 0x00,0x01,0x03,0x02,0x02,0x02,0x01,0x00},  /* 0x95 Cyr_jo */                       
{0x98,0xF8,0x60,0xF8,0x60,0xF8,0x98,0x00, 0x03,0x03,0x00,0x03,0x00,0x03,0x03,0x00},  /* 0x96 Cyr_zsch */                     
{0x00,0x10,0x18,0x48,0x48,0xF8,0xB0,0x00, 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},  /* 0x97 Cyr_z */                        
{0x00,0xF8,0xF8,0xC0,0x70,0xF8,0xF8,0x00, 0x00,0x03,0x03,0x01,0x00,0x03,0x03,0x00},  /* 0x98 Cyr_i */                        
{0x00,0xF8,0xF8,0xC3,0x71,0xF8,0xF8,0x00, 0x00,0x03,0x03,0x01,0x00,0x03,0x03,0x00},  /* 0x99 Cyr_j */                        
{0x00,0xF8,0xF8,0x40,0xE0,0xB8,0x18,0x00, 0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00},  /* 0x9a Cyr_k */                        
{0x00,0xC0,0xE0,0x30,0x18,0xF8,0xF8,0x00, 0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00},  /* 0x9b Cyr_l */                        
{0xF8,0xF0,0x60,0xC0,0x60,0xF0,0xF8,0x00, 0x03,0x03,0x00,0x01,0x00,0x03,0x03,0x00},  /* 0x9c Cyr_m */                        
{0x00,0xF8,0xF8,0x40,0x40,0xF8,0xF8,0x00, 0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00},  /* 0x9d Cyr_n */                        
{0x00,0xF8,0xF8,0x08,0x08,0xF8,0xF8,0x00, 0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00},  /* 0x9e Cyr_p */                        
{0x00,0x08,0x08,0xF8,0xF8,0x08,0x08,0x00, 0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00},  /* 0x9f Cyr_t */                        
	                                  
 #endif                                    
};
#else
 #ifndef __ASSEMBLER__
extern const unsigned char PROGMEM font[CHAR_COUNT][(FONT_WIDTH * ((FONT_HEIGHT + 7)/8))];
 #endif                                    
#endif                                    

 extern void sendMessage(uint8_t *PayLoad, uint8_t Size); 
extern uint16_t numMessages(void); 
extern uint8_t getMessage(uint16_t msgIndex, uint8_t *printStr); 
/* 
enum 
{ 
    
typeACK  = 0x00, 
    
    
typeTX  = 0x01, 
typeRX  = 0x02, 
     typeCMD = 0x03, 
 }; 
 */ 
13. #define PACKET_LENGTH 32 
14. #define HEADER_LENGTH 9 
15. #define SMS_LENGTH    
(PACKET_LENGTH - HEADER_LENGTH)

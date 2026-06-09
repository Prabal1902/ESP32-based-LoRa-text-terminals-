 // #define DEBUG 
//#ifdef DEBUG 
//#define PRINTLN(fmt, ...) 
//#define PRINT(fmt, ...) 
//#else 
//#define PRINTLN(fmt, ...)  Serial.println(fmt, ##__VA_ARGS__) 
//#define PRINT(fmt, ...)   Serial.print(fmt, ##__VA_ARGS__) 
//#endif 
//#define DEBUG   
 //#ifdef DEBUG 
   #define PRINT(fmt, ...)    Serial.print(fmt, ##__VA_ARGS__) 
 //  #define PRINTLN(fmt, ...)  Serial.println(fmt, ##__VA_ARGS__) 
 //#else 
 //  #define PRINT(fmt, ...) 
 //  #define PRINTLN(fmt, ...) 
 //#endif 
  
 #ifndef DEBUG_H 
 #define DEBUG_H 
 #define DEBUG   
 #ifdef DEBUG 
   #define PRINT(fmt, ...)    Serial.print(fmt, ##__VA_ARGS__) 
   #define PRINTLN(fmt, ...)  Serial.println(fmt, ##__VA_ARGS__) 
 #else 
   #define PRINT(fmt, ...) 
   #define PRINTLN(fmt, ...) 
 #endif 
 #ifndef BUILTIN_LED 
   #ifdef ESP32 
     #define BUILTIN_LED 2   // ESP32 onboard LED 
   #else 
     #define BUILTIN_LED 13  // Default for Arduino boards 
   #endif 
 #endif 
 #endif // DEBUG_H

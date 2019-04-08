#define PowerPort PORTX
#define InputPort PINY
#define start_pp  X
#define stop_pp   Y
#define input_p_start   Z
#define input_p_stop    P
//Do pin port configuration !

#include<util/delay.h>


unsigned char char_set[]={'A','G','M','S','Y','B','H','N','T','Z','C','I','O','U','D','J','P','V','E','K','Q','W','F','L','R','X'};

unsigned char ret_char();


unsigned char ret_char(){
	PowerPort=1;
    InputPort=0;
	for(unsigned char x=start_pp;x<=stop_pp;x++){		
 		for(unsigned char y=input_p_start;y<=input_p_stop;y++){
			//Col1
			 if(PowerPort&1){
				
				if(InputPort&1){
				   _delay_us(300);
				   return char_set[0];
				}
				if(InputPort&2){
				   _delay_us(300);
				   return char_set[1];
				}
				if(InputPort&4){
					_delay_us(300);
				   return char_set[2];
				}
				if(InputPort&8){
				 _delay_us(300);
				   return char_set[3];
				}
				if(InputPort&16){
					_delay_us(300);
				   return char_set[4];
				}
			 }
			 ///////////////////////////////////////////////////
			 
			 //Col2
			 if(PowerPort&2){
						
						if(InputPort&1){
							_delay_us(300);
							return char_set[5];
						}
						if(InputPort&2){
							_delay_us(300);
							return char_set[6];
						}
						if(InputPort&4){
							_delay_us(300);
							return char_set[7];
						}
						if(InputPort&8){
							_delay_us(300);
							return char_set[8];
						}
						if(InputPort&16){
							_delay_us(300);
							return char_set[9];
						}
			
			 }
			 ///////////////////////////////////////////////////////// 
			 
			 
			 //Col3
			 if(PowerPort&4){
				
				 		
				 		if(InputPort&1){
					 		_delay_us(300);
					 		return char_set[10];
				 		}
				 		if(InputPort&2){
					 		_delay_us(300);
					 		return char_set[11];
				 		}
				 		if(InputPort&4){
					 		_delay_us(300);
					 		return char_set[12];
				 		}
				 		if(InputPort&8){
					 		_delay_us(300);
					 		return char_set[13];
				 		}
				 		
			 }
			 
			 /////////////////////////////////////////////////////
			 
			 
			 //Col3
			 if(PowerPort&8){
				
					if(InputPort&1){
						_delay_us(300);
						return char_set[14];
					}
					if(InputPort&2){
						_delay_us(300);
						return char_set[15];
					}
					if(InputPort&4){
						_delay_us(300);
						return char_set[16];
					}
					if(InputPort&8){
						_delay_us(300);
						return char_set[17];
					}
			 }
			 ///////////////////////////////////////////////
			 
			 //Col4 
			  if(PowerPort&16){
				  
					if(InputPort&1){
						_delay_us(300);
						return char_set[18];
					}
					if(InputPort&2){
						_delay_us(300);
						return char_set[19];
					}
					if(InputPort&4){
						_delay_us(300);
						return char_set[20];
					}
					if(InputPort&8){
						_delay_us(300);
						return char_set[21];
					}
				
				
			  }
			  //////////////////////////////////////////////////
			  
			  
			  //Col5
			   if(PowerPort&32){
				   
				  	if(InputPort&1){
					  	_delay_us(300);
					  	return char_set[22];
				  	}
				  	if(InputPort&2){
					  	_delay_us(300);
					  	return char_set[23];
				  	}
				  	if(InputPort&4){
					  	_delay_us(300);
					  	return char_set[24];
				  	}
				  	if(InputPort&8){
					  	_delay_us(300);
					  	return char_set[25];
				  	}
			   }
			   
			   ////////////////////////////////////////////////////
			 		 
		
		}
		PowerPort=PowerPort<<1;
	}
	return 0;
}


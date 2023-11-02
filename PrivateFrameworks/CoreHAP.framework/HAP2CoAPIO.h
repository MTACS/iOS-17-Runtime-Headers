
@interface HAP2CoAPIO : NSObject

+ (id)consumers;
+ (bool)isRunning;
+ (id)lock;
+ (id)new;
+ (void)queueSessionBlockForConsumer:(id)arg1 sessionBlock:(id /* block */)arg2 withTimeout:(double)arg3 requiresCompletion:(bool)arg4;
+ (void)queueSessionCompletionForConsumer:(id)arg1;
+ (void)registerConsumer:(id)arg1;
+ (bool)setCoapAddressFromString:(id)arg1 port:(unsigned short)arg2 coapAddress:(struct coap_address_t { unsigned int x1; union { struct sockaddr { unsigned char x_1_2_1; unsigned char x_1_2_2; BOOL x_1_2_3[14]; } x_2_1_1; struct sockaddr_in { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; struct in_addr { unsigned int x_4_3_1; } x_2_2_4; BOOL x_2_2_5[8]; } x_2_1_2; struct sockaddr_in6 { unsigned char x_3_2_1; unsigned char x_3_2_2; unsigned short x_3_2_3; unsigned int x_3_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_3_2_5; unsigned int x_3_2_6; } x_2_1_3; } x2; }*)arg3;
+ (void)setConsumers:(id)arg1;
+ (void)setThread:(id)arg1;
+ (id)thread;
+ (void)unregisterConsumer:(id)arg1;

- (id)init;

@end

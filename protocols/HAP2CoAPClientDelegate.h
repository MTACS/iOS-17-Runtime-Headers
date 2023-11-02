
@protocol HAP2CoAPClientDelegate <NSObject>

@required

- (void)client:(id <HAP2CoAPClient>)arg1 didReceiveEvent:(NSData *)arg2;
- (void)clientDidDisconnect:(id <HAP2CoAPClient>)arg1 error:(NSError *)arg2;

@optional

- (void)clientDidGetRegistered:(id <HAP2CoAPClient>)arg1;
- (void)clientDidGetUnregistered:(id <HAP2CoAPClient>)arg1;

@end

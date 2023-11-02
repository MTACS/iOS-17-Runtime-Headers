
@protocol IDSCrossDeviceTransportEndpoint <NSObject>

@required

- (void)messageReceivedFromIDS:(NSDictionary *)arg1;

@optional

- (void)messageWithIdentifier:(NSString *)arg1 didSendWithSuccess:(bool)arg2 error:(NSError *)arg3;
- (void)messageWithIdentifierHasBeenDelivered:(NSString *)arg1;

@end

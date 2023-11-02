
@protocol CATIDSMessageBroadcastHandler

@required

- (void)processMessage:(NSDictionary *)arg1 senderAppleID:(NSString *)arg2 senderAddress:(NSString *)arg3;

@end

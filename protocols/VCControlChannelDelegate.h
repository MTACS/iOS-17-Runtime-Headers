
@protocol VCControlChannelDelegate <NSObject>

@required

- (void)controlChannel:(VCControlChannel *)arg1 clearTransactionCacheForParticipant:(NSNumber *)arg2;
- (void)controlChannel:(VCControlChannel *)arg1 receivedMessage:(NSString *)arg2 transactionID:(unsigned int)arg3 fromParticipant:(NSNumber *)arg4;
- (void)controlChannel:(VCControlChannel *)arg1 sendReliableMessage:(NSString *)arg2 didSucceed:(bool)arg3 toParticipant:(NSNumber *)arg4;
- (void)controlChannel:(VCControlChannel *)arg1 topic:(NSString *)arg2 payload:(NSData *)arg3 transactionID:(unsigned int)arg4 fromParticipant:(NSNumber *)arg5;

@end

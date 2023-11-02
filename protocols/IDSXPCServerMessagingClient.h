
@protocol IDSXPCServerMessagingClient <NSObject>

@required

- (void)handleReceivedIncomingMessageData:(NSData *)arg1 identifier:(NSString *)arg2 context:(IDSServerMessagingIncomingContext *)arg3;

@end

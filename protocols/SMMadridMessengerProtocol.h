
@protocol SMMadridMessengerProtocol <NSObject>

@required

- (void)iMessageDeletedFor:(NSArray *)arg1;
- (void)iMessageReceived:(NSURL *)arg1 fromHandle:(NSString *)arg2 fromMe:(bool)arg3;
- (void)iMessageScheduledSendCancelFor:(NSString *)arg1 successful:(bool)arg2 withError:(NSError *)arg3;
- (void)iMessageScheduledSendScheduledFor:(NSURL *)arg1 guid:(NSString *)arg2 successful:(bool)arg3 withError:(NSError *)arg4;
- (void)iMessageScheduledSendTriggeredFor:(NSString *)arg1;
- (void)iMessageSendFor:(NSURL *)arg1 guid:(NSString *)arg2 successful:(bool)arg3 withError:(NSError *)arg4;

@optional

- (void)iMessageConversationDeletedFor:(NSArray *)arg1;

@end

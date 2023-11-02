
@protocol SKAMessagingProvidingDelegate <NSObject>

@required

- (void)networkBecameReachable;
- (void)service:(NSString *)arg1 didReceiveIncomingMessage:(NSDictionary *)arg2 fromID:(NSString *)arg3 toID:(NSString *)arg4 messageGuid:(NSString *)arg5;
- (void)service:(NSString *)arg1 outgoingMessageWithIdentifier:(NSString *)arg2 fromID:(NSString *)arg3 toID:(NSString *)arg4 didSendWithSuccess:(bool)arg5;

@end


@protocol IDSPushHandlerDelegate <NSObject>

@optional

- (void)handler:(IDSPushHandler *)arg1 didReceiveMessage:(NSDictionary *)arg2 forTopic:(NSString *)arg3 fromID:(NSString *)arg4 messageContext:(IMMessageContext *)arg5;
- (void)handler:(IDSPushHandler *)arg1 didReceiveMessage:(NSDictionary *)arg2 forUnknownTopic:(NSString *)arg3 messageContext:(IMMessageContext *)arg4;
- (void)handler:(IDSPushHandler *)arg1 isConnectedChanged:(bool)arg2;
- (void)handler:(IDSPushHandler *)arg1 pushTokenChanged:(NSData *)arg2;
- (void)handler:(IDSPushHandler *)arg1 receivedNoStorageResponseForTopic:(NSString *)arg2 messageContext:(IMMessageContext *)arg3;
- (void)handler:(IDSPushHandler *)arg1 receivedOfflineMessagePendingForTopic:(NSString *)arg2 messageContext:(IMMessageContext *)arg3;

@end

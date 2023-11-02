
@protocol IDSDirectMessageConnectionDelegate <NSObject>

@required

- (void)connection:(IDSDirectMessageConnection *)arg1 messageSendFailed:(NSString *)arg2 responseCode:(long long)arg3;

@optional

- (void)connection:(IDSDirectMessageConnection *)arg1 incomingAckWithIdentifier:(NSString *)arg2 forTopic:(NSString *)arg3 toIdentifier:(NSString *)arg4 fromIdentifier:(NSString *)arg5 hasBeenDeliveredWithContext:(NSDictionary *)arg6 isAppAck:(bool)arg7;
- (void)connection:(IDSDirectMessageConnection *)arg1 incomingDataFromDirectConnection:(NSData *)arg2 withGUID:(NSString *)arg3 forTopic:(NSString *)arg4 toIdentifier:(NSString *)arg5 fromID:(NSString *)arg6 context:(NSDictionary *)arg7;
- (void)connection:(IDSDirectMessageConnection *)arg1 incomingGUIDAckFromDirectConnection:(NSString *)arg2;
- (void)connection:(IDSDirectMessageConnection *)arg1 incomingMessageFromDirectConnection:(NSDictionary *)arg2 withGUID:(NSString *)arg3 forTopic:(NSString *)arg4 toIdentifier:(NSString *)arg5 fromID:(NSString *)arg6 context:(NSDictionary *)arg7;
- (void)connection:(IDSDirectMessageConnection *)arg1 incomingProtobufFromDirectConnection:(NSDictionary *)arg2 withGUID:(NSString *)arg3 forTopic:(NSString *)arg4 toIdentifier:(NSString *)arg5 fromID:(NSString *)arg6 context:(NSDictionary *)arg7;

@end

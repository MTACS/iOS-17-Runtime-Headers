
@protocol EDInteractionEventLog

@required

- (void)persistEvent:(NSString *)arg1 dataFromMessage:(id <ECMessage>)arg2;
- (void)persistEvent:(NSString *)arg1 dataFromMessage:(id <ECMessage>)arg2 account:(id <ECMailAccount>)arg3;
- (void)persistEvent:(NSString *)arg1 date:(NSDate *)arg2 conversationID:(long long)arg3 data:(NSDictionary *)arg4;
- (void)persistEvent:(NSString *)arg1 date:(NSDate *)arg2 message:(id <ECMessage>)arg3 data:(NSDictionary *)arg4;
- (void)persistEvent:(NSString *)arg1 date:(NSDate *)arg2 message:(id <ECMessage>)arg3 mailbox:(id <ECMailbox>)arg4;
- (void)persistEvent:(NSString *)arg1 date:(NSDate *)arg2 message:(id <ECMessage>)arg3 mailboxType:(long long)arg4;

@end

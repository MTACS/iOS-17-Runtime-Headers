
@protocol ECTransferActionReplayerSubclassMethods <NSObject>

@required

- (ECTransferMessageActionResults *)appendItem:(ECTransferMessageActionItem *)arg1 mailboxURL:(NSURL *)arg2;
- (ECTransferMessageActionResults *)copyItems:(NSDictionary *)arg1 destinationMailboxURL:(NSURL *)arg2;
- (bool)deleteSourceMessagesFromTransferItems:(NSArray *)arg1;
- (bool)downloadFailed;
- (NSData *)fetchBodyDataForRemoteID:(NSString *)arg1 mailboxURL:(NSURL *)arg2;
- (bool)isRecoverableError:(NSError *)arg1;
- (ECTransferMessageActionResults *)moveItems:(NSDictionary *)arg1 destinationMailboxURL:(NSURL *)arg2;

@end

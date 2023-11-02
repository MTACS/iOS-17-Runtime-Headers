
@protocol _FTMSMessageStoreControllerClientDelegate

@required

- (void)messageStoreDidAddMessages:(NSArray *)arg1;
- (void)messageStoreDidDeleteMessages:(NSArray *)arg1;
- (void)messageStoreDidDeleteMessagesWithUUIDs:(NSArray *)arg1;
- (void)messageStoreDidReconnect;
- (void)messageStoreDidUpdateMessages:(NSArray *)arg1;

@end

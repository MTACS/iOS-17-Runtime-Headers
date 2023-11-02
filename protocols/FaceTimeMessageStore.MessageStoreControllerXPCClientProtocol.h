
@protocol FaceTimeMessageStore.MessageStoreControllerXPCClientProtocol

@required

- (void)messageStoreDidAddMessages:(NSArray *)arg1;
- (void)messageStoreDidDeleteMessages:(NSArray *)arg1;
- (void)messageStoreDidDeleteMessagesWithUUIDs:(NSArray *)arg1;
- (void)messageStoreDidUpdateMessages:(NSArray *)arg1;

@end


@interface FaceTimeMessageStore.MessageStoreController : _TtCs12_SwiftObject <_FTMSMessageStoreControllerClientDelegate> {
    void dataSource;
    void delegateLock;
    void delegates;
}

- (void)messageStoreDidAddMessages:(id)arg1;
- (void)messageStoreDidDeleteMessages:(id)arg1;
- (void)messageStoreDidDeleteMessagesWithUUIDs:(id)arg1;
- (void)messageStoreDidReconnect;
- (void)messageStoreDidUpdateMessages:(id)arg1;

@end

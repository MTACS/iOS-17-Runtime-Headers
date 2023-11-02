
@interface FaceTimeMessageStore.MessageStoreProviderServiceDelegate : NSObject <NSXPCListenerDelegate, _FTMSMessageStoreControllerClientDelegate> {
    void connectionsQueue;
    void hostConnections;
    void listener;
    void messageStoreServer;
}

- (void).cxx_destruct;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)messageStoreDidAddMessages:(id)arg1;
- (void)messageStoreDidDeleteMessages:(id)arg1;
- (void)messageStoreDidDeleteMessagesWithUUIDs:(id)arg1;
- (void)messageStoreDidReconnect;
- (void)messageStoreDidUpdateMessages:(id)arg1;

@end

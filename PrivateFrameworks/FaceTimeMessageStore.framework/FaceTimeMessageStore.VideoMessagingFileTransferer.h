
@interface FaceTimeMessageStore.VideoMessagingFileTransferer : NSObject <IDSServiceDelegate> {
    void downloadManager;
    void incomingDelegate;
    void outgoingDelegate;
    void queue;
    void serverBag;
    void service;
    void transactionLock;
    void transactionMap;
}

- (void).cxx_destruct;
- (id)init;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 pendingResourceWithMetadata:(id)arg3 fromID:(id)arg4 acknowledgementBlock:(id /* block */)arg5 context:(id)arg6;

@end

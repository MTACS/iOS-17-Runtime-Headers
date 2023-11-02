
@interface FaceTimeMessageStore.MessageStoreServer : _TtCs12_SwiftObject <FaceTimeMessageStore.MessageStoreControllerXPCHostProtocol> {
    void dataSource;
}

@property (nonatomic, retain) <_FTMSMessageStoreControllerClientDelegate> *delegate;

- (void)addMessage:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (void)deleteMessages:(id)arg1 completion:(id /* block */)arg2;
- (void)getAccountStatusWithCompletion:(id /* block */)arg1;
- (void)getMessageCountWithCompletion:(id /* block */)arg1;
- (void)getMessagesWithQuery:(id)arg1 pageSize:(long long)arg2 page:(long long)arg3 completion:(id /* block */)arg4;
- (void)isTranscriptionEnabledWithCompletion:(id /* block */)arg1;
- (void)pingWithCompletion:(id /* block */)arg1;
- (void)saveMessageToPhotoLibraryWithMessageUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)updateMessages:(id)arg1 completion:(id /* block */)arg2;

@end

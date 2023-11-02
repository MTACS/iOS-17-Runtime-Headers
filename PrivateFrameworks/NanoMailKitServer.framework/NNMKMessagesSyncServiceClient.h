
@interface NNMKMessagesSyncServiceClient : NNMKSyncServiceEndpoint {
    <NNMKMessagesSyncServiceClientDelegate> * _delegate;
}

@property (nonatomic) <NNMKMessagesSyncServiceClientDelegate> *delegate;

- (void).cxx_destruct;
- (void)connectivityChanged;
- (id)delegate;
- (id)deleteMessages:(id)arg1;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (id)initWithQueue:(id)arg1;
- (id)moveMessages:(id)arg1;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (void)requestCompactMessages:(id)arg1;
- (id)sendAttachmentAtURL:(id)arg1 forComposedMessageId:(id)arg2;
- (id)sendMessage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (id)updateMailboxSelection:(id)arg1;
- (id)updateMessagesStatus:(id)arg1;
- (void)warnMessagesFilteredOut:(id)arg1;

@end

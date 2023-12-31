
@interface NNMKMessageContentSyncServiceClient : NNMKSyncServiceEndpoint {
    <NNMKMessageContentSyncServiceClientDelegate> * _delegate;
}

@property (nonatomic) <NNMKMessageContentSyncServiceClientDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (id)initWithQueue:(id)arg1;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;

@end

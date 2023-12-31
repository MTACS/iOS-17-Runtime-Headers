
@interface NNMKMessageContentSyncServiceServer : NNMKSyncServiceEndpoint {
    <NNMKMessageContentSyncServiceServerDelegate> * _delegate;
}

@property (nonatomic) <NNMKMessageContentSyncServiceServerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (id)initWithQueue:(id)arg1;
- (id)notifyInitialContentSyncCompleted:(id)arg1;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (id)syncAttachment:(id)arg1 notificationPriority:(bool)arg2 userRequested:(bool)arg3;
- (id)syncMessageContent:(id)arg1 notificationPriority:(bool)arg2 userRequested:(bool)arg3;

@end

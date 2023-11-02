
@interface NNMKFetchesSyncServiceServer : NNMKSyncServiceEndpoint {
    <NNMKFetchesSyncServiceServerDelegate> * _delegate;
}

@property (nonatomic) <NNMKFetchesSyncServiceServerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (id)initWithQueue:(id)arg1;
- (void)notifyFetchRequestCompleted:(id)arg1;
- (void)notifyOldMessagesAvailable:(id)arg1;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (id)reportComposedMessageSendingProgress:(id)arg1;
- (void)requestPrepareForFullSync:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (void)warnErrorDownloadingContentForMessage:(id)arg1 notificationPriority:(bool)arg2 userRequested:(bool)arg3;

@end

@interface NNMKAccountsSyncServiceServer : NNMKSyncServiceEndpoint {
    <NNMKAccountsSyncServiceServerDelegate> * _delegate;
}

@property (nonatomic) <NNMKAccountsSyncServiceServerDelegate> *delegate;

- (void).cxx_destruct;
- (id)addOrUpdateAccount:(id)arg1;
- (id)delegate;
- (id)deleteAccount:(id)arg1;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (id)initWithQueue:(id)arg1;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (id)requestWatchAccountsStatus:(id)arg1;
- (id)sendInitialAccountsSync:(id)arg1;
- (id)sendStandaloneAccountIdentity:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (id)syncVIPList:(id)arg1;

@end

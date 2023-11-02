
@interface PPLocationReadOnlyServerRequestHandler : NSObject <PPLocationReadOnlyServerProtocol> {
    _PASBundleIdResolver * _bundleIdResolver;
    NSString * _clientProcessName;
    <PPLocationClientProtocol> * _clientProxy;
    PPXPCServerPipelinedBatchQueryManager * _queryManager;
}

@property (nonatomic, retain) _PASBundleIdResolver *bundleIdResolver;
@property (nonatomic, copy) NSString *clientProcessName;

- (void).cxx_destruct;
- (id)bundleIdResolver;
- (id)clientProcessName;
- (id)init;
- (void)locationRecordsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)rankedLocationsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (void)setBundleIdResolver:(id)arg1;
- (void)setClientProcessName:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)unblockPendingQueries;

@end

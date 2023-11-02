
@interface PPTemporalClusterServerRequestHandler : NSObject <PPTemporalClusterServerProtocol> {
    NSString * _clientProcessName;
    <PPTemporalClusterClientProtocol> * _clientProxy;
    PPXPCServerPipelinedBatchQueryManager * _queryManager;
}

@property (nonatomic, copy) NSString *clientProcessName;

- (void).cxx_destruct;
- (id)clientProcessName;
- (id)init;
- (void)rankedTemporalClustersForStartDate:(id)arg1 endDate:(id)arg2 queryId:(unsigned long long)arg3;
- (void)setClientProcessName:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)unblockPendingQueries;

@end

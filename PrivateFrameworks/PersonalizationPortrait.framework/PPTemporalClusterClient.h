
@interface PPTemporalClusterClient : NSObject <PPTemporalClusterClientProtocol> {
    PPXPCClientHelper * _clientHelper;
    PPXPCClientPipelinedBatchQueryManager * _queryManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (void)_unblockPendingQueries;
- (id)init;
- (void)rankedTemporalClusterBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (bool)rankedTemporalClustersForStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3 handleBatch:(id /* block */)arg4;

@end

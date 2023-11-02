
@interface PPConnectionsClient : NSObject <PPConnectionsClientProtocol> {
    PPXPCClientHelper * _clientHelper;
    PPXPCClientPipelinedBatchQueryManager * _queryManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (void)_unblockPendingQueries;
- (id)init;
- (bool)recentLocationDonationsSinceDate:(id)arg1 client:(id)arg2 error:(id*)arg3 handleBatch:(id /* block */)arg4;
- (void)recentLocationsBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (bool)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 client:(id)arg5 error:(id*)arg6 handleBatch:(id /* block */)arg7;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;

@end

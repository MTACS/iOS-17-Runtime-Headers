
@interface PPNamedEntityReadOnlyClient : NSObject <PPNamedEntityClientProtocol> {
    PPXPCClientHelper * _clientHelper;
    PPXPCClientPipelinedBatchQueryManager * _queryManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)_unblockPendingQueries;
- (id)init;
- (id)mapItemForPlaceName:(id)arg1 error:(id*)arg2;
- (void)namedEntityBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)namedEntityRecordBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (bool)namedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2 handleBatch:(id /* block */)arg3;
- (bool)rankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2 handleBatch:(id /* block */)arg3;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;

@end

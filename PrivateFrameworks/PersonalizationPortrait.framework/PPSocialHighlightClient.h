
@interface PPSocialHighlightClient : NSObject <PPSocialHighlightClientProtocol> {
    PPXPCClientHelper * _clientHelper;
    PPXPCClientPipelinedBatchQueryManager * _queryManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_internalRemoteObjectProxy;
- (id)_remoteObjectProxy;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)_unblockPendingQueries;
- (id)attributionForIdentifier:(id)arg1 error:(id*)arg2;
- (double)decayInterval;
- (void)feedbackForAttribution:(id)arg1 type:(unsigned long long)arg2 client:(id)arg3 variant:(id)arg4 completion:(id /* block */)arg5;
- (void)feedbackForHighlight:(id)arg1 type:(unsigned long long)arg2 client:(id)arg3 variant:(id)arg4 completion:(id /* block */)arg5;
- (id)init;
- (bool)rankedCollaborationsWithLimit:(unsigned long long)arg1 client:(id)arg2 variant:(id)arg3 error:(id*)arg4 handleBatch:(id /* block */)arg5;
- (void)rankedHighlightsBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (bool)rankedHighlightsForSyncedItems:(id)arg1 client:(id)arg2 variant:(id)arg3 error:(id*)arg4 handleBatch:(id /* block */)arg5;
- (bool)rankedHighlightsWithLimit:(unsigned long long)arg1 client:(id)arg2 variant:(id)arg3 error:(id*)arg4 handleBatch:(id /* block */)arg5;

@end

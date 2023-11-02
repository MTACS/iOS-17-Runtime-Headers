
@interface PPTopicReadOnlyClient : NSObject <PPTopicClientProtocol> {
    PPXPCClientHelper * _clientHelper;
    PPXPCClientPipelinedBatchQueryManager * _queryManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)_unblockPendingQueries;
- (id)cachePath:(id*)arg1;
- (id)init;
- (bool)rankedTopicsWithQuery:(id)arg1 error:(id*)arg2 handleBatch:(id /* block */)arg3;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (void)registerUniversalSearchSpotlightFeedback:(id)arg1 completion:(id /* block */)arg2;
- (void)scoredMappedTopicBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (bool)scoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id*)arg3 handleBatch:(id /* block */)arg4;
- (void)topicBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (id)topicCacheSandboxExtensionToken:(id*)arg1;
- (bool)topicExtractionsFromText:(id)arg1 error:(id*)arg2 handleBatch:(id /* block */)arg3;
- (void)topicExtractionsFromTextBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)topicRecordBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (bool)topicRecordsWithQuery:(id)arg1 error:(id*)arg2 handleBatch:(id /* block */)arg3;
- (id)unmapMappedTopicIdentifier:(id)arg1 mappingIdentifier:(id)arg2 error:(id*)arg3;

@end

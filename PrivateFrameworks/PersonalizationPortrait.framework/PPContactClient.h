
@interface PPContactClient : NSObject <PPContactClientProtocol> {
    PPXPCClientHelper * _clientHelper;
    PPXPCClientPipelinedBatchQueryManager * _queryManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (void)_unblockPendingQueries;
- (bool)contactHandlesForSource:(id)arg1 error:(id*)arg2 handleBatch:(id /* block */)arg3;
- (void)contactHandlesForSourceBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (bool)contactHandlesForTopics:(id)arg1 error:(id*)arg2 handleBatch:(id /* block */)arg3;
- (void)contactHandlesForTopicsBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)contactNameRecordBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)contactNameRecordChangesBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)contactNameRecordChangesForClient:(id)arg1 completion:(id /* block */)arg2;
- (bool)contactNameRecordChangesForClient:(id)arg1 error:(id*)arg2 handleBatch:(id /* block */)arg3;
- (bool)contactNameRecordsForClient:(id)arg1 error:(id*)arg2 handleBatch:(id /* block */)arg3;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)rankedContactsBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (bool)rankedContactsWithQuery:(id)arg1 error:(id*)arg2 handleBatch:(id /* block */)arg3;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (void)upcomingRelevantContactsBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (bool)upcomingRelevantContactsForQuery:(id)arg1 error:(id*)arg2 handleBatch:(id /* block */)arg3;

@end

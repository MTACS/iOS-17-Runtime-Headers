
@interface PPContactServerRequestHandler : NSObject <PPContactServerProtocol> {
    NSString * _clientProcessName;
    <PPContactClientProtocol> * _clientProxy;
    _Atomic bool  _isTerminated;
    PPXPCServerPipelinedBatchQueryManager * _queryManager;
    PPLocalContactStore * _store;
}

@property (nonatomic, copy) NSString *clientProcessName;

- (void).cxx_destruct;
- (id)clientProcessName;
- (void)contactHandlesForSource:(id)arg1 queryId:(unsigned long long)arg2;
- (void)contactHandlesForTopics:(id)arg1 queryId:(unsigned long long)arg2;
- (void)contactNameRecordChangesForClient:(id)arg1 completion:(id /* block */)arg2;
- (void)contactNameRecordChangesForClient:(id)arg1 queryId:(unsigned long long)arg2;
- (void)contactNameRecordsForClient:(id)arg1 queryId:(unsigned long long)arg2;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithStore:(id)arg1;
- (void)rankedContactsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (void)setClientProcessName:(id)arg1;
- (void)setIsTerminated;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)unblockPendingQueries;
- (void)upcomingRelevantContactsForQuery:(id)arg1 queryId:(unsigned long long)arg2;

@end


@interface PPEventClient : NSObject <PPEventClientProtocol> {
    PPXPCClientHelper * _clientHelper;
    PPXPCClientPipelinedBatchQueryManager * _queryManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (void)_unblockPendingQueries;
- (void)eventHighlightsBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (bool)eventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3 error:(id*)arg4 handleBatch:(id /* block */)arg5;
- (void)eventNameRecordBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)eventNameRecordChangesBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (bool)eventNameRecordsForClient:(id)arg1 error:(id*)arg2 handleBatch:(id /* block */)arg3;
- (id)init;
- (void)interactionSummaryMetricsBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (bool)interactionSummaryMetricsWithError:(id*)arg1 handleBatch:(id /* block */)arg2;
- (void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (bool)resolveEventNameRecordChanges:(id)arg1 client:(id)arg2 error:(id*)arg3 handleBatch:(id /* block */)arg4;
- (void)scoredEventsBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (bool)scoredEventsWithQuery:(id)arg1 error:(id*)arg2 handleBatch:(id /* block */)arg3;
- (bool)sendRTCLogsWithError:(id*)arg1;

@end


@interface PPEventServerRequestHandler : NSObject <PPEventServerProtocol> {
    NSString * _clientProcessName;
    <PPEventClientProtocol> * _clientProxy;
    PPXPCServerPipelinedBatchQueryManager * _queryManager;
}

@property (nonatomic, copy) NSString *clientProcessName;

- (void).cxx_destruct;
- (id)clientProcessName;
- (void)eventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3 queryId:(unsigned long long)arg4;
- (void)eventNameRecordsForClient:(id)arg1 queryId:(unsigned long long)arg2;
- (id)init;
- (void)interactionSummaryMetricsWithQueryId:(unsigned long long)arg1;
- (void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveEventNameRecordChanges:(id)arg1 client:(id)arg2 queryId:(unsigned long long)arg3;
- (void)scoredEventsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)sendRTCLogsWithWithCompletion:(id /* block */)arg1;
- (void)setClientProcessName:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)unblockPendingQueries;

@end

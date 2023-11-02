
@protocol PPEventServerProtocol <PPFeedbackAccepting>

@required

- (void)eventHighlightsFrom:(NSDate *)arg1 to:(NSDate *)arg2 options:(int)arg3 queryId:(unsigned long long)arg4;
- (void)eventNameRecordsForClient:(NSString *)arg1 queryId:(unsigned long long)arg2;
- (void)interactionSummaryMetricsWithQueryId:(unsigned long long)arg1;
- (void)logEventInteractionForEventWithEventIdentifier:(NSString *)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)resolveEventNameRecordChanges:(NSArray *)arg1 client:(NSString *)arg2 queryId:(unsigned long long)arg3;
- (void)scoredEventsWithQuery:(PPEventQuery *)arg1 queryId:(unsigned long long)arg2;
- (void)sendRTCLogsWithWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end

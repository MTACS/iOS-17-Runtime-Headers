
@protocol PPEventClientProtocol <PPFeedbackAccepting>

@required

- (void)eventHighlightsBatch:(void *)arg1 isLast:(void *)arg2 error:(void *)arg3 queryId:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSArray *, bool, NSError *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)eventNameRecordBatch:(void *)arg1 isLast:(void *)arg2 error:(void *)arg3 queryId:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSArray *, bool, NSError *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)eventNameRecordChangesBatch:(void *)arg1 isLast:(void *)arg2 error:(void *)arg3 queryId:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSArray *, bool, NSError *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)interactionSummaryMetricsBatch:(void *)arg1 isLast:(void *)arg2 error:(void *)arg3 queryId:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSArray *, bool, NSError *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)scoredEventsBatch:(void *)arg1 isLast:(void *)arg2 error:(void *)arg3 queryId:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSArray *, bool, NSError *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end

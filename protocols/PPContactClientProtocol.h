
@protocol PPContactClientProtocol <PPFeedbackAccepting>

@required

- (void)contactHandlesForSourceBatch:(void *)arg1 isLast:(void *)arg2 error:(void *)arg3 queryId:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSArray *, bool, NSError *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)contactHandlesForTopicsBatch:(void *)arg1 isLast:(void *)arg2 error:(void *)arg3 queryId:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSArray *, bool, NSError *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)contactNameRecordBatch:(void *)arg1 isLast:(void *)arg2 error:(void *)arg3 queryId:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSArray *, bool, NSError *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)contactNameRecordChangesBatch:(void *)arg1 isLast:(void *)arg2 error:(void *)arg3 queryId:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSArray *, bool, NSError *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)rankedContactsBatch:(void *)arg1 isLast:(void *)arg2 error:(void *)arg3 queryId:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSArray *, bool, NSError *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)upcomingRelevantContactsBatch:(void *)arg1 isLast:(void *)arg2 error:(void *)arg3 queryId:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSArray *, bool, NSError *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end

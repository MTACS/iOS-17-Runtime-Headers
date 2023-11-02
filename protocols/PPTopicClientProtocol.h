
@protocol PPTopicClientProtocol <PPFeedbackAccepting, PPUniversalSearchSpotlightFeedbackAccepting>

@required

- (void)scoredMappedTopicBatch:(void *)arg1 isLast:(void *)arg2 error:(void *)arg3 queryId:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSArray *, bool, NSError *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)topicBatch:(void *)arg1 isLast:(void *)arg2 error:(void *)arg3 queryId:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSArray *, bool, NSError *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)topicExtractionsFromTextBatch:(void *)arg1 isLast:(void *)arg2 error:(void *)arg3 queryId:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSArray *, bool, NSError *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)topicRecordBatch:(void *)arg1 isLast:(void *)arg2 error:(void *)arg3 queryId:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSArray *, bool, NSError *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end

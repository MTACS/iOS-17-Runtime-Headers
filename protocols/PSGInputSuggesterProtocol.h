
@protocol PSGInputSuggesterProtocol

@required

- (void)inputSuggestionsWithRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: PSGInputSuggestionsRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PSGInputSuggestionsResponse *, NSError *, void*
- (void)logEngagement:(NSArray *)arg1 request:(PSGInputSuggestionsRequest *)arg2 position:(unsigned long long)arg3;
- (void)logErrorForRequest:(PSGInputSuggestionsRequest *)arg1 trigger:(PSGProactiveTrigger *)arg2 errorType:(unsigned char)arg3;
- (void)logImpression:(NSArray *)arg1 request:(PSGInputSuggestionsRequest *)arg2;
- (void)logPrediction:(PSGInputSuggestionsResponse *)arg1 request:(PSGInputSuggestionsRequest *)arg2 latencyMillis:(double)arg3;
- (void)logSpeedMetricForLocaleIdentifier:(NSString *)arg1 messageDurationMilliseconds:(int)arg2 messageLength:(int)arg3 messageWords:(int)arg4;
- (void)logTrigger:(PSGProactiveTrigger *)arg1 request:(PSGInputSuggestionsRequest *)arg2;
- (void)warmUpWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end

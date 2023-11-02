
@protocol PPSocialHighlightServerProtocol

@required

- (void)decayIntervalWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, NSError *, void*
- (void)feedbackForAttribution:(void *)arg1 type:(void *)arg2 client:(void *)arg3 variant:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSString *, unsigned long long, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)feedbackForHighlight:(void *)arg1 type:(void *)arg2 client:(void *)arg3 variant:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSString *, unsigned long long, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)rankedHighlightsForSyncedItems:(NSArray *)arg1 client:(NSString *)arg2 variant:(NSString *)arg3 queryId:(unsigned long long)arg4;
- (void)rankedHighlightsWithLimit:(unsigned long long)arg1 client:(NSString *)arg2 variant:(NSString *)arg3 queryId:(unsigned long long)arg4;

@end

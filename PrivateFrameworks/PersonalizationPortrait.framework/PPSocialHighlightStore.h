
@interface PPSocialHighlightStore : NSObject

+ (double)decayInterval;

- (id)attributionForIdentifier:(id)arg1 error:(id*)arg2;
- (void)feedbackForAttributionIdentifier:(id)arg1 type:(unsigned long long)arg2 client:(id)arg3 variant:(id)arg4 completion:(id /* block */)arg5;
- (void)feedbackForHighlightIdentifier:(id)arg1 type:(unsigned long long)arg2 client:(id)arg3 variant:(id)arg4 completion:(id /* block */)arg5;
- (void)feedbackForHighlightResourceURL:(id)arg1 resolvedURL:(id)arg2 type:(unsigned long long)arg3 client:(id)arg4 variant:(id)arg5 completion:(id /* block */)arg6;
- (id)init;
- (bool)iterRankedCollaborationsWithLimit:(unsigned long long)arg1 client:(id)arg2 variant:(id)arg3 error:(id*)arg4 block:(id /* block */)arg5;
- (bool)iterRankedHighlightsForSyncedItems:(id)arg1 client:(id)arg2 variant:(id)arg3 error:(id*)arg4 block:(id /* block */)arg5;
- (bool)iterRankedHighlightsWithLimit:(unsigned long long)arg1 client:(id)arg2 variant:(id)arg3 error:(id*)arg4 block:(id /* block */)arg5;

@end

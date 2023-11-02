
@protocol RERelevanceEngineObserver <NSObject>

@optional

- (void)relevanceEngine:(RERelevanceEngine *)arg1 didInsertElement:(REElement *)arg2 atPath:(RESectionPath *)arg3;
- (void)relevanceEngine:(RERelevanceEngine *)arg1 didMoveElement:(REElement *)arg2 fromPath:(RESectionPath *)arg3 toPath:(RESectionPath *)arg4;
- (void)relevanceEngine:(RERelevanceEngine *)arg1 didReloadElement:(REElement *)arg2 atPath:(RESectionPath *)arg3;
- (void)relevanceEngine:(RERelevanceEngine *)arg1 didRemoveElement:(REElement *)arg2 atPath:(RESectionPath *)arg3;
- (void)relevanceEngine:(RERelevanceEngine *)arg1 didUpdateRelevanceForElement:(REElement *)arg2;
- (bool)relevanceEngine:(RERelevanceEngine *)arg1 isElementAtPathVisible:(RESectionPath *)arg2;
- (void)relevanceEngine:(void *)arg1 performBatchUpdateBlock:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 11: RERelevanceEngine *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (void)relevanceEngineDidBeginUpdatingRelevance:(RERelevanceEngine *)arg1;
- (void)relevanceEngineDidFinishUpdatingRelevance:(RERelevanceEngine *)arg1;

@end

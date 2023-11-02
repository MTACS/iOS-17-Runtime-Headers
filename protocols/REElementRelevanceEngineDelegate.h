
@protocol REElementRelevanceEngineDelegate <NSObject>

@required

- (void)relevanceEngine:(REElementRelevanceEngine *)arg1 didInsertElement:(NSString *)arg2 atPath:(RESectionPath *)arg3;
- (void)relevanceEngine:(REElementRelevanceEngine *)arg1 didMoveElement:(NSString *)arg2 fromPath:(RESectionPath *)arg3 toPath:(RESectionPath *)arg4;
- (void)relevanceEngine:(REElementRelevanceEngine *)arg1 didRemoveElement:(NSString *)arg2 atPath:(RESectionPath *)arg3;
- (void)relevanceEngine:(REElementRelevanceEngine *)arg1 didUpdateRelevanceOfElement:(NSString *)arg2;
- (void)relevanceEngine:(REElementRelevanceEngine *)arg1 elementWasAdded:(NSString *)arg2;
- (void)relevanceEngine:(REElementRelevanceEngine *)arg1 elementWasRemoved:(NSString *)arg2;
- (void)relevanceEngine:(void *)arg1 performedBatchUpdates:(void *)arg2; // needs 2 arg types, found 6: REElementRelevanceEngine *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end

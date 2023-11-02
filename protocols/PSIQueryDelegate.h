
@protocol PSIQueryDelegate <PSIGroupResultDelegate, PSITopAssetsResultDelegate, PLSearchResultV2Delegate>

@required

- (void)assetIdsFromUUIDs:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct __CFArray { }*, NSDictionary *, void*
- (void)collectionIdsFromUUIDs:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct __CFArray { }*, NSDictionary *, void*
- (void)executeQuery:(void *)arg1 disableWildcardMatchesForUserControlledCategories:(void *)arg2 resultsHandler:(void *)arg3; // needs 3 arg types, found 8: PSIQuery *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)executeQueryV2:(void *)arg1 resultsHandler:(void *)arg2; // needs 2 arg types, found 7: PSIQuery *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PLSearchResultV2 *, void*
- (void)executeQueryV2:(void *)arg1 userQuery:(void *)arg2 resultsHandler:(void *)arg3; // needs 3 arg types, found 8: PSIQuery *, CSUserQuery *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PLSearchResultV2 *, void*
- (NSArray *)groupArraysFromGroupIdSets:(void *)arg1 dateFilter:(void *)arg2 searchResultTypes:(void *)arg3 progressBlock:(void *)arg4; // needs 4 arg types, found 10: NSArray *, PSIDateFilter *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, bool*, void*
- (PSIGroup *)groupForLookupIdentifier:(NSString *)arg1 searchResultTypes:(unsigned long long)arg2;
- (struct __CFSet { }*)groupIdsMatchingString:(NSString *)arg1 categories:(NSIndexSet *)arg2 textIsSearchable:(bool)arg3;
- (PSIGroupResult *)groupResultWithDateFilter:(PSIDateFilter *)arg1 datedTokens:(NSArray *)arg2;
- (NSObject<OS_dispatch_queue> *)groupResultsQueue;
- (PSIGroup *)groupWithMatchingGroupId:(unsigned long long)arg1 dateFilter:(PSIDateFilter *)arg2 searchResultTypes:(unsigned long long)arg3;
- (void)groupsForAssetIds:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: struct __CFArray { }*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSCountedSet *, void*
- (NSArray *)groupsForCollectionIds:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: struct __CFArray { }*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSCountedSet *, void*
- (NSString *)meNodeIdentifier;
- (PLSearchResultV2 *)searchResultV2WithDateFilter:(PSIDateFilter *)arg1 scopedSearchIdentifiers:(NSSet *)arg2 searchResultTypes:(unsigned long long)arg3 suggestionType:(unsigned long long)arg4;
- (NSArray *)suggestionWhitelistedScenes;
- (PSITokenizer *)tokenizer;
- (NSArray *)wordEmbeddingMatchesForToken:(NSString *)arg1;

@end

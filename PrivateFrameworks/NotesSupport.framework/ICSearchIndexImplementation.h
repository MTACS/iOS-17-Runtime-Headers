
@interface ICSearchIndexImplementation : NSObject <ICSearchIndex> {
    CSSearchableIndex * _searchableIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CSSearchableIndex *searchableIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginIndexBatch;
- (void)deleteAllSearchableItemsWithCompletionHandler:(id /* block */)arg1;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteSearchableItemsWithIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)endIndexBatchWithClientState:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchLastClientStateWithCompletionHandler:(id /* block */)arg1;
- (void)indexSearchableItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)searchableIndex;
- (void)setSearchableIndex:(id)arg1;
- (void)slowFetchAttributes:(id)arg1 protectionClass:(id)arg2 bundleID:(id)arg3 identifiers:(id)arg4 completionHandler:(id /* block */)arg5;

@end

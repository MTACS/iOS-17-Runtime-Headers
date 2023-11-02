
@interface FPSpotlightFetchOneBatchFromWorkingSetOperation : FPOperation {
    NSArray * _deletedItemIDs;
    FPXDomainContext * _domainContext;
    NSError * _error;
    bool  _hasMore;
    FPSpotlightIndexState * _indexState;
    FPSpotlightIndexer * _indexer;
    NSData * _nextAnchor;
    NSArray * _updatedItems;
}

@property (nonatomic, retain) NSArray *deletedItemIDs;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) bool hasMore;
@property (nonatomic, retain) NSData *nextAnchor;
@property (nonatomic, retain) NSArray *updatedItems;

- (void).cxx_destruct;
- (void)_indexOneChangesBatchFromChangeToken:(id)arg1;
- (void)_indexOnePageFromPage:(id)arg1;
- (id)deletedItemIDs;
- (id)error;
- (void)handleInsertedItems:(id)arg1 deletedItems:(id)arg2 needsMoreWork:(bool)arg3 state:(id)arg4 error:(id)arg5;
- (bool)hasMore;
- (id)initWithIndexer:(id)arg1 queue:(id)arg2;
- (void)main;
- (id)nextAnchor;
- (id)observerItemID;
- (void)setDeletedItemIDs:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHasMore:(bool)arg1;
- (void)setNextAnchor:(id)arg1;
- (void)setUpdatedItems:(id)arg1;
- (id)updatedItems;

@end

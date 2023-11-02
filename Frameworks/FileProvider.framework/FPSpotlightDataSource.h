
@interface FPSpotlightDataSource : NSObject <FPCollectionDataSource, FPSpotlightCollectorObserving> {
    FPSpotlightCollectorManager * _collectorManager;
    <FPSpotlightDataSourceDelegate> * _delegate;
    FPQueryEnumerationSettings * _enumerationSettings;
    bool  _hasMoreIncoming;
    bool  _invalidated;
    NSPredicate * _predicate;
    FPSpotlightQueryDescriptor * _queryDescriptor;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FPSpotlightDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasMoreIncoming;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FPSpotlightQueryDescriptor *queryDescriptor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_invalidateWithError:(id)arg1;
- (void)collector:(id)arg1 didEncounterError:(id)arg2;
- (void)collector:(id)arg1 didGatherItems:(id)arg2;
- (void)collector:(id)arg1 didRemoveItemIDs:(id)arg2;
- (void)collector:(id)arg1 didUpdateItems:(id)arg2;
- (void)collector:(id)arg1 didUpdateItemsOrigin:(unsigned long long)arg2;
- (id)delegate;
- (id)description;
- (void)enumerationMightHaveResumed;
- (bool)hasMoreIncoming;
- (id)initWithQueryDescriptor:(id)arg1 predicate:(id)arg2;
- (void)invalidate;
- (id)itemPredicateForCollector:(id)arg1;
- (unsigned long long)maximumNumberOfItems;
- (id)queryDescriptor;
- (void)setDelegate:(id)arg1;
- (void)start;

@end

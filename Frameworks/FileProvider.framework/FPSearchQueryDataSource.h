
@interface FPSearchQueryDataSource : NSObject <FPCollectionDataSource, FPSpotlightDataSourceDelegate> {
    <FPSpotlightDataSourceDelegate> * _delegate;
    bool  _invalidated;
    FPSearchQueryDescriptor * _queryDescriptor;
    NSObject<OS_dispatch_queue> * _queue;
    FPExtensionDataSource * _serverSearchDataSource;
    FPSpotlightDataSource * _spotlightDataSource;
    bool  _started;
}

@property (nonatomic) <FPSpotlightDataSourceDelegate> *delegate;
@property (nonatomic, readonly) bool hasMoreIncoming;
@property (readonly) unsigned long long lastForcedUpdate;
@property (nonatomic, readonly) FPSearchQueryDescriptor *queryDescriptor;

- (void).cxx_destruct;
- (void)dataSource:(id)arg1 didChangeItemsOrigin:(unsigned long long)arg2;
- (void)dataSource:(id)arg1 receivedUpdatedItems:(id)arg2 deletedItems:(id)arg3 hasMoreChanges:(bool)arg4;
- (void)dataSource:(id)arg1 replaceContentsWithItems:(id)arg2 hasMoreChanges:(bool)arg3;
- (void)dataSource:(id)arg1 wasInvalidatedWithError:(id)arg2;
- (bool)dataSourceShouldAlwaysReplaceContents:(id)arg1;
- (id)delegate;
- (void)enumerationMightHaveResumed;
- (bool)hasMoreIncoming;
- (id)initWithQueryDescriptor:(id)arg1 predicate:(id)arg2;
- (void)invalidate;
- (unsigned long long)lastForcedUpdate;
- (id)queryDescriptor;
- (void)setDelegate:(id)arg1;
- (void)start;

@end

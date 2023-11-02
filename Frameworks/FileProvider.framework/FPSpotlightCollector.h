
@interface FPSpotlightCollector : NSObject {
    <FPSpotlightCollectorDelegate> * _delegate;
    bool  _gathering;
    NSMutableDictionary * _itemsByBundleAndCSID;
    NSMutableDictionary * _itemsByProviderAndCollaborationIdentifier;
    unsigned long long  _itemsOrigin;
    NSDate * _lastStartOfRecovery;
    unsigned long long  _numberOfRecoveryAttempts;
    NSMutableSet * _observers;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSMutableArray * _queries;
    FPSpotlightQueryDescriptor * _queryDescriptor;
    NSMapTable * _queryToMountPoint;
    bool  _suspended;
}

@property (nonatomic) <FPSpotlightCollectorDelegate> *delegate;
@property (getter=isGathering, nonatomic) bool gathering;
@property (nonatomic) unsigned long long itemsOrigin;
@property (nonatomic, retain) NSMutableSet *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic, retain) NSMutableArray *queries;
@property (nonatomic, readonly) FPSpotlightQueryDescriptor *queryDescriptor;
@property (getter=isSuspended, nonatomic, readonly) bool suspended;

+ (id)_recursiveDescription;
+ (id)processingQueue;

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1;
- (id)_allItemsForMountPoint:(id)arg1;
- (bool)_areItemsTransientFromBundleIdentifier:(id)arg1;
- (void)_clear;
- (id)_createQueriesForMountPoints:(id)arg1;
- (id)_createQueryForMountPoint:(id)arg1;
- (unsigned long long)_itemsOriginForItems:(id)arg1;
- (id)_mountPointForExistingSearchQuery:(id)arg1;
- (id)_mountPointsForDescriptor;
- (void)_regather;
- (void)_removeItemsForQuery:(id)arg1 mountPoint:(id)arg2;
- (void)_removeObserver:(id)arg1;
- (bool)_shouldFilterUpdatesForObserver:(id)arg1;
- (bool)_shouldRemoveItemsFromObserver:(id)arg1;
- (void)_start;
- (void)_stop;
- (void)addObserver:(id)arg1;
- (id)allItems;
- (id)allItemsForObserver:(id)arg1;
- (id)allObservers;
- (id)delegate;
- (id)description;
- (id)filterItems:(id)arg1 forObserver:(id)arg2 excludedItemIDs:(id*)arg3;
- (id)init;
- (id)initWithDescriptor:(id)arg1;
- (bool)isGathering;
- (bool)isQueryCancelled:(id)arg1;
- (bool)isSuspended;
- (unsigned long long)itemsOrigin;
- (void)mountPointsDidChange:(id)arg1;
- (id)observers;
- (id)processingQueue;
- (id)queries;
- (void)query:(id)arg1 didFinishWithError:(id)arg2;
- (void)query:(id)arg1 didRemoveItemsWithCSIdentifiers:(id)arg2 inBundle:(id)arg3;
- (void)query:(id)arg1 didUpdateItems:(id)arg2;
- (id)queryDescriptor;
- (void)queryDidFinishGathering:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setGathering:(bool)arg1;
- (void)setItemsOrigin:(unsigned long long)arg1;
- (void)setNeedsItemsOriginUpdate;
- (void)setObservers:(id)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)setQueries:(id)arg1;
- (void)suspend;

@end

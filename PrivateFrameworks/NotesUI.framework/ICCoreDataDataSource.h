
@interface ICCoreDataDataSource : ICDataSource <ICCoreDataIndexerDelegate> {
    NSObject<OS_dispatch_queue> * _applySnapshotCompletionQueue;
    NSManagedObjectContext * _applySnapshotLegacyManagedObjectContext;
    NSManagedObjectContext * _applySnapshotModernManagedObjectContext;
    unsigned long long  _autoExpandMode;
    NSObject<OS_dispatch_queue> * _expansionStateCompletionQueue;
    bool  _ignoreEnterForeground;
    ICCoreDataIndexer * _indexer;
    NSDate * _lastReindexParentModificationDate;
    ICSelectorDelayer * _reindexDelayer;
    bool  _suspendsUpdates;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *applySnapshotCompletionQueue;
@property (nonatomic, retain) NSManagedObjectContext *applySnapshotLegacyManagedObjectContext;
@property (nonatomic, retain) NSManagedObjectContext *applySnapshotModernManagedObjectContext;
@property (nonatomic) unsigned long long autoExpandMode;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *expansionStateCompletionQueue;
@property (nonatomic) bool ignoreEnterForeground;
@property (nonatomic, retain) ICCoreDataIndexer *indexer;
@property (nonatomic, retain) NSDate *lastReindexParentModificationDate;
@property (nonatomic, readonly) ICSelectorDelayer *reindexDelayer;
@property (nonatomic) bool suspendsUpdates;

- (void).cxx_destruct;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applySnapshotAnimated:(bool)arg1 dataRenderedBlock:(id /* block */)arg2;
- (id)applySnapshotCompletionQueue;
- (id)applySnapshotLegacyManagedObjectContext;
- (id)applySnapshotModernManagedObjectContext;
- (unsigned long long)autoExpandMode;
- (void)collapseItemsWithIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)expandItemsWithIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (id)expansionStateCompletionQueue;
- (id)firstRelevantItemIdentifier;
- (bool)ignoreEnterForeground;
- (id)indexer;
- (void)indexer:(id)arg1 didChangeContentWithDifference:(id)arg2 controller:(id)arg3;
- (id)initWithCollectionView:(id)arg1 cellProvider:(id /* block */)arg2 indexer:(id)arg3;
- (id)lastReindexParentModificationDate;
- (void)managedObjectContextUpdaterDidMerge:(id)arg1;
- (bool)needsReindexWithCollectionDifference:(id)arg1 controller:(id)arg2 identifiersToReload:(id)arg3;
- (id)nextRelevantItemIdentifierAfter:(id)arg1;
- (void)noteLockManagerDidToggleLock:(id)arg1;
- (void)performBlockSuspendingUpdates:(id /* block */)arg1 andApplySnapshotAnimated:(bool)arg2;
- (void)reindexAndApplySnapshot;
- (void)reindexDataAnimated:(bool)arg1 dataIndexedBlock:(id /* block */)arg2 dataRenderedBlock:(id /* block */)arg3;
- (id)reindexDelayer;
- (void)reloadDataAnimated:(bool)arg1 dataIndexedBlock:(id /* block */)arg2 dataRenderedBlock:(id /* block */)arg3;
- (void)setApplySnapshotLegacyManagedObjectContext:(id)arg1;
- (void)setApplySnapshotModernManagedObjectContext:(id)arg1;
- (void)setAutoExpandMode:(unsigned long long)arg1;
- (void)setExpanded:(bool)arg1 itemIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)setIgnoreEnterForeground:(bool)arg1;
- (void)setIndexer:(id)arg1;
- (void)setLastReindexParentModificationDate:(id)arg1;
- (void)setSuspendsUpdates:(bool)arg1;
- (bool)suspendsUpdates;

@end

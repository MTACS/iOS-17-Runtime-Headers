
@interface ICCoreDataIndexer : NSObject <NSFetchedResultsControllerDelegate> {
    <ICCoreDataIndexerDelegate> * _delegate;
    <ICItemIdentifier> * _firstRelevantItemIdentifier;
    NSManagedObjectContext * _legacyManagedObjectContext;
    NSManagedObjectContext * _modernManagedObjectContext;
    bool  _needsFetchedResultsControllerUpdate;
    NSObject<OS_dispatch_queue> * _reloadDataSerialQueue;
    bool  _shouldIncludeOutlineParentItems;
}

@property (nonatomic, readonly) NSSet *activeFetchedResultsControllers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICCoreDataIndexerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *expansionStateContext;
@property (nonatomic, readonly) <ICItemIdentifier> *firstRelevantItemIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSManagedObjectContext *legacyManagedObjectContext;
@property (nonatomic, readonly) NSManagedObjectContext *modernManagedObjectContext;
@property (nonatomic) bool needsFetchedResultsControllerUpdate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *reloadDataSerialQueue;
@property (nonatomic) bool shouldIncludeOutlineParentItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeFetchedResultsControllers;
- (void)controller:(id)arg1 didChangeContentWithDifference:(id)arg2;
- (id)delegate;
- (void)deleteWithDecisionController:(id)arg1 completion:(id /* block */)arg2;
- (void)didIndex;
- (id)expansionStateContext;
- (id)firstRelevantItemIdentifier;
- (id)indexObjectsInSection:(id)arg1 sectionIndex:(unsigned long long)arg2 fetchedResultsController:(id)arg3;
- (void)indexObjectsWithCompletion:(id /* block */)arg1;
- (id)initWithLegacyManagedObjectContext:(id)arg1 modernManagedObjectContext:(id)arg2;
- (id)legacyManagedObjectContext;
- (id)modernManagedObjectContext;
- (bool)needsFetchedResultsControllerUpdate;
- (id)newSnapshotFromIndex;
- (id)newSnapshotFromIndexWithLegacyManagedObjectContext:(id)arg1 modernManagedObjectContext:(id)arg2;
- (id)nextRelevantItemIdentifierAfter:(id)arg1;
- (void)performAndWaitForFetchedResultsControllers:(id)arg1 block:(id /* block */)arg2;
- (void)reloadData:(id /* block */)arg1;
- (void)reloadDataAndWait;
- (id)reloadDataSerialQueue;
- (id)sectionIdentifierForHeaderInSection:(long long)arg1;
- (id)sectionIdentifiersForSectionControllerType:(unsigned long long)arg1;
- (id)sectionSnapshotsForSectionControllerType:(unsigned long long)arg1;
- (id)sectionSnapshotsForSectionControllerType:(unsigned long long)arg1 legacyManagedObjectContext:(id)arg2 modernManagedObjectContext:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setNeedsFetchedResultsControllerUpdate:(bool)arg1;
- (void)setReloadDataSerialQueue:(id)arg1;
- (void)setShouldIncludeOutlineParentItems:(bool)arg1;
- (bool)shouldIncludeOutlineParentItems;
- (void)unsafelyIndexAllObjectsForFetchedResultsController:(id)arg1;
- (void)unsafelyReloadData;
- (void)updateLegacyFetchedResultsControllers;
- (void)updateModernFetchedResultsControllers;
- (void)willIndex;

@end

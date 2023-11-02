
@interface ICRecentNotesCoreDataIndexer : ICCoreDataIndexer {
    NSObject<OS_dispatch_queue> * _indexAccessQueue;
    NSFetchedResultsController * _legacyNoteFetchedResultsController;
    unsigned long long  _maximumNumberOfNotesPerAccount;
    NSFetchedResultsController * _modernNoteFetchedResultsController;
    bool  _pinnedOnly;
    NSMutableDictionary * _sectionIdentifiersToManagedObjectIDs;
    long long  _sortType;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *indexAccessQueue;
@property (nonatomic, readonly) NSFetchedResultsController *legacyNoteFetchedResultsController;
@property (nonatomic) unsigned long long maximumNumberOfNotesPerAccount;
@property (nonatomic, readonly) NSFetchedResultsController *modernNoteFetchedResultsController;
@property (nonatomic) bool pinnedOnly;
@property (nonatomic, readonly) NSMutableDictionary *sectionIdentifiersToManagedObjectIDs;
@property (nonatomic) long long sortType;
@property (nonatomic, readonly) NSArray *sortedSectionIdentifiers;

- (void).cxx_destruct;
- (id)activeFetchedResultsControllers;
- (id)firstRelevantItemIdentifier;
- (id)indexAccessQueue;
- (id)indexObjectsInSection:(id)arg1 sectionIndex:(unsigned long long)arg2 fetchedResultsController:(id)arg3;
- (id)initWithLegacyManagedObjectContext:(id)arg1 modernManagedObjectContext:(id)arg2;
- (id)legacyNoteFetchedResultsController;
- (unsigned long long)maximumNumberOfNotesPerAccount;
- (id)modernNoteFetchedResultsController;
- (id)newSnapshotFromIndexWithLegacyManagedObjectContext:(id)arg1 modernManagedObjectContext:(id)arg2;
- (id)nextRelevantItemIdentifierAfter:(id)arg1;
- (bool)pinnedOnly;
- (id)sectionIdentifierForHeaderInSection:(long long)arg1;
- (id)sectionIdentifiersForSectionControllerType:(unsigned long long)arg1;
- (id)sectionIdentifiersToManagedObjectIDs;
- (id)sectionSnapshotsForSectionControllerType:(unsigned long long)arg1 legacyManagedObjectContext:(id)arg2 modernManagedObjectContext:(id)arg3;
- (void)setMaximumNumberOfNotesPerAccount:(unsigned long long)arg1;
- (void)setPinnedOnly:(bool)arg1;
- (void)setShouldIncludeOutlineParentItems:(bool)arg1;
- (void)setSortType:(long long)arg1;
- (long long)sortType;
- (id)sortedSectionIdentifiers;
- (void)willIndex;

@end

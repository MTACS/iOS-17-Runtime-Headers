
@interface ICInvitationsCoreDataIndexer : ICCoreDataIndexer {
    ICAccount * _account;
    NSString * _expansionStateContext;
    NSFetchedResultsController * _fetchedResultsController;
    NSObject<OS_dispatch_queue> * _indexAccessQueue;
    NSMutableOrderedSet * _invitationObjectIDs;
    NSDate * _receivedSince;
    <ICSectionIdentifier> * _sectionIdentifier;
    ICFolderCustomNoteSortType * _sortType;
}

@property (nonatomic, retain) ICAccount *account;
@property (nonatomic, copy) NSString *expansionStateContext;
@property (nonatomic, readonly) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *indexAccessQueue;
@property (nonatomic, readonly) NSMutableOrderedSet *invitationObjectIDs;
@property (nonatomic, copy) NSDate *receivedSince;
@property (nonatomic, readonly) <ICSectionIdentifier> *sectionIdentifier;
@property (nonatomic, retain) ICFolderCustomNoteSortType *sortType;
@property (nonatomic, readonly) unsigned long long totalInvitationsCount;

+ (id)defaultReceivedSince;

- (void).cxx_destruct;
- (id)account;
- (id)activeFetchedResultsControllers;
- (void)deleteObjectWithIDFromIndex:(id)arg1 inSection:(id)arg2;
- (id)expansionStateContext;
- (id)fetchedResultsController;
- (id)firstRelevantItemIdentifier;
- (id)indexAccessQueue;
- (id)indexObjectsInSection:(id)arg1 sectionIndex:(unsigned long long)arg2 fetchedResultsController:(id)arg3;
- (id)initWithModernManagedObjectContext:(id)arg1 sectionIdentifier:(id)arg2;
- (id)invitationObjectIDs;
- (id)newSnapshotFromIndexWithLegacyManagedObjectContext:(id)arg1 modernManagedObjectContext:(id)arg2;
- (id)nextRelevantItemIdentifierAfter:(id)arg1;
- (id)receivedSince;
- (id)sectionIdentifier;
- (id)sectionIdentifierForHeaderInSection:(long long)arg1;
- (id)sectionIdentifiersForSectionControllerType:(unsigned long long)arg1;
- (id)sectionSnapshotsForSectionControllerType:(unsigned long long)arg1 legacyManagedObjectContext:(id)arg2 modernManagedObjectContext:(id)arg3;
- (void)setAccount:(id)arg1;
- (void)setExpansionStateContext:(id)arg1;
- (void)setReceivedSince:(id)arg1;
- (void)setSortType:(id)arg1;
- (id)sortType;
- (unsigned long long)totalInvitationsCount;
- (void)willIndex;

@end

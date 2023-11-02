
@interface ICTagCoreDataIndexer : ICCoreDataIndexer {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSFetchedResultsController * _fetchedResultsController;
    NSArray * _hashtags;
    bool  _includesAllTagsItem;
    bool  _includesNewTagItem;
    NSArray * _leadingVisibleObjectIDs;
    NSArray * _objectIDs;
    <ICSectionIdentifier> * _sectionIdentifier;
    unsigned long long  _visibleTagLimit;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, retain) NSArray *hashtags;
@property (nonatomic, readonly) unsigned long long hiddenTagCount;
@property (nonatomic) bool includesAllTagsItem;
@property (nonatomic) bool includesNewTagItem;
@property (nonatomic, retain) NSArray *leadingVisibleObjectIDs;
@property (nonatomic, retain) NSArray *objectIDs;
@property (nonatomic, retain) <ICSectionIdentifier> *sectionIdentifier;
@property (nonatomic) unsigned long long visibleTagLimit;

+ (bool)isTagItemIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)accessQueue;
- (id)activeFetchedResultsControllers;
- (id)fetchedResultsController;
- (id)hashtags;
- (unsigned long long)hiddenTagCount;
- (bool)includesAllTagsItem;
- (bool)includesNewTagItem;
- (id)indexObjectsInSection:(id)arg1 sectionIndex:(unsigned long long)arg2 fetchedResultsController:(id)arg3;
- (id)initWithModernManagedObjectContext:(id)arg1 sectionIdentifier:(id)arg2;
- (id)leadingVisibleObjectIDs;
- (id)newSnapshotFromIndexWithLegacyManagedObjectContext:(id)arg1 modernManagedObjectContext:(id)arg2;
- (id)nextRelevantItemIdentifierAfter:(id)arg1;
- (id)objectIDs;
- (id)sectionIdentifier;
- (id)sectionIdentifierForHeaderInSection:(long long)arg1;
- (id)sectionIdentifiersForSectionControllerType:(unsigned long long)arg1;
- (id)sectionSnapshotsForSectionControllerType:(unsigned long long)arg1 legacyManagedObjectContext:(id)arg2 modernManagedObjectContext:(id)arg3;
- (void)setAccessQueue:(id)arg1;
- (void)setFetchedResultsController:(id)arg1;
- (void)setHashtags:(id)arg1;
- (void)setIncludesAllTagsItem:(bool)arg1;
- (void)setIncludesNewTagItem:(bool)arg1;
- (void)setLeadingVisibleObjectIDs:(id)arg1;
- (void)setObjectIDs:(id)arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setVisibleTagLimit:(unsigned long long)arg1;
- (unsigned long long)visibleTagLimit;
- (void)willIndex;

@end

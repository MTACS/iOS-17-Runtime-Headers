
@interface BLJaliscoReadOnlyDAAPClient : NSObject <BUAccountsObserving> {
    NSNumber * _currentAccountDSID;
    NSString * _databaseContainerPath;
    NSString * _identifier;
    NSManagedObjectContext * _moc;
    NSManagedObjectModel * _model;
    NSPersistentStoreCoordinator * _psc;
}

@property (nonatomic, retain) NSNumber *currentAccountDSID;
@property (nonatomic, copy) NSString *databaseContainerPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSManagedObjectContext *moc;
@property (nonatomic, retain) NSManagedObjectModel *model;
@property (nonatomic, retain) NSPersistentStoreCoordinator *psc;
@property (readonly) Class superclass;

+ (id)predicateForNonExplicitItems;
+ (id)sharedClient;
+ (id)sortByTitleDescriptor;

- (void).cxx_destruct;
- (id)_itemsFetchRequestForDSIDs:(id)arg1 excludeStoreIDs:(id)arg2 isExplicitRestricted:(bool)arg3;
- (bool)_setupCoreDataStack;
- (void)account:(unsigned long long)arg1 didChangeWithReason:(unsigned long long)arg2;
- (id)currentAccountDSID;
- (id)databaseContainerPath;
- (void)dealloc;
- (id)fetchAllServerItemsForDSIDs:(id)arg1;
- (id)fetchAllServerItemsWithPredicate:(id)arg1 sortDescriptor:(id)arg2;
- (id)fetchItemsForDSIDs:(id)arg1 excludeStoreIDs:(id)arg2 isExplicitRestricted:(bool)arg3;
- (id)fetchItemsForStoreIDs:(id)arg1;
- (id)fetchServerItemsForStoreIDs:(id)arg1 andDSIDS:(id)arg2;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 databaseContainerPath:(id)arg2 accountDSID:(id)arg3;
- (id)moc;
- (id)model;
- (id)p_allItemsFetchRequestForDSIDs:(id)arg1;
- (id)p_allItemsFetchRequestForDSIDs:(id)arg1 matchingSearchString:(id)arg2 isExplicitRestricted:(bool)arg3;
- (bool)p_createPersistentDirectoryIfNeeded;
- (id)p_fetchRequestForStoreIDs:(id)arg1 dsids:(id)arg2;
- (id)p_itemsFetchRequestIncludingHiddenItems:(bool)arg1 dsids:(id)arg2;
- (id)p_persistentStoreDirectory;
- (id)p_persistentStoreFullPathAtSharediBooksLocation;
- (id)predicateForItems:(bool)arg1 dsids:(id)arg2;
- (id)predicateToExcludeStoreIDs:(id)arg1;
- (id)psc;
- (id)searchAllServerItemsForDSIDs:(id)arg1 matchingSearchString:(id)arg2 isExplicitRestricted:(bool)arg3;
- (void)setCurrentAccountDSID:(id)arg1;
- (void)setDatabaseContainerPath:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMoc:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setPsc:(id)arg1;

@end

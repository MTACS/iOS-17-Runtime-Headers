
@interface BLJaliscoServerSource : NSObject {
    NSString * _databaseContainerPath;
    NSString * _identifier;
    NSManagedObjectModel * _model;
    long long  _modelSentinel;
    NSPersistentStoreCoordinator * _psc;
    long long  _pscSentinel;
}

@property (nonatomic, readonly) NSPersistentHistoryToken *currentJaliscoHistoryToken;
@property (nonatomic, retain) NSString *databaseContainerPath;
@property (nonatomic, copy) NSString *identifier;

+ (void)preWarmSync;
+ (void)setSharedSource:(id)arg1;
+ (id)sharedSource;

- (void).cxx_destruct;
- (id)_itemsFetchRequestIncludingHiddenItems:(bool)arg1 dsids:(id)arg2;
- (id)_persistentStoreOptions;
- (bool)_setupCoreDataStack;
- (id)allItemsFetchRequestForDSIDs:(id)arg1;
- (id)currentJaliscoHistoryToken;
- (id)databaseContainerPath;
- (void)dealloc;
- (id)existingEntitiesWithName:(id)arg1 matchingPredicate:(id)arg2 fromManagedObjectContext:(id)arg3 limit:(unsigned long long)arg4 error:(id*)arg5;
- (id)existingServerDatabaseWithPredicate:(id)arg1 fromManagedObjectContext:(id)arg2 error:(id*)arg3;
- (id)existingServerInfoWithPredicate:(id)arg1 fromManagedObjectContext:(id)arg2 error:(id*)arg3;
- (id)existingServerItemWithPredicate:(id)arg1 fromManagedObjectContext:(id)arg2 error:(id*)arg3;
- (id)fetchRequestForAllBookletsIDsWithParentStoreIDs:(id)arg1;
- (id)fetchRequestForAllCloudIDs:(id)arg1 dsids:(id)arg2;
- (id)fetchRequestForAllStoreIDs:(id)arg1;
- (id)fetchRequestForAllStoreIDs:(id)arg1 dsids:(id)arg2;
- (id)fetchRequestForAllStoreIDs:(id)arg1 dsids:(id)arg2 isImported:(bool)arg3;
- (id)fetchRequestForAllStoreIDs:(id)arg1 dsids:(id)arg2 isImported:(bool)arg3 includeHidden:(bool)arg4;
- (id)fetchRequestForAllStoreIDsWithNonEmptyPurchasedToken:(id)arg1 dsids:(id)arg2;
- (id)fetchRequestForBookletItemsForStoreIDs:(id)arg1;
- (id)fetchRequestForBuyParameters:(id)arg1;
- (id)fetchRequestForNeedsImport:(bool)arg1;
- (id)fetchRequestForNotInStoreAccountIDs:(id)arg1;
- (id)fetchRequestForStoreIDs:(id)arg1 dsids:(id)arg2;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 databaseContainerPath:(id)arg2;
- (id)itemsFetchRequestForDSIDs:(id)arg1;
- (id)managedObjectModel;
- (id)newManagedObjectContext;
- (id)newManagedObjectContextWithPrivateQueueConcurrency;
- (bool)p_createPersistentDirectoryIfNeeded;
- (bool)p_databaseExistsAtPrivateiBooksContainerLocation;
- (bool)p_databaseExistsAtSharediBooksContainerLocation;
- (id)p_oldPersistentStoreDirectory;
- (id)p_persistentStoreDirectory;
- (id)p_persistentStoreFullPathAtPrivateiBooksLocation;
- (id)p_persistentStoreFullPathAtSharediBooksLocation;
- (id)persistentStoreCoordinator;
- (id)persistentStoreCoordinatorWithError:(id*)arg1;
- (id)predicateForBookletItems:(bool)arg1 dsids:(id)arg2;
- (id)predicateForItems:(bool)arg1 dsids:(id)arg2;
- (id)predicateForNeedsImport:(bool)arg1;
- (id)predicateForStoreAccountID:(id)arg1 storeIDs:(id)arg2;
- (void)refreshStoreWithCompletion:(id /* block */)arg1;
- (id)serverDatabaseForDSID:(id)arg1 fromManagedObjectContext:(id)arg2 error:(id*)arg3;
- (id)serverDatabaseForDSID:(id)arg1 withIdentifier:(id)arg2 fromManagedObjectContext:(id)arg3 error:(id*)arg4;
- (id)serverInfoForDSID:(id)arg1 fromManagedObjectContext:(id)arg2 error:(id*)arg3;
- (id)serverItemWithStoreID:(id)arg1 inDatabaseWithIdentifier:(id)arg2 forDSID:(id)arg3 fromManagedObjectContext:(id)arg4 error:(id*)arg5;
- (void)setDatabaseContainerPath:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (bool)truncateDatabaseError:(id*)arg1;
- (bool)workaround_18397698;

@end

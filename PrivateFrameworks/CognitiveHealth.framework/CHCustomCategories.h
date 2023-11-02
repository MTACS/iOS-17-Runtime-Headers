
@interface CHCustomCategories : NSObject {
    CHCoreDataController * _coreDataController;
    NSError * _fetchError;
    NSDictionary * _intToUUIDMapping;
    NSPersistentContainer * _persistentContainer;
}

@property (nonatomic, retain) CHCoreDataController *coreDataController;
@property (nonatomic, retain) NSError *fetchError;
@property (nonatomic, retain) NSDictionary *intToUUIDMapping;
@property (nonatomic, retain) NSPersistentContainer *persistentContainer;

+ (void)databaseAssetAvailableStatusWithCompletion:(id /* block */)arg1;
+ (void)downloadDatabaseAssetIfNeeded;
+ (void)downloadDatabaseAssetIfNeededWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)categoriesForBundleId:(id)arg1 completion:(id /* block */)arg2;
- (void)categoriesForBundleIdSet:(id)arg1 completion:(id /* block */)arg2;
- (id)categoryForBundleId:(id)arg1;
- (id)coreDataController;
- (id)customCategoryVersion;
- (id)extractDataFromCoreDataResult:(id)arg1;
- (id)fetchCategoriesForBundleId:(id)arg1;
- (id)fetchError;
- (id)init;
- (id)intToUUIDMapping;
- (id)loadMappingFromFile;
- (id)lockAssetAndReturnAssetPathForFile:(id)arg1 withLockReason:(id)arg2;
- (void)lockAssetWithLockReason:(id)arg1;
- (id)persistentContainer;
- (id)resetTimer;
- (void)setCoreDataController:(id)arg1;
- (void)setFetchError:(id)arg1;
- (void)setIntToUUIDMapping:(id)arg1;
- (void)setPersistentContainer:(id)arg1;

@end

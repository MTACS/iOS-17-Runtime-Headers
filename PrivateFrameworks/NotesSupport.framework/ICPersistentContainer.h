
@interface ICPersistentContainer : NSPersistentContainer {
    bool  _abortAfterReplacingDatabase;
    unsigned long long  _fakeFreeDiskSpace;
    NSMergePolicy * _mergePolicy;
    NSDictionary * _storeOptions;
    NSString * _storeType;
    NSURL * _storeURL;
}

@property (nonatomic) bool abortAfterReplacingDatabase;
@property (nonatomic, readonly) NSURL *backupsDirectoryURL;
@property (nonatomic) unsigned long long fakeFreeDiskSpace;
@property (nonatomic, retain) NSMergePolicy *mergePolicy;
@property (nonatomic, retain) NSDictionary *storeOptions;
@property (nonatomic, retain) NSString *storeType;
@property (nonatomic, retain) NSURL *storeURL;

+ (id)databaseOpenLock;
+ (bool)isDataProtectionError:(id)arg1;
+ (bool)isDatabaseMissingError:(id)arg1;
+ (id)managedObjectModel;
+ (id)oldManagedObjectModel;
+ (id)standardStoreOptions;

- (void).cxx_destruct;
- (bool)abortAfterReplacingDatabase;
- (bool)allowsCoreDataMigration;
- (void)backupPersistentStore;
- (id)backupsDirectoryURL;
- (unsigned long long)fakeFreeDiskSpace;
- (id)initWithStoreURL:(id)arg1 storeType:(id)arg2 options:(id)arg3 mergePolicy:(id)arg4;
- (id)initWithStoreURL:(id)arg1 storeType:(id)arg2 options:(id)arg3 mergePolicy:(id)arg4 managedObjectModel:(id)arg5;
- (bool)isReadOnly;
- (bool)isTooLowOnDiskSpace;
- (bool)loadPersistentStore:(id*)arg1;
- (bool)loadPersistentStore:(id*)arg1 storeCreatedHandler:(id /* block */)arg2;
- (id)mergePolicy;
- (bool)migrateFromOldDataModel;
- (id)newBackgroundContext;
- (id)performBlockWithDatabaseOpenLock:(id /* block */)arg1;
- (void)setAbortAfterReplacingDatabase:(bool)arg1;
- (void)setFakeFreeDiskSpace:(unsigned long long)arg1;
- (void)setMergePolicy:(id)arg1;
- (void)setStoreOptions:(id)arg1;
- (void)setStoreType:(id)arg1;
- (void)setStoreURL:(id)arg1;
- (void)setupPersistentStoreDescriptions;
- (void)setupViewContext;
- (id)storeOptions;
- (id)storeType;
- (id)storeURL;
- (void)vacuumStore;
- (void)vacuumStoreWithCompletionHandler:(id /* block */)arg1;

@end

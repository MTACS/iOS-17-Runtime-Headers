
@interface WBSWebExtensionSQLiteStore : NSObject {
    NSString * _composedIdentifier;
    WBSSQLiteDatabase * _database;
    NSObject<OS_dispatch_queue> * _databaseQueue;
    NSString * _profileServerID;
    bool  _useInMemoryDatabase;
}

@property (nonatomic, readonly) int _currentDatabaseSchemaVersion;
@property (nonatomic, readonly) NSURL *_databaseURL;
@property (nonatomic, copy) NSString *profileServerID;
@property (nonatomic, readonly) bool useInMemoryDatabase;

+ (id)_urlForExtensionStorageFolderWithIdentifier:(id)arg1 profileServerID:(id)arg2;
+ (void)deleteStorageForComposedIdentifier:(id)arg1 profileServerID:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (int)_createFreshDatabaseSchema;
- (int)_currentDatabaseSchemaVersion;
- (id)_databaseURL;
- (id)_deleteDatabase;
- (id)_deleteDatabaseFileAtURL:(id)arg1 reopenDatabase:(bool)arg2;
- (id)_deleteDatabaseIfEmpty;
- (void)_deleteExtensionStorageFolderIfEmpty;
- (id)_handleSchemaVersioningWithDeleteDatabaseFileOnError:(bool)arg1;
- (bool)_isDatabaseEmpty;
- (bool)_isDatabaseOpen;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
- (id)_openDatabase:(id)arg1 deleteDatabaseFileOnError:(bool)arg2;
- (bool)_openDatabaseIfNecessaryReturningErrorMessage:(id*)arg1;
- (int)_resetDatabaseSchema;
- (id)_savepointNameFromUUID:(id)arg1;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (void)_vacuum;
- (void)commitSavepoint:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)createSavepointWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)deleteDatabaseWithCompletionHandler:(id /* block */)arg1;
- (id)initWithComposedIdentifier:(id)arg1 profileServerID:(id)arg2 usesInMemoryDatabase:(bool)arg3;
- (id)profileServerID;
- (void)rollbackToSavepoint:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setProfileServerID:(id)arg1;
- (bool)useInMemoryDatabase;

@end

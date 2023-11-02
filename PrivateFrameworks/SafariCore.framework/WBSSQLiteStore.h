
@interface WBSSQLiteStore : NSObject {
    WBSSQLiteDatabase * _database;
    int  _databaseCoordinationLockFileDescriptor;
    long long  _databaseLockingPolicy;
    NSObject<OS_dispatch_queue> * _databaseQueue;
    NSURL * _databaseURL;
    <WBSSQLiteStoreDelegate> * _delegate;
    bool  _fallBackToMemoryStoreIfError;
    long long  _protectionType;
}

@property (nonatomic, readonly) WBSSQLiteDatabase *database;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *databaseQueue;
@property (nonatomic, readonly) NSURL *databaseURL;
@property (nonatomic) <WBSSQLiteStoreDelegate> *delegate;
@property (nonatomic, readonly) bool isOpen;

- (void).cxx_destruct;
- (bool)_acquireDatabaseCoordinationLockForDatabaseURL:(id)arg1;
- (void)_closeDatabase;
- (bool)_confirmDatabaseIntegrityIsOK;
- (int)_createFreshDatabaseSchema;
- (int)_currentSchemaVersion;
- (id)_databaseCoordinationLockURLForDatabaseURL:(id)arg1;
- (void)_databaseWillClose;
- (void)_handleOpenFailureWithStatus:(long long)arg1 completionHandler:(id /* block */)arg2;
- (bool)_isDatabaseLocked;
- (int)_migrateToCurrentSchemaVersionIfNecessary;
- (int)_migrateToSchemaVersion:(int)arg1;
- (void)_openDatabase:(id)arg1 createIfNeeded:(bool)arg2 checkIntegrity:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_releaseDatabaseCoordinationLock;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (void)closeWithCompletionHandler:(id /* block */)arg1;
- (id)database;
- (id)databaseQueue;
- (id)databaseURL;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 protectionType:(long long)arg2;
- (bool)isOpen;
- (void)openAndCheckIntegrity:(bool)arg1 createIfNeeded:(bool)arg2 fallBackToMemoryStoreIfError:(bool)arg3 lockingPolicy:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)savePendingChangesBeforeTermination;
- (void)setDelegate:(id)arg1;

@end

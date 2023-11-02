
@interface ACDDatabase : NSObject <ACDDatabaseConnectionDelegate, ACDDatabaseProtocol> {
    NSURL * _databaseURL;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
    NSDictionary * _storeOptions;
}

@property (nonatomic, readonly) NSURL *databaseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (id)_addPersistentStoreWithType:(id)arg1 configuration:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (id)_backupURL;
- (bool)_performBackupToURL:(id)arg1 unverifiedBackupURL:(id)arg2 error:(id*)arg3;
- (bool)_persistentStoreCoodinator_resetPersistentStoreCoordinatorWithError:(id*)arg1;
- (bool)_shouldResetPersistentStoreAfterError:(id)arg1;
- (id)_unverifiedBackupURL;
- (id)createConnection;
- (void)databaseConnection:(id)arg1 encounteredUnrecoverableError:(id)arg2;
- (id)databaseURL;
- (id)description;
- (id)init;
- (id)initWithDatabaseURL:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1 storeOptions:(id)arg2;
- (bool)performBackupReturningError:(id*)arg1;
- (bool)resetReturningError:(id*)arg1;
- (bool)restoreFromBackupReturningError:(id*)arg1;

@end

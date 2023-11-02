
@interface _DPCoreDataStorage : NSObject {
    _DPDataProtectionStateMonitor * _dataProtectionMonitor;
    NSString * _databaseDirectory;
    NSString * _databaseName;
    NSMutableDictionary * _managedObjectContexts;
    NSManagedObjectModel * _managedObjectModel;
    NSURL * _modelURL;
    NSDictionary * _paths;
    NSMutableDictionary * _persistentStoreCoordinators;
    NSObject<OS_dispatch_queue> * _queueMOC;
    NSObject<OS_dispatch_queue> * _queuePSC;
    bool  _readOnly;
}

@property (nonatomic, readonly) _DPDataProtectionStateMonitor *dataProtectionMonitor;
@property (nonatomic, readonly, copy) NSString *databaseDirectory;
@property (nonatomic, readonly, copy) NSString *databaseName;
@property (nonatomic, readonly) NSMutableDictionary *managedObjectContexts;
@property (nonatomic, retain) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, readonly) NSURL *modelURL;
@property (nonatomic, readonly) NSDictionary *paths;
@property (nonatomic, readonly) NSMutableDictionary *persistentStoreCoordinators;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queueMOC;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queuePSC;
@property (nonatomic, readonly) bool readOnly;

+ (unsigned long long)countObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3;
+ (bool)createDatabaseDirectory:(id)arg1 error:(id*)arg2;
+ (unsigned long long)deleteObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 fetchOffset:(unsigned long long)arg5 fetchLimit:(unsigned long long)arg6;
+ (id)persistentStoreOptionsFor:(id)arg1 readOnly:(bool)arg2;
+ (id)storageWithDirectory:(id)arg1 databaseName:(id)arg2 modelURL:(id)arg3 readOnly:(bool)arg4;

- (void).cxx_destruct;
- (unsigned long long)countObjectsForEntities:(id)arg1 predicate:(id)arg2;
- (id)dataProtectionMonitor;
- (id)databaseDirectory;
- (id)databaseName;
- (bool)deleteDatabaseForPSC:(id)arg1 protectionClass:(id)arg2 obliterate:(bool)arg3;
- (unsigned long long)deleteObjectsOlderThanDate:(id)arg1 entities:(id)arg2 limit:(unsigned long long)arg3;
- (unsigned long long)deleteOldObjectsToLimitTotalNumber:(unsigned long long)arg1 entities:(id)arg2 limit:(unsigned long long)arg3;
- (bool)deleteStorageFor:(id)arg1 obliterate:(bool)arg2;
- (unsigned long long)deleteSubmittedRecords:(unsigned long long)arg1 entities:(id)arg2 limit:(unsigned long long)arg3;
- (unsigned long long)deleteVersionMismatchRecords:(unsigned long long)arg1 entities:(id)arg2 limit:(unsigned long long)arg3;
- (void)handleDataProtectionChangeFor:(id)arg1 willBeAvailable:(bool)arg2;
- (void)handleDatabaseErrors:(id)arg1 forPSC:(id)arg2 protectionClass:(id)arg3;
- (id)init;
- (id)initWithDirectory:(id)arg1 databaseName:(id)arg2 modelURL:(id)arg3 readOnly:(bool)arg4;
- (void)invalidateManagedObjectContextFor:(id)arg1;
- (void)invalidatePersistentStoreCoordinatorFor:(id)arg1;
- (id)managedObjectContexts;
- (id)managedObjectModel;
- (id)mocForProtectionClass:(id)arg1;
- (id)modelURL;
- (id)paths;
- (id)persistentStoreCoordinatorFor:(id)arg1;
- (id)persistentStoreCoordinators;
- (id)queueMOC;
- (id)queuePSC;
- (bool)readOnly;
- (void)setManagedObjectModel:(id)arg1;

@end
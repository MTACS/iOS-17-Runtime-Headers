
@interface _DKCoreDataStorage : NSObject {
    NSString * _containerIdentifier;
    _DKDataProtectionStateMonitor * _dataProtectionMonitor;
    NSString * _databaseName;
    <_DKCoreDataStorageDelegate> * _delegate;
    NSString * _directory;
    NSFileManager * _fm;
    bool  _isDatabaseManager;
    bool  _isManagedDatabase;
    bool  _localOnly;
    bool  _maintenanceRunning;
    NSMapTable * _managedObjectContexts;
    NSManagedObjectModel * _managedObjectModel;
    NSCloudKitMirroringDelegate * _mirroringDelegate;
    NSURL * _modelURL;
    NSMutableDictionary * _paths;
    NSMutableDictionary * _persistentStoreCoordinators;
    bool  _readOnly;
    bool  _requiresManualMigration;
    bool  _sync;
}

@property (readonly) NSString *containerIdentifier;
@property (readonly) NSString *databaseName;
@property <_DKCoreDataStorageDelegate> *delegate;
@property (readonly) NSString *directory;
@property (readonly) bool localOnly;
@property (readonly) NSCloudKitMirroringDelegate *mirroringDelegate;
@property (readonly) NSURL *modelURL;
@property (readonly) bool readOnly;
@property (nonatomic) bool requiresManualMigration;
@property (readonly) bool sync;

+ (unsigned long long)anonymizeObjectStringsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 batchFetchLimit:(unsigned long long)arg5 totalFetchLimit:(unsigned long long)arg6 includeSubentities:(bool)arg7 salt:(id)arg8;
+ (unsigned long long)anonymizeStringAttributesOfManagedObject:(id)arg1 withSalt:(id)arg2;
+ (unsigned long long)countObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 includeSubentities:(bool)arg4 includePendingChanges:(bool)arg5;
+ (unsigned long long)deleteObjectsIfNeededToLimitTotal:(unsigned long long)arg1 context:(id)arg2 entityName:(id)arg3 predicate:(id)arg4 sortDescriptors:(id)arg5 fetchLimit:(unsigned long long)arg6 includeSubentities:(bool)arg7 includePendingChanges:(bool)arg8;
+ (unsigned long long)deleteObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 fetchLimit:(unsigned long long)arg5 includeSubentities:(bool)arg6 includePendingChanges:(bool)arg7;
+ (unsigned long long)deleteObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 fetchOffset:(unsigned long long)arg5 fetchLimit:(unsigned long long)arg6 includeSubentities:(bool)arg7 includePendingChanges:(bool)arg8;
+ (unsigned long long)deleteOrphanedEntitiesInContext:(id)arg1;
+ (unsigned long long)updateObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 batchFetchLimit:(unsigned long long)arg5 totalFetchLimit:(unsigned long long)arg6 includeSubentities:(bool)arg7 updateBlock:(id /* block */)arg8;

- (void).cxx_destruct;
- (void)closeStorageForProtectionClass:(id)arg1;
- (bool)confirmDatabaseConnectionFor:(id)arg1;
- (id)containerIdentifier;
- (id)copyStorageFor:(id)arg1 toDirectory:(id)arg2;
- (id)databaseName;
- (void)dealloc;
- (id)delegate;
- (bool)deleteStorageFor:(id)arg1;
- (id)directory;
- (id)init;
- (id)initWithDirectory:(id)arg1 databaseName:(id)arg2 modelURL:(id)arg3 readOnly:(bool)arg4 localOnly:(bool)arg5;
- (id)initWithDirectory:(id)arg1 databaseName:(id)arg2 modelURL:(id)arg3 sync:(bool)arg4;
- (bool)isManagedObjectContextFor:(id)arg1 equalToManagedObjectContext:(id)arg2;
- (bool)isManagedObjectModel:(id)arg1 compatibleWithPersistentStoreAtURL:(id)arg2 error:(id*)arg3;
- (bool)localOnly;
- (id)managedObjectContextFor:(id)arg1;
- (id)managedObjectContextFor:(id)arg1 identifier:(id)arg2;
- (id)managedObjectModel;
- (id)managedObjectModelForVersion:(unsigned long long)arg1;
- (id)managedObjectModelURLForVersion:(unsigned long long)arg1;
- (bool)migratePersistentStoreAtURL:(id)arg1 toManagedObjectModel:(id)arg2 protectionClass:(id)arg3 error:(id*)arg4;
- (id)mirroringDelegate;
- (id)modelURL;
- (long long)modelVersionForStoreAtURL:(id)arg1 error:(id*)arg2;
- (id)persistentStoreCoordinatorFor:(id)arg1;
- (id)privateManagedObjectContextFor:(id)arg1;
- (bool)readOnly;
- (bool)requiresManualMigration;
- (void)setDelegate:(id)arg1;
- (void)setManagedObjectModel:(id)arg1;
- (void)setRequiresManualMigration:(bool)arg1;
- (bool)sync;

@end

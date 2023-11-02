
@interface AnalyticsWorkspace : NSObject <NSCopying> {
    NSXPCConnection * __connection;
    NSManagedObjectContext * __mainObjectContext;
    NSManagedObjectModel * __objectModel;
    bool  __persistent;
    NSPersistentStoreCoordinator * __persistentStoreCoordinator;
    id /* block */  __resetCompletionBlock;
    bool  _forceDeleteFile;
    bool  _forceDestroyPersistentStore;
    bool  _forceIntegrityCheck;
    <AnalyticsWorkspaceHealthDelegate> * _healthDelegate;
    bool  _integrityCheckFailed;
    NSString * _objectModelName;
    NSBundle * _objectModelResidentBundle;
    NSError * _persistentStoreError;
    NSString * backingStore;
    bool  pathKnownToFail;
    bool  readOnly;
    NSString * storeKind;
    NSString * storeProt;
}

@property (nonatomic, readonly, retain) NSXPCConnection *connection;
@property (nonatomic) bool forceDeleteFile;
@property (nonatomic) bool forceDestroyPersistentStore;
@property (nonatomic) bool forceIntegrityCheck;
@property (nonatomic, retain) <AnalyticsWorkspaceHealthDelegate> *healthDelegate;
@property (nonatomic, readonly) bool integrityCheckFailed;
@property (nonatomic, readonly, retain) NSManagedObjectContext *mainObjectContext;
@property (nonatomic, readonly, retain) NSManagedObjectModel *objectModel;
@property (nonatomic, retain) NSString *objectModelName;
@property (nonatomic, retain) NSBundle *objectModelResidentBundle;
@property (nonatomic, readonly) bool persistent;
@property (nonatomic, readonly, retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, retain) NSError *persistentStoreError;
@property (nonatomic, copy) id /* block */ resetCompletionBlock;

+ (id)defaultWorkspace;
+ (void)initialize;
+ (void)retrieveWorkspaceWithName:(id)arg1 atPath:(id)arg2 queue:(id)arg3 resultCallback:(id /* block */)arg4;
+ (id)workspaceWithName:(id)arg1 atPath:(id)arg2 objectModelName:(id)arg3 objectModelBundle:(id)arg4 useReadOnly:(bool)arg5;
+ (id)workspaceWithName:(id)arg1 atPath:(id)arg2 objectModelName:(id)arg3 objectModelBundle:(id)arg4 useReadOnly:(bool)arg5 legacyDBContainerPathToMigrate:(id)arg6;
+ (id)workspaceWithName:(id)arg1 atPath:(id)arg2 useReadOnly:(bool)arg3;

- (void).cxx_destruct;
- (id)_cloneInternal:(id)arg1 intoWorkspace:(id)arg2 ancestry:(id)arg3 iteration:(unsigned long long)arg4 mustFail:(bool*)arg5;
- (id)_initWithName:(id)arg1 inMemory:(bool)arg2 useReadOnly:(bool)arg3 customModelName:(id)arg4 loadModelFromBundle:(id)arg5;
- (void)_migrateDBFile:(id)arg1;
- (bool)_primePath:(id)arg1;
- (bool)canCloneObjectsOfType:(id)arg1;
- (id)cloneObject:(id)arg1 intoWorkspace:(id)arg2;
- (id)connection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createNewContext;
- (void)dealloc;
- (void)enumerateResidentObjectsOfType:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)forceDeleteFile;
- (bool)forceDestroyPersistentStore;
- (bool)forceIntegrityCheck;
- (id)healthDelegate;
- (id)initInMemoryWorkspaceWithName:(id)arg1 customModelName:(id)arg2 objectModelBundle:(id)arg3;
- (id)initWorkspaceWithName:(id)arg1 atPath:(id)arg2 objectModelName:(id)arg3 objectModelBundle:(id)arg4 useReadOnly:(bool)arg5;
- (id)initWorkspaceWithName:(id)arg1 atPath:(id)arg2 useReadOnly:(bool)arg3;
- (id)initWorkspaceWithService:(id)arg1;
- (bool)integrityCheckFailed;
- (id)mainObjectContext;
- (id)objectModel;
- (id)objectModelName;
- (id)objectModelResidentBundle;
- (bool)persistent;
- (id)persistentStoreCoordinator;
- (id)persistentStoreError;
- (void)reset;
- (id /* block */)resetCompletionBlock;
- (bool)save;
- (bool)setCustomPersistenceProperties:(id)arg1;
- (void)setForceDeleteFile:(bool)arg1;
- (void)setForceDestroyPersistentStore:(bool)arg1;
- (void)setForceIntegrityCheck:(bool)arg1;
- (void)setHealthDelegate:(id)arg1;
- (void)setObjectModelName:(id)arg1;
- (void)setObjectModelResidentBundle:(id)arg1;
- (void)setPersistentStoreError:(id)arg1;
- (void)setResetCompletionBlock:(id /* block */)arg1;

@end

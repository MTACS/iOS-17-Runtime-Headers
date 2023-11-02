
@interface PLPersistentContainer : NSObject <PLPersistentContainerStoreAccess> {
    bool  _didConfigurePersistentStore;
    bool  _didConfigureXPCStore;
    PLLazyObject * _lazyAssetdClient;
    NSURL * _libraryURL;
    NSPersistentStoreCoordinator * _sharedPersistentStoreCoordinator;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sharedPersistentStoreCoordinatorLock;
    bool  _sharedPersistentStoreCoordinatorRemoved;
    <PLXPCPhotoLibraryStorePolicy> * _xpcStorePolicy;
}

@property (nonatomic, readonly) bool didConfigurePersistentStore;
@property (nonatomic, readonly) bool didConfigureXPCStore;
@property (readonly) NSURL *libraryURL;
@property (readonly) NSPersistentStoreCoordinator *sharedPersistentStoreCoordinator;
@property (retain) <PLXPCPhotoLibraryStorePolicy> *xpcStorePolicy;

+ (bool)_destroyPhotosDatabaseWithPath:(id)arg1 backupToPath:(id)arg2;
+ (void)_getPersistentStoreURL:(id*)arg1 options:(id*)arg2 forDatabasePath:(id)arg3 enableOrderKeyNotifications:(bool)arg4;
+ (long long)_migrateOrRebuildDatabaseWithSharedPersistentStoreCoordinator:(id)arg1 modelMigrator:(id)arg2 migrationPolicy:(unsigned int)arg3 error:(id*)arg4;
+ (long long)_openAndMigrateStoreWithURL:(id)arg1 options:(id)arg2 coordinator:(id)arg3 modelMigrator:(id)arg4 migrationPolicy:(unsigned int)arg5 error:(id*)arg6;
+ (bool)currentModelVersionMatchesLibrarySchemaVersionWithPathManager:(id)arg1 error:(id*)arg2;
+ (void)getConfigurationForDatabasePath:(id)arg1 withBlock:(id /* block */)arg2;
+ (void)getPersistentStoreURL:(id*)arg1 options:(id*)arg2 forDatabasePath:(id)arg3;
+ (int)librarySchemaVersionWithPathManager:(id)arg1 error:(id*)arg2;
+ (id)managedObjectModel;
+ (id)managedObjectModelURL;
+ (void)removePhotosDatabaseWithPathManager:(id)arg1;
+ (bool)shouldTrackIndexUse;

- (void).cxx_destruct;
- (bool)_configurePersistentStoreCoordinator:(id)arg1 overrideCurrentModelVersionInStore:(bool)arg2 error:(id*)arg3;
- (bool)_configureXPCPersistentStoreCoordinator:(id)arg1 error:(id*)arg2;
- (void)_setTestDidConfigureXPCStore:(bool)arg1;
- (long long)configureSharedPersistentStoreCoordinatorAndMigrateOrRebuildIfNecessaryWithModelMigrator:(id)arg1 migrationPolicy:(unsigned int)arg2 error:(id*)arg3;
- (void)dealloc;
- (bool)didConfigurePersistentStore;
- (bool)didConfigureXPCStore;
- (id)initWithLibraryURL:(id)arg1 lazyAssetsdClient:(id)arg2;
- (id)libraryURL;
- (id)newPersistentStoreCoordinatorForMigration:(id*)arg1;
- (id)newSharedPersistentStoreCoordinator;
- (void)removeSharedPersistentStoreCoordinator;
- (void)setXpcStorePolicy:(id)arg1;
- (id)sharedPersistentStoreCoordinator;
- (bool)shouldUseXPCPhotoLibraryStore;
- (id)xpcStorePolicy;

@end

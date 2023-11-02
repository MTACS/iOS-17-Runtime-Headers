
@interface BCCloudDataSource : NSObject <BDSCloudKitSupportSignOutDeleteWithoutInstance> {
    NSManagedObjectContext * _managedObjectContext;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
}

@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (id)_documentsDirectoryURL;
+ (id)_sharedLegacyRootDirectoryURL;
+ (id)_sharedRootDirectoryURL;
+ (void)deleteCloudDataWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (bool)_addStoreAtURL:(id)arg1;
- (void)_createDirectoryForStoreAtURL:(id)arg1;
- (void)_deleteDirectoryForStoreAtURL:(id)arg1;
- (bool)_directoryExistsForStoreAtURL:(id)arg1;
- (void)_logIf:(bool)arg1 error:(id)arg2 operation:(id)arg3;
- (void)_migrateAndDestroyStoreAtLegacyURL:(id)arg1 toModernURL:(id)arg2;
- (id)_persistentStoreOptions;
- (void)_setupManagedObjectContext;
- (bool)_setupPersistentStoreWithRootDirectoryURL:(id)arg1 legacyRootDirectoryURL:(id)arg2 nameOnDisk:(id)arg3;
- (id)initWithManagedObjectModel:(id)arg1;
- (id)initWithManagedObjectModel:(id)arg1 nameOnDisk:(id)arg2;
- (id)initWithManagedObjectModel:(id)arg1 rootDirectoryURL:(id)arg2 legacyRootDirectoryURL:(id)arg3 nameOnDisk:(id)arg4;
- (id)managedObjectContext;
- (id)persistentStoreCoordinator;
- (void)setManagedObjectContext:(id)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1;

@end

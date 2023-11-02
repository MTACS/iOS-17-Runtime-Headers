
@interface MTConstants : NSObject

+ (void)_repairFilePermissionsIfNeeded;
+ (id)_watchManagedAssetsDirectoryURL;
+ (id)artworkAssetURL;
+ (id)attributesForNewDirectory;
+ (id)cachesDirectory;
+ (id)dataAssetsCacheURL;
+ (id)documentsDirectory;
+ (bool)excludeDirectoryFromBackup:(id)arg1;
+ (id)libraryDirectory;
+ (id)managedAssetsDirectoryURL;
+ (id)managedObjectModelDefinitionURL;
+ (void)removeExcludeFromBackupFlagFromDirectoryIfNeeded:(id)arg1;
+ (void)repairPermissionsOfDirectoryIfNeeded:(id)arg1;
+ (id)sharedAssetsCacheURL;
+ (id)sharedCacheDirectory;
+ (id)sharedContainerURL;
+ (id)sharedDocumentsDirectory;

@end

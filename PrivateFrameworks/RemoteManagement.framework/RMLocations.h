
@interface RMLocations : NSObject

+ (id)URLWithResolvedSymlinksFromURL:(id)arg1 error:(id*)arg2;
+ (id)_applicationSupportChildDirectoryURLInDomain:(long long)arg1 createIfNeeded:(bool)arg2 childName:(id)arg3 descriptor:(id)arg4;
+ (id)_dataVaultChildDirectoryURLInDomain:(long long)arg1 createIfNeeded:(bool)arg2 childName:(id)arg3 descriptor:(id)arg4;
+ (void)_oneTimeDataVaultConversionInDomain:(long long)arg1 dataVaultDirectoryURL:(id)arg2;
+ (id)_rootDirectoryURLInDomain:(long long)arg1 error:(id*)arg2;
+ (id)baseDirectoryURLCreateIfNeeded:(bool)arg1;
+ (id)baseDirectoryURLInDomain:(long long)arg1 createIfNeeded:(bool)arg2;
+ (long long)currentDomain;
+ (id)darwinCacheDirectoryURL;
+ (id)darwinTemporaryDirectoryURL;
+ (id)darwinUserDirectoryURL;
+ (id)dataVaultDirectoryURLCreateIfNeeded:(bool)arg1;
+ (id)dataVaultDirectoryURLInDomain:(long long)arg1 createIfNeeded:(bool)arg2;
+ (id)defaultsOverrideFileURLCreateIfNeeded:(bool)arg1;
+ (id)defaultsOverrideFileURLInDomain:(long long)arg1 createIfNeeded:(bool)arg2;
+ (bool)fixFilePermissionsForURL:(id)arg1;
+ (id)homeDirectoryURL;
+ (id)httpLoggingDirectoryURLCreateIfNeeded:(bool)arg1;
+ (id)httpLoggingDirectoryURLInDomain:(long long)arg1 createIfNeeded:(bool)arg2;
+ (id)identityDirectoryURLCreateIfNeeded:(bool)arg1;
+ (id)identityDirectoryURLInDomain:(long long)arg1 createIfNeeded:(bool)arg2;
+ (id)managedObjectModelURL;
+ (id)migrationStatusFileURLCreateIfNeeded:(bool)arg1;
+ (id)migrationStatusFileURLInDomain:(long long)arg1 createIfNeeded:(bool)arg2;
+ (id)oldBaseDirectoryURLInSystemDomain;
+ (id)persistentStoreDirectoryURLCreateIfNeeded:(bool)arg1;
+ (id)persistentStoreDirectoryURLInDomain:(long long)arg1 createIfNeeded:(bool)arg2;
+ (id)persistentStoreURLCreateIfNeeded:(bool)arg1;
+ (id)persistentStoreURLInDomain:(long long)arg1 createIfNeeded:(bool)arg2;
+ (id)statusDirectoryURLCreateIfNeeded:(bool)arg1;
+ (id)statusDirectoryURLInDomain:(long long)arg1 createIfNeeded:(bool)arg2;
+ (id)xpcServiceDirectoryURL;

@end

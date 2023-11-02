
@interface BMPaths : NSObject

+ (id)_biomeDirectoryForDomain:(unsigned long long)arg1 options:(unsigned long long)arg2;
+ (id)_biomeSystemDataDirectory;
+ (id)_biomeUserDataDirectory:(unsigned long long)arg1;
+ (id)_pathForLibraryStreamWithDomain:(unsigned long long)arg1;
+ (id)_pathForTesting;
+ (id)_systemRoot;
+ (id)_userHome;
+ (id)basePathForTesting;
+ (id)biomeDirectoryForDomain:(unsigned long long)arg1;
+ (id)biomeTemporaryDirectoryForDomain:(unsigned long long)arg1;
+ (id)computeDirectoryForDomain:(unsigned long long)arg1;
+ (id)databaseDirectoryForDomain:(unsigned long long)arg1;
+ (bool)getServiceDomain:(unsigned long long*)arg1 subpath:(id*)arg2 forPath:(id)arg3;
+ (bool)isTestPathOverridden;
+ (id)localComputeDirectory;
+ (id)localFlexibleStorageDirectory;
+ (id)optionalBiomeDirectoryForDomainUser;
+ (id)pathComponentForStreamType:(unsigned long long)arg1;
+ (id)pathForDatabase:(id)arg1;
+ (id)pathForResource:(id)arg1;
+ (id)pathForResource:(id)arg1 ofType:(unsigned long long)arg2;
+ (id)pathForSharedCurrentAccountStreamType:(unsigned long long)arg1 domain:(unsigned long long)arg2;
+ (id)pathForSharedSyncUserIdentifier:(id)arg1 streamType:(unsigned long long)arg2 domain:(unsigned long long)arg3;
+ (id)pathForStreamIdentifier:(id)arg1 streamType:(unsigned long long)arg2;
+ (id)pathForStreamType:(unsigned long long)arg1 domain:(unsigned long long)arg2;
+ (bool)pathIsManaged:(id)arg1 domain:(unsigned long long*)arg2;
+ (id)privacyPathname:(id)arg1;
+ (id)privacyURLToString:(id)arg1;
+ (void)setBasePathForTestingWithPath:(id)arg1;
+ (id)sharedSyncDirectoryForDomain:(unsigned long long)arg1;
+ (id)syncDirectory;
+ (void)unsetBasePathForTesting;

@end

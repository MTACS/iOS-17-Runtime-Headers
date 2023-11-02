
@interface PLPhotoLibraryPathManagerUBF : PLPhotoLibraryPathManagerCore {
    NSString * _databaseDirectory;
    NSString * _derivativesDirectory;
    NSString * _derivativesMasterThumbsDirectory;
    NSString * _derivativesThumbsDirectory;
    NSString * _externalDirectory;
    NSFileManager * _fm;
    NSString * _internalDirectory;
    NSString * _journalsDirectory;
    NSString * _originalsDirectory;
    NSString * _privateCacheDirectory;
    NSString * _privateDirectory;
    NSString * _rendersDirectory;
    NSString * _resourcesAnalyticsDirectory;
    NSString * _resourcesCPLDataDirectory;
    NSString * _resourcesComputeDirectory;
    NSString * _resourcesDirectory;
    NSString * _resourcesPartialVideoDirectory;
    NSString * _resourcesPhotoStreamsDataDirectory;
    NSString * _resourcesProjectsDataDirectory;
    NSString * _resourcesProjectsLegacyDirectory;
    NSString * _resourcesSmartSharingDirectory;
    NSString * _scopesBaseDirectory;
    NSString * _scopesLockedDirectory;
    NSString * _scopesMomentSharedDirectory;
    NSString * _scopesPhotoCloudSharingCacheDirectory;
    NSString * _scopesPhotoCloudSharingDataDirectory;
    NSString * _scopesPhotoCloudSharingDirectory;
    NSString * _scopesPhotoCloudSharingMetadataDirectory;
    NSString * _scopesSyndicationDirectory;
    NSString * _searchDatabaseDirectory;
}

+ (id)allPhotosPathsOnThisDevice;

- (void).cxx_destruct;
- (id)_externalDirectoryWithBundleIdentifier:(id)arg1 createIfNeeded:(bool)arg2;
- (id)_scopedInternalPathManagerWithBundleScope:(unsigned short)arg1;
- (id)addToPath:(id)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)assetAbbreviatedMetadataDirectoryForDirectory:(id)arg1 type:(unsigned char)arg2 bundleScope:(unsigned short)arg3;
- (id)assetMainFilePathWithDirectory:(id)arg1 filename:(id)arg2 bundleScope:(unsigned short)arg3;
- (id)basePrivateDirectoryPath;
- (id)convertPhotoLibraryPathType:(unsigned char)arg1;
- (id)corePathsWithError:(id*)arg1 directDatabaseAccess:(bool)arg2 limitedLibrary:(bool)arg3;
- (bool)createPathsForNewLibrariesWithError:(id*)arg1;
- (bool)ensureFileProviderSyncExclusionAttributeIsSetWithError:(id*)arg1;
- (void)enumerateBundleScopesWithBlock:(id /* block */)arg1;
- (id)extendedPathsWithError:(id*)arg1;
- (id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)initWithLibraryURL:(id)arg1 bundleScope:(unsigned short)arg2;
- (id)internalDirectoryWithSubType:(unsigned char)arg1 additionalPathComponents:(id)arg2;
- (bool)isDeviceRestoreSupported;
- (void)obtainAccessAndWaitWithFileWithIdentifier:(id)arg1 mode:(unsigned char)arg2 toURLWithHandler:(id /* block */)arg3;
- (id)pathToAssetsToAlbumsMapping;
- (id)pathsForClientAccess:(id)arg1;
- (id)pathsForExternalWriters;
- (id)pathsForFinderSyncFilesystemSizeCalculation;
- (id)pathsForLibraryFilesystemSizeCalculation;
- (id)pathsForPermissionCheck;
- (id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (unsigned char)photoLibraryPathTypeForBundleScope:(unsigned short)arg1;
- (id)photosDatabasePath;
- (id)privateCacheDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)readOnlyUrlWithIdentifier:(id)arg1;
- (void)setExtendedAttributesWithIdentifier:(id)arg1;
- (void)setExtendedAttributesWithIdentifier:(id)arg1 andURL:(id)arg2;
- (bool)shouldUseFileIdentifierForBundleScope:(unsigned short)arg1;
- (id)syncInfoPath;
- (bool)updateTimeMachineExclusionAttributeForExcludePath:(id)arg1 error:(id*)arg2;
- (id)urlWithIdentifier:(id)arg1;

@end

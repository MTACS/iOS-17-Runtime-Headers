
@protocol PLPhotoLibraryPathManagerCore <NSObject>

@required

+ (bool)ignoreFilesystemCheckForWellKnownPhotoLibraryIdentifier:(long long)arg1;
+ (bool)isSystemPhotoLibraryURL:(NSURL *)arg1;
+ (unsigned long long)libraryCreateOptionsForWellKnownLibraryIdentifier:(long long)arg1;
+ (NSURL *)libraryURLFromDatabaseURL:(NSURL *)arg1;
+ (NSString *)managedPathWithUuid:(const char *)arg1 base:(const char *)arg2 fileMarker:(const char *)arg3 extension:(const char *)arg4;
+ (NSURL *)photosDataVaultPath;
+ (NSURL *)photosLibrariesDataVaultPath;
+ (bool)setSystemLibraryURL:(NSURL *)arg1 options:(unsigned short)arg2 error:(id*)arg3;
+ (bool)shouldAutoUpgradeWellKnownPhotoLibraryIdentifier:(long long)arg1;
+ (bool)shouldProcessHighlightsForWellKnownPhotoLibraryIdentifier:(long long)arg1;
+ (NSString *)systemLibraryBaseDirectory;
+ (NSURL *)systemLibraryURL;
+ (long long)wellKnownPhotoLibraryIdentifierForURL:(NSURL *)arg1;
+ (NSURL *)wellKnownPhotoLibraryURLForIdentifier:(long long)arg1;

- (NSString *)assetUUIDRecoveryMappingPath;
- (NSString *)baseDirectory;
- (PLFileSystemCapabilities *)capabilities;
- (bool)ensureFileProviderSyncExclusionAttributeIsSetWithError:(id*)arg1;
- (void)enumerateBundleScopesWithBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned short, unsigned char, PLPhotoLibraryPathManager *, void*
- (void)externalDirectoryCreationMaskResetWithSubType:(unsigned char)arg1;
- (void)internalDirectoryCreationMaskResetWithSubType:(unsigned char)arg1;
- (bool)isDataProtectionComplete;
- (bool)isDeviceRestoreSupported;
- (NSArray *)knownDBPaths;
- (NSURL *)libraryURL;
- (NSString *)pathToAssetsToAlbumsMapping;
- (void)photoDirectoryCreationMaskResetWithType:(unsigned char)arg1;
- (unsigned char)photoLibraryPathTypeForBundleScope:(unsigned short)arg1;
- (void)privateCacheDirectoryCreationMaskResetWithSubType:(unsigned char)arg1;
- (void)privateDirectoryCreationMaskResetWithSubType:(unsigned char)arg1;
- (NSURL *)readOnlyUrlWithIdentifier:(PLPhotoLibraryFileIdentifier *)arg1;
- (void)setDataProtectionComplete:(bool)arg1;
- (void)setExtendedAttributesWithIdentifier:(PLPhotoLibraryFileIdentifier *)arg1;
- (void)setExtendedAttributesWithIdentifier:(PLPhotoLibraryFileIdentifier *)arg1 andURL:(NSURL *)arg2;
- (bool)shouldUseFileIdentifierForBundleScope:(unsigned short)arg1;
- (NSString *)syncInfoPath;
- (NSString *)temporaryDragAndDropDirectoryCreateIfNeeded:(bool)arg1 error:(id*)arg2;
- (NSString *)temporaryFileBackedDebugDirectoryCreateIfNeeded:(bool)arg1 error:(id*)arg2;

@end

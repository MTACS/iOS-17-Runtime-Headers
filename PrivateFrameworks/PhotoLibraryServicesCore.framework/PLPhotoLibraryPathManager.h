
@interface PLPhotoLibraryPathManager : NSObject <PLPhotoLibraryPathManager> {
    unsigned char  _format;
    PLPhotoLibraryPathManagerCore * _internalPathManager;
    NSString * _singletonPhotoLibraryPath;
}

@property (readonly, copy) NSString *assetUUIDRecoveryMappingPath;
@property (readonly, copy) NSString *baseDirectory;
@property (readonly) unsigned short bundleScope;
@property (readonly) PLFileSystemCapabilities *capabilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isDCIM;
@property (readonly) bool isUBF;
@property (readonly, copy) NSURL *libraryURL;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServicesCore.framework/PhotoLibraryServicesCore

+ (id)allPhotosPathsOnThisDevice;
+ (void)assertSingleLibraryMode;
+ (bool)bundleScopeShouldBePersistedForRebuild:(unsigned short)arg1;
+ (void)enableMultiLibraryMode;
+ (bool)ignoreFilesystemCheckForWellKnownPhotoLibraryIdentifier:(long long)arg1;
+ (bool)isMultiLibraryModeEnabled;
+ (bool)isSystemPhotoLibraryURL:(id)arg1;
+ (unsigned long long)libraryCreateOptionsForWellKnownLibraryIdentifier:(long long)arg1;
+ (id)managedPathWithUuid:(const char *)arg1 base:(const char *)arg2 fileMarker:(const char *)arg3 extension:(const char *)arg4;
+ (bool)setSystemLibraryURL:(id)arg1 options:(unsigned short)arg2 error:(id*)arg3;
+ (bool)shouldAutoUpgradeWellKnownPhotoLibraryIdentifier:(long long)arg1;
+ (bool)shouldProcessHighlightsForWellKnownPhotoLibraryIdentifier:(long long)arg1;
+ (id)systemLibraryBaseDirectory;
+ (id)systemLibraryPathManager;
+ (id)systemLibraryURL;
+ (void)throwMultiLibraryAPIMisuse;
+ (void)throwMultiLibraryAPIMisuseForLibraryPath:(id)arg1;
+ (long long)wellKnownPhotoLibraryIdentifierForURL:(id)arg1;
+ (id)wellKnownPhotoLibraryURLForIdentifier:(long long)arg1;

- (void).cxx_destruct;
- (unsigned char)_bundleFormatFromLibraryURL:(id)arg1 libraryFormat:(unsigned char)arg2;
- (unsigned short)bundleScope;
- (bool)createTimeMachineExclusionPathsWithError:(id*)arg1;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (id)initWithBaseDirectory:(id)arg1;
- (id)initWithLibraryURL:(id)arg1;
- (id)initWithLibraryURL:(id)arg1 bundleScope:(unsigned short)arg2;
- (id)initWithLibraryURL:(id)arg1 bundleScope:(unsigned short)arg2 libraryFormat:(unsigned char)arg3;
- (bool)isDCIM;
- (bool)isUBF;
- (id)rebuildHistoryFilePath;
- (id)redactedDescription;
- (void)setBackupExclusionAttributesForWellKnownLibrariesOrWithCreateOptions:(unsigned long long)arg1;
- (void)setOrCompareLibraryURL:(id)arg1;
- (id)sqliteErrorIndicatorFilePath;
- (id)timeMachineExclusionPathForPathType:(unsigned char)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

+ (id)defaultDeferredRenderFileFormatTypeIdentifier;
+ (id)defaultDeferredRenderFileFormatTypeIdentifierForHDR;
+ (id)temporaryRenderContentURLForInternalRendersWithExtension:(id)arg1 appropriateForURL:(id)arg2;

- (id)URLForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3;
- (id)URLForPartialVideoDirectoryWithAssetUUID:(id)arg1;
- (id)URLForPartialVideoWithResourceFingerprint:(id)arg1 assetUUID:(id)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (void)_abortWithRebuildReasonPLRebuildReasonBackgroundMigration;
- (void)_abortWithRebuildReasonPLRebuildReasonCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonDatabaseCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonExcessiveOrphanedSceneClassifications;
- (void)_abortWithRebuildReasonPLRebuildReasonExcessivePersistentHistorySize;
- (void)_abortWithRebuildReasonPLRebuildReasonExcessiveRecoveryAttempts;
- (void)_abortWithRebuildReasonPLRebuildReasonLightweightMigration;
- (void)_abortWithRebuildReasonPLRebuildReasonMPSPathCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonMPSUUIDCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonPathCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonPersonUUIDCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonSharedAlbumPathCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonSharedAlbumUUIDCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonSimulatedCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonStagedDemoContentInstallation;
- (void)_abortWithRebuildReasonPLRebuildReasonTooManyOrphanedRecords;
- (void)_abortWithRebuildReasonPLRebuildReasonTooManyThumbnailRebuilds;
- (void)_abortWithRebuildReasonPLRebuildReasonUUIDCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonUnknown;
- (void)_abortWithRebuildReasonPLRebuildReasonUpgradeForceRebuild;
- (id)_cplLocalModeEnabledMarkerFilePathCreateIfNeeded:(bool)arg1;
- (bool)_createSqliteErrorIndicatorFileWithRebuildReason:(long long)arg1;
- (id)_dcimAssetPathForResourceDirectoryPathType:(unsigned char)arg1 directory:(id)arg2 filename:(id)arg3;
- (id)_rebuildDateFormatter;
- (bool)_shouldRemoveOutboundResourceAtURL:(id)arg1 withExpiryInterval:(double)arg2;
- (id)assetCreationHoldingDirectory;
- (id)assetCreationHoldingDirectoryForAssetUUID:(id)arg1;
- (id)assetPathForComputeDirectoryWithDirectory:(id)arg1 filename:(id)arg2;
- (id)assetPathForMutationsDirectoryWithDirectory:(id)arg1 filename:(id)arg2;
- (void)cleanupOutboundSharingFilesWithExpiryInterval:(double)arg1;
- (id)cloudServiceEnableLogFileURL;
- (id)cloudSharingArchiveDirectory;
- (id)cplDataDirectoryCreateIfNeeded:(bool)arg1;
- (id)cplDownloadFinishedMarkerFilePath;
- (id)cplEnableMarkerFilePath;
- (id)cplLocalModeEnabledMarkerFilePathForReading;
- (id)cplLocalModeEnabledMarkerFilePathForWriting;
- (id)deletedMemoryUUIDsFilePath;
- (id)directoryPathForInFlightComments:(bool)arg1;
- (id)disableICloudPhotosFilePath;
- (id)enableICloudPhotosFilePath;
- (id)forceSoftResetSyncPath;
- (bool)isSystemPhotoLibraryPathManager;
- (long long)lastRebuildReason;
- (id)pauseICloudPhotosFilePath;
- (id)photoStreamsDataDirectory;
- (id)recordRebuildReason;
- (bool)removeCPLDataDirectory;
- (bool)removeComputeDirectory;
- (bool)removePartialVideoDirectory;
- (void)removeSqliteErrorIndicatorFile;
- (id)searchIndexDatabaseFilePath;
- (id)searchIndexDirectory;
- (id)searchIndexGraphDataProgressFilePath;
- (id)searchIndexMetadataStoreFilePath;
- (id)searchIndexProgressFilePath;
- (id)searchIndexSpotlightPrivateIndexDirectory;
- (id)searchIndexSpotlightProgressFilePath;
- (id)searchIndexStatusFilePath;
- (id)searchIndexSynonymsFilePath;
- (id)searchIndexSystemInfoFilePath;
- (id)searchIndexZeroKeywordStoreFilePath;
- (void)setSqliteErrorForRebuildReason:(long long)arg1 allowsExit:(bool)arg2;
- (bool)sqliteErrorIndicatorFileExists;
- (id)temporaryRenderContentURLForInternalRendersWithExtension:(id)arg1;
- (id)wipeCPLOnOpenPath;

@end

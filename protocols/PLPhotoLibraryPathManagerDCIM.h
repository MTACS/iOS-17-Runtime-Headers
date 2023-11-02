
@protocol PLPhotoLibraryPathManagerDCIM <NSObject>

@required

- (NSString *)assetBaseFilenameForAdjustmentFilePath:(NSString *)arg1;
- (NSString *)cloudRestoreBackgroundPhaseInProgressTokenPath;
- (NSString *)cloudRestoreCompleteTokenPath;
- (NSString *)cloudRestoreForegroundPhaseCompleteTokenPath;
- (NSString *)iTunesPhotosDirectory;
- (NSString *)iTunesPhotosLastSyncMetadataFilePath;
- (NSString *)iTunesPhotosSyncCurrentLibraryUUIDPath;
- (NSString *)iTunesPhotosSyncMetadataFilePath;
- (NSString *)iTunesSyncedAssetMetadataThumbnailsDirectory;
- (NSString *)iTunesSyncedAssetSmallThumbnailsDirectory;
- (NSString *)iTunesSyncedAssetsDirectory;
- (NSString *)iTunesSyncedFaceAlbumThumbnailsDirectory;
- (NSString *)iTunesSyncedFaceDataDirectory;
- (NSString *)legacyMemoriesRelatedSnapshotDirectory;
- (NSString *)legacyModelInterestDatabasePath;
- (NSString *)modelRestorePostProcessingCompleteTokenPath;
- (NSDictionary *)pathsGroupedByAssetBasePathFromFilePaths:(NSArray *)arg1 populateInvalidAdjustmentPaths:(NSMutableArray *)arg2;
- (NSString *)persistedAlbumDataDirectoryCreateIfNeeded:(bool)arg1 error:(id*)arg2;
- (NSString *)photoMetadataDirectoryForMediaInMainDirectory:(NSString *)arg1;
- (PLSimpleDCIMDirectory *)simpleDCIMDirectory;

@end

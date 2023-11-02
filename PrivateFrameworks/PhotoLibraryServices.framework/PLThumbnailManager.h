
@interface PLThumbnailManager : PLThumbnailManagerCore {
    NSMutableArray * _alreadyFailedAssetObjectIDsForRebuild;
    bool  _didCheckShouldRebuildThumbnails;
    PLThumbnailCascadingDownscaleContext * _downscaleContext;
    NSLock * _fixLock;
    bool  _hasExceededThumbnailRebuildRequestLimit;
    bool  _isRebuildingThumbnails;
    NSPersistentStore * _migrationStore;
    id  _observerToken;
    NSMutableSet * _previouslyRequestedThumbnailFixOIDs;
    NSMutableSet * _requestedThumbnailFixAssets;
    bool  _shouldRebuildThumbnails;
    PLLazyObject * _slowPersistenceManagers;
}

@property (nonatomic, retain) id observerToken;

+ (id)_thumbnailRebuildIndicatorPathWithPathManager:(id)arg1;
+ (bool)hasRebuildingThumbnailsIndicatorAndRebuildingWithPathManager:(id)arg1;
+ (id)masterThumbFilename;
+ (id)thumbnailIdentifierWithAssetUUID:(id)arg1 directory:(id)arg2 filename:(id)arg3 bundleScope:(unsigned short)arg4 pathManager:(id)arg5;

- (void).cxx_destruct;
- (id)_contextForConfigurationChanges;
- (id)_dataForAsset:(id)arg1 format:(unsigned short)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 imageDataFormat:(unsigned short*)arg9;
- (void)_discardAlreadyFailedAssetObjectIDsForRebuild;
- (long long)_diskFootprintOfTableThumbnailTables;
- (bool)_downscaleAndWriteTableAndFileBackedThumbnailsWithIdentifier:(id)arg1 thumbnailIndex:(unsigned long long)arg2 image:(id)arg3 assetUUID:(id)arg4;
- (id)_missingThumbnailPredicate;
- (bool)_performUncompressedTableDownscaleIntoDatas:(id)arg1 image:(id)arg2 assetUUID:(id)arg3;
- (long long)_rebuildAssetThumbnailsWithLimit:(int)arg1 library:(id)arg2 error:(id*)arg3;
- (id)_rebuildThumbnailsQueue;
- (void)_recordRebuildThumbnailsAttempt;
- (void)_removeMasterThumbDirectoriesWithFileManagerDelegate:(id)arg1;
- (unsigned short)_supportedThumbnailFormatIDFromGeneralFormatID:(unsigned short)arg1;
- (id)_tableDescriptions;
- (bool)_thumbnailLoadingAssetIsHiddenOrTrashed:(id)arg1;
- (void)addRebuildThumbnailsRequest;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1;
- (void)continueRebuildingTableThumbsInLibrary:(id)arg1;
- (id)dataForPhoto:(id)arg1 format:(unsigned short)arg2 allowPlaceholder:(bool)arg3 width:(int*)arg4 height:(int*)arg5 bytesPerRow:(int*)arg6 dataWidth:(int*)arg7 dataHeight:(int*)arg8 imageDataOffset:(int*)arg9;
- (void)dealloc;
- (void)deleteThumbnailsWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3;
- (void)discardCachedThumbnailDownscalerContexts;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 withToken:(id)arg2;
- (void)handleRebuildThumbnailRequestPersistentFailureInPhotoLibrary:(id)arg1;
- (bool)hasExceededRebuildThumbnailRequestLimit;
- (bool)hasMissingThumbnailsInLibrary:(id)arg1;
- (bool)hasRebuildThumbnailsRequest;
- (id)imageTableForFormat:(unsigned short)arg1;
- (id)imageTableForFormat:(unsigned short)arg1 readOnly:(bool)arg2;
- (id)indexStatisticsForLibrary:(id)arg1;
- (id)initWithPhotoLibraryPathManager:(id)arg1 storeFromMigration:(id)arg2;
- (bool)isRebuildingThumbnails;
- (struct CGImage { }*)newImageForAsset:(id)arg1 format:(id)arg2;
- (id)newSlowPersistenceManagers;
- (id)observerToken;
- (id)placeholderDataForFormat:(unsigned short)arg1 photoImageSize:(struct CGSize { double x1; double x2; })arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;
- (void)preheatThumbnailDataWithFormat:(unsigned short)arg1 thumbnailIndexes:(id)arg2;
- (void)reStampConfigAsNeedingTableThumbMigration;
- (void)rebuildAllMissingThumbnailsInLibrary:(id)arg1;
- (long long)removeAllThumbnailsInContext:(id)arg1 dryRun:(bool)arg2 count:(unsigned long long*)arg3;
- (void)removeObsoleteMetadata;
- (void)removeRebuildThumbnailsRequest:(const char *)arg1;
- (bool)resetThumbnailsForced:(bool)arg1 isMissingTables:(bool)arg2 inContext:(id)arg3;
- (bool)resetThumbnailsWithResetType:(long long)arg1 deferHintChanges:(bool)arg2 inContext:(id)arg3;
- (void)setObserverToken:(id)arg1;
- (void)setThumbnailsForAsset:(id)arg1 withImage:(id)arg2;
- (bool)setThumbnailsForThumbIdentifier:(id)arg1 thumbnailIndex:(unsigned long long)arg2 assetUUID:(id)arg3 kind:(short)arg4 extension:(id)arg5 withImage:(id)arg6;
- (id)thumbManagerForFormatID:(unsigned short)arg1;
- (id)thumbManagerForFormatID:(unsigned short)arg1 readOnly:(bool)arg2;
- (id)thumbnailJPEGPathForPhoto:(id)arg1;
- (bool)wantsTableOnlyRebuild;

@end

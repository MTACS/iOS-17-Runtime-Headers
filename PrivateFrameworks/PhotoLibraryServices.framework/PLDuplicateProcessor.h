
@interface PLDuplicateProcessor : NSObject {
    bool  _enableEXIFDataAccess;
    NSMutableSet * _inFlightMergeAssetUuids;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _inFlightMergeLock;
    PLLazyObject * _lazyAppPrivateData;
    PLLibraryServicesManager * _lsm;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _processingLock;
    PLPhotoLibrary * _unitTestLibrary;
}

@property (readonly) bool isMerging;
@property (retain) PLPhotoLibrary *unitTestLibrary;

+ (bool)_removeAssetsFromDuplicateAlbumUsingFetchRequest:(id)arg1 library:(id)arg2 error:(id*)arg3;
+ (bool)isExitingSharedLibraryForLibrary:(id)arg1;
+ (bool)isValidDuplicateProcessorForLibraryServicesManager:(id)arg1;
+ (bool)removeAllDuplicateSharedLibraryAssetFromAlbumWithPhotoLibrary:(id)arg1 error:(id*)arg2;
+ (bool)sharedLibraryDedupeEnabledWithPathManager:(id)arg1;
+ (void)signalBackgroundJobSeviceDuplicateProcessingWithLibrary:(id)arg1;
+ (void)updateSharedLibraryIsEnabledFeatureVersionIfNeededWithPhotoLibrary:(id)arg1 cplConfiguration:(id)arg2;

- (void).cxx_destruct;
- (id)_appPrivateData;
- (bool)_batchEnumerateOrGenerateAssetObjectIdsFromStartingAssetOIDs:(id)arg1 library:(id)arg2 error:(id*)arg3 continuationHandler:(id /* block */)arg4 processingBatchBlock:(id /* block */)arg5;
- (id)_buildInterruptBatchFromStartingOIDs:(id)arg1 library:(id)arg2;
- (bool)_detectDuplicatesAndInsertIntoDuplicateAlbumWithPhotoLibrary:(id)arg1 detector:(id)arg2 duplicateType:(short)arg3 error:(id*)arg4;
- (id)_duplicateAlbumsFromAssets:(id)arg1;
- (id)_fetchAssetOIDsForPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)_fetchAssetsFromOIDs:(id)arg1 library:(id)arg2 error:(id*)arg3;
- (id)_fetchAssetsFromReference:(id)arg1 isOID:(bool)arg2 library:(id)arg3 error:(id*)arg4;
- (id)_fetchAssetsFromUUIDs:(id)arg1 library:(id)arg2 error:(id*)arg3;
- (id)_fetchAssetsWithPhotoLibrary:(id)arg1 assetObjectIDs:(id)arg2 error:(id*)arg3;
- (id)_fetchCloudIdentifiersFromAssetUUIDs:(id)arg1 library:(id)arg2 error:(id*)arg3;
- (void)_inFlightMergeAssetsAddUUIDs:(id)arg1;
- (void)_inFlightMergeAssetsRemoveUUIDs:(id)arg1;
- (bool)_insertIntoDuplicateAlbum:(id)arg1 assets:(id)arg2 duplicateType:(short)arg3 photoLibrary:(id)arg4 error:(id*)arg5;
- (bool)_isAssetValidForMerge:(id)arg1;
- (bool)_isMergeFeatureEnabled:(id*)arg1;
- (bool)_isValidSharedLibraryStateWithLibrary:(id)arg1 error:(id*)arg2;
- (bool)_moveDuplicateAlbumAssestFromAlbums:(id)arg1 toTargetAlbum:(id)arg2 duplicateType:(short)arg3 error:(id*)arg4;
- (id)_photoLibrary;
- (id)_processAlbumGroupingFromAssets:(id)arg1 localIdentifierToCloudIdentifiers:(id)arg2 library:(id)arg3;
- (void)_processCloudScopedIdentifierFromLocalIdentifiers:(id)arg1 localToCloudIdentifierMap:(id)arg2 cplManager:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_processCloudScopedIdentifiersFromAssetUUIDS:(id)arg1 library:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_processContainersAssetUUIDS:(id)arg1 library:(id)arg2;
- (bool)_processDuplicatesWithPhotoLibrary:(id)arg1 processingType:(unsigned long long)arg2 assetObjectIds:(id)arg3 error:(id*)arg4;
- (bool)_processMergeAlbumAssetOIDMap:(id)arg1 localIdentifierMap:(id)arg2 library:(id)arg3 error:(id*)arg4;
- (bool)_processMergeAssets:(id)arg1 localIdentifierMap:(id)arg2 library:(id)arg3 error:(id*)arg4;
- (bool)_processMergeGroup:(id)arg1 processedAssetCount:(unsigned long long*)arg2 skippedAssetCount:(unsigned long long*)arg3 processedAssetCountAfterSave:(unsigned long long*)arg4 library:(id)arg5 error:(id*)arg6;
- (bool)_processMergeGroupContainer:(id)arg1 processedAssetCount:(unsigned long long*)arg2 skippedAssetCount:(unsigned long long*)arg3 library:(id)arg4 error:(id*)arg5;
- (bool)_processedDuplicateAssetSubGroupWithPhotoLibrary:(id)arg1 assetObjectIDs:(id)arg2 duplicateType:(short)arg3 error:(id*)arg4;
- (id)_processedDuplicateAssetsWithPhotoLibrary:(id)arg1 assetObjectIDs:(id)arg2 duplicateType:(short)arg3 associatedDuplicateAlbum:(id*)arg4 error:(id*)arg5;
- (bool)_processedRemoveExclusionGroupAssetsWithPhotoLibrary:(id)arg1 assetObjectIDs:(id)arg2 error:(id*)arg3;
- (id)_resumeInterruptMarker;
- (void)_setInterruptMarker:(id)arg1;
- (bool)assetsArePendingForDuplicateMergeProcessing:(id)arg1;
- (id)initWithLibraryServicesManager:(id)arg1;
- (bool)isMerging;
- (void)mergeDuplicateAssetsWithAssetUUIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)processDuplicatesOfAssetObjectIds:(id)arg1 processingType:(unsigned long long)arg2 error:(id*)arg3 continuationHandler:(id /* block */)arg4;
- (void)setUnitTestLibrary:(id)arg1;
- (id)unitTestLibrary;

@end


@interface PLImageWriter : NSObject {
    unsigned long long  _crashRecoveryCounter;
    PLSimpleDCIMDirectory * _iTunesSyncedAssetsDCIMDirectory;
    PLIndicatorFileCoordinator * _indicatorFileCoordinator;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _isCrashRecoveryJobInProgress;
    NSObject<OS_dispatch_queue> * _jobCompletionQueue;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _jobCountLock;
    NSObject<OS_dispatch_queue> * _jobQueue;
    PLLibraryServicesManager * _libraryServicesManager;
    NSObject<OS_os_transaction> * _transaction;
    unsigned long long  _transactionCounter;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _transactionLock;
    int  _unfinishedJobsRequiringIndicatorCount;
}

+ (id)_assetAdjustmentsFromCameraAdjustmentData:(id)arg1 cameraMetadata:(id)arg2 exportProperties:(id)arg3 assetType:(short)arg4 applySemanticEnhance:(bool)arg5;
+ (id)_assetAdjustmentsFromCameraAdjustments:(id)arg1 cameraMetadata:(id)arg2 exportProperties:(id)arg3 assetType:(short)arg4 applySemanticEnhance:(bool)arg5;
+ (id)_assetAdjustmentsFromCameraAdjustmentsFileAtPath:(id)arg1 exportProperties:(id)arg2 cameraMetadata:(id)arg3;
+ (id)_assetUUIDFromIncomingFilename:(id)arg1;
+ (bool)_hasPrimaryAssetAndAdjustmentsFilesWithType:(short)arg1 inIncomingFilenames:(id)arg2 forAssetUUID:(id)arg3;
+ (id)_pathsByAssetUUIDFromIncomingCrashRecoveryPaths:(id)arg1;
+ (bool)_requiresAssetUUIDForJobType:(id)arg1;
+ (bool)_requiresCrashRecoveryForJobType:(id)arg1;
+ (bool)_requiresIndicatorFileForJobType:(id)arg1;
+ (id)assetAdjustmentsFromCameraAdjustmentData:(id)arg1 cameraMetadata:(id)arg2 exportProperties:(id)arg3 applySemanticEnhance:(bool)arg4;
+ (id)assetAdjustmentsFromCameraAdjustmentData:(id)arg1 exportProperties:(id)arg2;
+ (id)assetAdjustmentsFromCameraAdjustments:(id)arg1 cameraMetadata:(id)arg2 exportProperties:(id)arg3;
+ (id)assetAdjustmentsFromCameraAdjustments:(id)arg1 cameraMetadata:(id)arg2 exportProperties:(id)arg3 applySemanticEnhance:(bool)arg4;
+ (id)assetAdjustmentsFromCameraFilters:(id)arg1 portraitMetadata:(id)arg2 exportProperties:(id)arg3 cameraMetadata:(id)arg4;
+ (id)assetAdjustmentsFromCompositionController:(id)arg1 exportProperties:(id)arg2;
+ (id)cameraMetadataURLForPrimaryAssetURL:(id)arg1 photoLibrary:(id)arg2;
+ (id)finalizedAssetURLForDeferredPhotoPreviewURL:(id)arg1 extension:(id)arg2;
+ (bool)isDeferredPhotoPreviewURL:(id)arg1;
+ (bool)isSpatialOverCaptureURL:(id)arg1;
+ (id)pathComponentForIncomingHoldingDirectory;
+ (id)semanticEnhancePreviewDestinationURLForPrimaryAssetURL:(id)arg1;
+ (bool)semanticEnhanceSceneIsValid:(long long)arg1;
+ (bool)setAdjustmentsForNewPhoto:(id)arg1 mainFileMetadata:(id)arg2 cameraAdjustmentData:(id)arg3 adjustmentDataPath:(id)arg4 filteredImagePath:(id)arg5 cameraMetadata:(id)arg6 finalAssetSize:(struct CGSize { double x1; double x2; })arg7 isSubstandardRender:(bool)arg8;
+ (void)setAdjustmentsForNewVideo:(id)arg1 mainFileMetadata:(id)arg2 withAdjustmentsDictionary:(id)arg3 cameraAdjustments:(id)arg4 renderedContentPath:(id)arg5 renderedPosterFramePreviewPath:(id)arg6 finalAssetSize:(struct CGSize { double x1; double x2; })arg7;

- (void).cxx_destruct;
- (void)_copyJobContentsToHoldingDirectoryWithUUID:(id)arg1 incomingPath:(id)arg2 job:(id)arg3;
- (void)_decrementJobCount:(id)arg1;
- (void)_enablePhotoStreamJob:(id)arg1 completion:(id /* block */)arg2;
- (bool)_enterAtomicCrashRecoveryJobProcessing;
- (void)_exitAtomicCrashRecoveryJobProcessing;
- (id)_fetchPhotoAssetForUUID:(id)arg1 moc:(id)arg2;
- (void)_handleAvalancheCrashRecovery:(id)arg1;
- (void)_handleCameraAdjustments:(id)arg1 fullsizeRenders:(id)arg2 largeThumbnails:(id)arg3;
- (void)_handleCameraMetadataCrashRecovery:(id)arg1;
- (void)_handlePhotoIrisCrashRecoveryForPhotoIndicatorFiles:(id)arg1;
- (void)_handlePhotoIrisCrashRecoveryForVideos:(id)arg1;
- (bool)_hasNonCrashRecoveryJobsEnqueued;
- (void)_incrementJobCount:(id)arg1;
- (bool)_isHighPriorityJob:(id)arg1;
- (void)_linkDiagnosticFileWithSourcePath:(id)arg1 forPhotoDestinationURL:(id)arg2;
- (id)_newShortLivedLibraryWithName:(const char *)arg1;
- (id)_pathForNewAssetWithPath:(id)arg1 withExtension:(id)arg2;
- (void)_photoIrisPairingDidSucceed:(bool)arg1 fileIndicatorPath:(id)arg2 photoAsset:(id)arg3 photoLibrary:(id)arg4;
- (void)_processAutodeleteEmptyAlbumJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processAvalancheJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processAvalanchesValidationJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processBatchImageJob:(id)arg1 inLibrary:(id)arg2 completion:(id /* block */)arg3;
- (void)_processCrashRecoveryJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processDaemonJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processDeletePhotoStreamAssetsWithUUIDs:(id)arg1 withReason:(id)arg2 completion:(id /* block */)arg3;
- (void)_processDeletePhotoStreamDataJob:(id)arg1 withReason:(id)arg2 completion:(id /* block */)arg3;
- (void)_processImageJob:(id)arg1 inLibrary:(id)arg2 completion:(id /* block */)arg3;
- (void)_processJob:(id)arg1;
- (id)_processLimitedLibraryAdditionIfNeededWithAssetUUID:(id)arg1 clientBundleIdentifier:(id)arg2 clientAuthorization:(id)arg3 library:(id)arg4;
- (void)_processReenqueueAssetUUIDsToPhotoStreamJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processSavePhotoStreamImageToCameraRollJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processSyncClientSaveJobsJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processSyncedVideoSaveJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processVideoJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processVideoSaveJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_processXPCDaemonJob:(id)arg1 completion:(id /* block */)arg2;
- (void)_removeInProgressExtendedAttributesForFileAtURL:(id)arg1;
- (void)_removeTransientKeys:(id)arg1;
- (void)_resetSyncedAssetsDCIMDirectory;
- (bool)_retryPairedVideoJob:(id)arg1 pairingType:(id)arg2 pairingIdentifier:(id)arg3 retryMax:(unsigned long long)arg4;
- (void)_signalBackgroundProcessingNeededForAsset:(id)arg1 reason:(id)arg2;
- (bool)_transferVideoFromIncomingPath:(id)arg1 toDestinationPath:(id)arg2 shouldRemoveIncoming:(bool*)arg3 error:(id*)arg4;
- (bool)_writeOutCameraMetadata:(id)arg1 destinationURL:(id)arg2 error:(id*)arg3;
- (id)cameraAssetPathForNewAssetWithExtension:(id)arg1 assetUUID:(id)arg2;
- (bool)canEnqueueJob:(id)arg1;
- (void)cleanupFilesInLibrary:(id)arg1 afteriTunesSyncBeforeDate:(id)arg2;
- (void)delayJob:(id)arg1 delay:(long long)arg2;
- (void)enqueueAutoDeleteEmptyAlbumJobWithAlbumID:(id)arg1;
- (bool)enqueueJob:(id)arg1;
- (id)iTunesSyncedAssetsDCIMDirectory;
- (bool)imageWriterJob:(id)arg1 hasValidPathsWithConnection:(id)arg2;
- (id)indicatorFileCoordinator;
- (id)init;
- (id)initWithLibraryServicesManager:(id)arg1;
- (id)pathForNewAssetPathAtAlbumDirectoryPath:(id)arg1 assetType:(unsigned int)arg2 extension:(id)arg3;
- (id)pathForNewAssetWithDirectoryPath:(id)arg1 fileName:(id)arg2 extension:(id)arg3;
- (id)pathForOriginalMyPhotoStreamAssetWithJob:(id)arg1;
- (void)processSyncSaveJob:(id)arg1 library:(id)arg2 albumMap:(id)arg3;
- (void)saveAssetJob:(id)arg1 imageSurface:(id)arg2 previewImageSurface:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)writeFilteredPreviewWithImageData:(id)arg1 orImage:(id)arg2 toPathWithBaseName:(id)arg3;

@end

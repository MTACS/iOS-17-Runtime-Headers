
@interface PLPrimaryResourceDataStore : PLResourceDataStore <PLResourceDataStore> {
    PLDeferredPhotoFinalizer * _deferredPhotoFinalizer;
    PAImageConversionServiceClient * _imageConversionServiceClient;
    NSDictionary * _keyHelperByBundleScope;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    PLPrimaryResourceDataStoreKeyHelper * _mainScopeKeyHelper;
    NSMutableDictionary * _makeAvailableProgressByTaskIdentifier;
    unsigned int  _masterThumbRecipeID;
    PAVideoConversionServiceClient * _videoConversionServiceClient;
}

@property (getter=_cplManager, readonly) PLCloudPhotoLibraryManager *cplManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *keyHelperByBundleScope;
@property (nonatomic, retain) PLPrimaryResourceDataStoreKeyHelper *mainScopeKeyHelper;
@property (nonatomic) unsigned int masterThumbRecipeID;
@property (nonatomic, readonly) PLPhotoLibraryPathManager *pathManager;
@property (readonly) Class superclass;

+ (unsigned int)currentDeviceMasterThumbRecipeID;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (unsigned short)storeClassID;
+ (id)supportedRecipes;

- (void).cxx_destruct;
- (void)_cancelAvailabilityRequestWithTaskIdentifier:(id)arg1;
- (id)_cplManager;
- (id)_cplResourceIfDownloadIsAvailableForResource:(id)arg1 asset:(id)arg2 options:(id)arg3;
- (id)_deferredPhotoFinalizer;
- (void)_downloadCPLResource:(id)arg1 options:(id)arg2 taskDidBeginHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)_expectedFileURLForMasterThumbnailForAsset:(id)arg1;
- (id)_finalizeDeferredResource:(id)arg1 asset:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_imageConversionServiceClient;
- (bool)_isSystemLibraryStore;
- (id)_makeResourceLocallyAvailable:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)_masterThumbnailVirtualResourceForAsset:(id)arg1;
- (id)_newProgressForTaskWithIdentifier:(id)arg1 type:(long long)arg2;
- (bool)_taskIsPendingDownloadWithIdentifier:(id)arg1;
- (bool)_taskIsPendingPhotoFinalizationWithIdentifier:(id)arg1;
- (void)_transitionTaskToInflightWithIdentifier:(id)arg1;
- (void)_verifyResourceLocalAvailability:(id)arg1 localResourceFileURL:(id*)arg2 resourceReapirNeeded:(long long*)arg3;
- (id)_videoConversionServiceClient;
- (bool)bailOutOfVideoFinalizationForAsset:(id)arg1 taskIdentifier:(id)arg2 error:(id*)arg3;
- (bool)canMarkAsynchronousLocalRenderAsOptionalForProgress:(id)arg1;
- (bool)canStoreExternalResource:(id)arg1;
- (bool)canStreamResource:(id)arg1;
- (bool)dataStoreSubtypeIsDownloadable:(long long)arg1;
- (void)dealloc;
- (id)descriptionForSubtype:(long long)arg1;
- (id)expectedFileURLForResource:(id)arg1 asset:(id)arg2;
- (void)generateDeferredAdjustmentForAsset:(id)arg1 imageConversionServiceClient:(id)arg2 videoConversionServiceClient:(id)arg3 reason:(id)arg4 taskIdentifier:(id)arg5 cplResourceType:(unsigned long long)arg6 version:(unsigned int)arg7 completion:(id /* block */)arg8;
- (id)getClosestResourceMatchingCPLResourceType:(unsigned long long)arg1 version:(unsigned int)arg2 asset:(id)arg3;
- (id)initWithPathManager:(id)arg1;
- (id)keyFromKeyStruct:(const void*)arg1;
- (id)keyHelperByBundleScope;
- (id)keyHelperForBundleScope:(unsigned short)arg1;
- (id)mainScopeKeyHelper;
- (void)markAsynchronousLocalRenderAsOptionalForProgress:(id)arg1;
- (unsigned int)masterThumbRecipeID;
- (id)name;
- (id)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 intent:(unsigned long long)arg3 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg4 streamingHints:(id)arg5 inContext:(id)arg6 clientBundleID:(id)arg7 completion:(id /* block */)arg8;
- (id)resourceDataForKey:(id)arg1 assetID:(id)arg2;
- (id)resourceURLForKey:(id)arg1 assetID:(id)arg2;
- (void)setKeyHelperByBundleScope:(id)arg1;
- (void)setMainScopeKeyHelper:(id)arg1;
- (void)setMasterThumbRecipeID:(unsigned int)arg1;
- (bool)storeExternalResource:(id)arg1 forAsset:(id)arg2 options:(id)arg3 error:(id*)arg4 resultingResource:(id*)arg5;
- (bool)supportsTimeRange;
- (void)transitional_reconsiderLocalAvailabilityBasedOnExistingLocationOfCPLResource:(id)arg1 givenFilePath:(id)arg2;
- (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;
- (bool)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;
- (id)virtualResourcesForAsset:(id)arg1;

@end

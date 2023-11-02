
@interface AEPhotosAssetPackageGenerator : AEAssetPackageGenerator <NSProgressReporting, PUReviewAssetProviderRequest> {
    PHAsset * __asset;
    PHAssetExportRequest * __exportRequest;
    AEAssetPackage * __ivarQueue_currentPackage;
    NSError * __ivarQueue_lastError;
    NSObject<OS_dispatch_queue> * __packagerIvarIsolationQueue;
    NSObject<OS_dispatch_group> * __packagerWorkGroup;
    PUPickerAssetPreparationOptions * _preparationOptions;
    PXAssetReference * _sourceAssetReference;
}

@property (nonatomic, retain) PHAsset *_asset;
@property (nonatomic, readonly) PHAssetExportRequest *_exportRequest;
@property (setter=_setIvarQueueCurrentPackage:, nonatomic, retain) AEAssetPackage *_ivarQueue_currentPackage;
@property (setter=_setIvarQueueLastError:, nonatomic, retain) NSError *_ivarQueue_lastError;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_packagerIvarIsolationQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *_packagerWorkGroup;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PUPickerAssetPreparationOptions *preparationOptions;
@property (readonly) NSProgress *progress;
@property (nonatomic, readonly) <PUDisplayAsset> *sourceAsset;
@property (nonatomic, readonly, copy) PXAssetReference *sourceAssetReference;
@property (readonly) Class superclass;

+ (void)deleteTemporaryStorageWithTimeout:(double)arg1;

- (void).cxx_destruct;
- (id)_asset;
- (id)_assetPackageforPHAsset:(id)arg1 withAssetExportRequestFileURLs:(id)arg2 error:(id*)arg3;
- (void)_callCompletionWithResult:(id /* block */)arg1;
- (void)_commonAEPhotosAssetPackageGeneratorInitWithAsset:(id)arg1 assetReference:(id)arg2;
- (id)_copyAssetExportFileURLs:(id)arg1 forAsset:(id)arg2 error:(id*)arg3;
- (id)_copyItemAtURL:(id)arg1 toOutputDirectory:(id)arg2 error:(id*)arg3;
- (id)_createOutputDirectoryBaseURLWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)_exportRequest;
- (id)_generatePackageFromAsset:(id)arg1;
- (void)_generatePackageWithAssetExportFileURLs:(id)arg1 error:(id)arg2;
- (id)_ivarQueue_currentPackage;
- (id)_ivarQueue_lastError;
- (id)_packagerIvarIsolationQueue;
- (id)_packagerWorkGroup;
- (void)_setIvarQueueCurrentPackage:(id)arg1;
- (void)_setIvarQueueLastError:(id)arg1;
- (id)beginGenerating;
- (void)cancelReviewAssetRequest;
- (id)initWithAsset:(id)arg1;
- (id)initWithAssetReference:(id)arg1;
- (id)preparationOptions;
- (id)progress;
- (void)requestReviewAssetWithCompletionHandler:(id /* block */)arg1;
- (bool)retrieveGeneratedPackageWithCompletion:(id /* block */)arg1;
- (void)setPreparationOptions:(id)arg1;
- (void)set_asset:(id)arg1;
- (id)sourceAsset;
- (id)sourceAssetReference;

@end

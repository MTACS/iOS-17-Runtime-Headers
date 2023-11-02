
@interface PLBackgroundJobDeferredRenderDerivativesBaseWorker : PLBackgroundJobWorker {
    PAImageConversionServiceClient * _imageConversionClient;
    NSProgress * _progressForCurrentAsset;
    PAVideoConversionServiceClient * _videoConversionClient;
}

@property (nonatomic, readonly, copy) NSSet *deferredProcessingStatesHandled;

+ (id)_criteriaToUse;
+ (bool)supportsWellKnownPhotoLibraryIdentifier:(long long)arg1;

- (void).cxx_destruct;
- (id)_predicateToFetchDeferredAssets;
- (id)deferredProcessingStatesHandled;
- (id)imageConversionClient;
- (bool)isInterruptible;
- (void)performWorkOnItem:(id)arg1 inLibrary:(id)arg2 completion:(id /* block */)arg3;
- (void)stopWorkingOnItem:(id)arg1;
- (id)taskIdentifier;
- (id)videoConversionClient;
- (id)workItemsNeedingProcessingInLibrary:(id)arg1;

@end

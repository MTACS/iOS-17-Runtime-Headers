
@interface PLBackgroundJobEditRenderingWorker : PLBackgroundJobWorker {
    PAImageConversionServiceClient * _imageConversionServiceClient;
    NSProgress * _progressForCurrentAsset;
    PAVideoConversionServiceClient * _videoConversionServiceClient;
}

+ (bool)supportsWellKnownPhotoLibraryIdentifier:(long long)arg1;
+ (id)workerWithLibrary:(id)arg1;

- (void).cxx_destruct;
- (id)_predicateToFetchDeferredAdjustmentNeededAssets;
- (void)dealloc;
- (bool)isInterruptible;
- (void)performWorkOnItem:(id)arg1 inLibrary:(id)arg2 completion:(id /* block */)arg3;
- (void)stopWorkingOnItem:(id)arg1;
- (id)workItemsNeedingProcessingInLibrary:(id)arg1;

@end

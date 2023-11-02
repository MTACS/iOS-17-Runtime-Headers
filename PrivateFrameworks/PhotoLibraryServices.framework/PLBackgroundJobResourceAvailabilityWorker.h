
@interface PLBackgroundJobResourceAvailabilityWorker : PLBackgroundJobWorker {
    int  _countOfDeferredPhotosProcessed;
    PLDeferredPhotoFinalizer * _deferredPhotoFinalizer;
    PAImageConversionServiceClient * _imageConversionClient;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSProgress * _progressForCurrentAsset;
    PAVideoConversionServiceClient * _videoConversionClient;
}

+ (bool)supportsWellKnownPhotoLibraryIdentifier:(long long)arg1;

- (void).cxx_destruct;
- (void)_performWorkOnItem:(id)arg1 inLibrary:(id)arg2 completion:(id /* block */)arg3;
- (bool)avoidCheckingOtherWorkersIfThisWorkerHasPendingWork;
- (id)deferredPhotoFinalizer;
- (id)imageConversionClient;
- (id)initWithLibraryBundle:(id)arg1;
- (bool)isInterruptible;
- (void)performWorkOnItem:(id)arg1 inLibrary:(id)arg2 completion:(id /* block */)arg3;
- (void)stopWorkingOnItem:(id)arg1;
- (id)videoConversionClient;
- (id)workItemsNeedingProcessingInLibrary:(id)arg1;
- (void)workerDidFinishWithDatabaseContext:(id)arg1;

@end

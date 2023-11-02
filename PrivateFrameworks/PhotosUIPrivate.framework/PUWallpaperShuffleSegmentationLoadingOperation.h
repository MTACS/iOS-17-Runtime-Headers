
@interface PUWallpaperShuffleSegmentationLoadingOperation : PXAsyncOperation {
    NSURL * _assetDirectory;
    id /* block */  _downloadProgressHandler;
    NSError * _error;
    bool  _isPreloading;
    PISegmentationLoader * _loader;
    NSString * _operationType;
    PHPhotoLibrary * _photoLibrary;
    PFPosterMedia * _posterMedia;
    <PISegmentationItem> * _segmentationItem;
}

@property (nonatomic, readonly) NSURL *assetDirectory;
@property (nonatomic, copy) id /* block */ downloadProgressHandler;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) bool isPreloading;
@property (nonatomic, retain) PISegmentationLoader *loader;
@property (nonatomic, readonly, copy) NSString *operationType;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PFPosterMedia *posterMedia;
@property (nonatomic, retain) <PISegmentationItem> *segmentationItem;

- (void).cxx_destruct;
- (void)_handleSegmentationResult:(id)arg1 forAssetUUID:(id)arg2 loadingError:(id)arg3;
- (id)assetDirectory;
- (void)cancel;
- (id /* block */)downloadProgressHandler;
- (id)error;
- (id)initWithPosterMedia:(id)arg1 assetDirectory:(id)arg2 photoLibrary:(id)arg3 isPreloading:(bool)arg4;
- (bool)isPreloading;
- (id)loader;
- (id)operationType;
- (id)photoLibrary;
- (id)posterMedia;
- (void)px_finishIfPossible;
- (bool)px_shouldWaitForCancel;
- (void)px_start;
- (id)segmentationItem;
- (void)setDownloadProgressHandler:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setLoader:(id)arg1;
- (void)setSegmentationItem:(id)arg1;
- (bool)tryLoadSegmentationFromDirectory;

@end

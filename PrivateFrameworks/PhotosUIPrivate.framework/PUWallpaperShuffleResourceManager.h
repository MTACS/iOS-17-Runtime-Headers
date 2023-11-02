
@interface PUWallpaperShuffleResourceManager : NSObject {
    NSURL * _assetDirectory;
    PUWallpaperShuffleLayerStackLoadingOperation * _currentLayerStackOperation;
    bool  _depthEnabledForAllMedia;
    NSOperationQueue * _exportOperationQueue;
    NSDictionary * _initialPosterMediaByAssetUUIDs;
    PUWallpaperShuffleLayerStackLoadingOperation * _nextLayerStackOperation;
    NSOperationQueue * _operationQueue;
    PIParallaxStyle * _persistedStyle;
    PHPhotoLibrary * _photoLibrary;
    NSOperationQueue * _requestOperationQueue;
    NSMutableDictionary * _segmentationLoadingOperationsByAssetUUIDs;
    long long  _shuffleType;
    PIParallaxStyle * _style;
}

@property (nonatomic, readonly) NSURL *assetDirectory;
@property (nonatomic, retain) PUWallpaperShuffleLayerStackLoadingOperation *currentLayerStackOperation;
@property (nonatomic) bool depthEnabledForAllMedia;
@property (nonatomic, readonly) NSOperationQueue *exportOperationQueue;
@property (nonatomic, readonly) NSDictionary *initialPosterMediaByAssetUUIDs;
@property (nonatomic, retain) PUWallpaperShuffleLayerStackLoadingOperation *nextLayerStackOperation;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) PIParallaxStyle *persistedStyle;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) NSOperationQueue *requestOperationQueue;
@property (nonatomic, readonly) NSMutableDictionary *segmentationLoadingOperationsByAssetUUIDs;
@property (nonatomic, readonly) long long shuffleType;
@property (nonatomic, retain) PIParallaxStyle *style;

- (void).cxx_destruct;
- (void)_handleSetDepthEnabledForAllMedia:(bool)arg1;
- (void)_handleSetStyle:(id)arg1;
- (id)_loadResourceForPosterMedia:(id)arg1 isPreloading:(bool)arg2 completion:(id /* block */)arg3;
- (void)_preloadNextMedia;
- (id)assetDirectory;
- (void)cancelPreloading;
- (id)currentLayerStackOperation;
- (bool)depthEnabledForAllMedia;
- (id)exportOperationQueue;
- (void)exportResourcesForFinalPosterMedia:(id)arg1 options:(unsigned long long)arg2 assetDirectory:(id)arg3 progressHandler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)initWithPosterMedia:(id)arg1 style:(id)arg2 assetDirectory:(id)arg3 persistedStyle:(id)arg4 photoLibrary:(id)arg5 shuffleType:(long long)arg6;
- (id)initialPosterMediaByAssetUUIDs;
- (id)nextLayerStackOperation;
- (id)operationQueue;
- (id)persistedStyle;
- (id)photoLibrary;
- (void)preloadResourceForPosterMedia:(id)arg1;
- (id)requestOperationQueue;
- (void)requestResourceForPosterMedia:(id)arg1 completion:(id /* block */)arg2;
- (id)segmentationItemLoadingOperationForPosterMedia:(id)arg1;
- (id)segmentationLoadingOperationsByAssetUUIDs;
- (void)setCurrentLayerStackOperation:(id)arg1;
- (void)setDepthEnabledForAllMedia:(bool)arg1;
- (void)setNextLayerStackOperation:(id)arg1;
- (void)setStyle:(id)arg1;
- (long long)shuffleType;
- (void)startPreloadingResourcesForPosterMedia:(id)arg1;
- (void)stopPreloadingResources;
- (void)stopPreloadingResourcesWithTimeout:(double)arg1;
- (id)style;

@end

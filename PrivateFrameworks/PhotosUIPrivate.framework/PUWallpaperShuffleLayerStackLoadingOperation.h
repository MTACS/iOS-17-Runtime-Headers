
@interface PUWallpaperShuffleLayerStackLoadingOperation : PXAsyncOperation {
    NSURL * _assetDirectory;
    PFPosterEditConfiguration * _editConfiguration;
    NSError * _error;
    bool  _isPreloading;
    PFWallpaperCompoundLayerStack * _layerStack;
    PIParallaxCompoundLayerStackRequest * _layerStackRequest;
    NSString * _operationType;
    PIParallaxStyle * _persistedStyle;
    PFPosterMedia * _posterMedia;
    <PISegmentationItem> * _segmentationItem;
    PIParallaxStyle * _style;
}

@property (nonatomic, readonly) NSURL *assetDirectory;
@property (nonatomic, readonly) PFPosterEditConfiguration *editConfiguration;
@property (retain) NSError *error;
@property (nonatomic, readonly) bool isPreloading;
@property (retain) PFWallpaperCompoundLayerStack *layerStack;
@property (nonatomic, retain) PIParallaxCompoundLayerStackRequest *layerStackRequest;
@property (nonatomic, readonly, copy) NSString *operationType;
@property (nonatomic, readonly) PIParallaxStyle *persistedStyle;
@property (nonatomic, readonly) PFPosterMedia *posterMedia;
@property (retain) <PISegmentationItem> *segmentationItem;
@property (nonatomic, readonly) PIParallaxStyle *style;

- (void).cxx_destruct;
- (bool)_canLoadLayerStackFromDirectory;
- (void)_handleLayerStackResponse:(id)arg1;
- (bool)_loadLayerStackFromDirectory;
- (id)assetDirectory;
- (void)cancel;
- (id)editConfiguration;
- (id)error;
- (id)initWithPosterMedia:(id)arg1 editConfiguration:(id)arg2 assetDirectory:(id)arg3 style:(id)arg4 persistedStyle:(id)arg5 isPreloading:(bool)arg6;
- (bool)isPreloading;
- (id)layerStack;
- (id)layerStackRequest;
- (id)operationType;
- (id)persistedStyle;
- (id)posterMedia;
- (void)px_finishIfPossible;
- (bool)px_shouldWaitForCancel;
- (void)px_start;
- (id)segmentationItem;
- (void)setError:(id)arg1;
- (void)setLayerStack:(id)arg1;
- (void)setLayerStackRequest:(id)arg1;
- (void)setSegmentationItem:(id)arg1;
- (id)style;
- (bool)tryLoadLayerStackFromDirectory;

@end

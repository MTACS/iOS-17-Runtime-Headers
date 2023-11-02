
@interface PXStoryDisplayAssetResourcePreloadingOperation : PXAsyncOperation {
    <PXDisplayAsset> * _displayAsset;
    NSError * _error;
    PXMediaProvider * _mediaProvider;
    id /* block */  _progressHandler;
    <PXStoryResource> * _resource;
    double  _startTime;
}

@property (nonatomic, readonly) <PXDisplayAsset> *displayAsset;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) PXMediaProvider *mediaProvider;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, readonly) <PXStoryResource> *resource;
@property double startTime;

- (void).cxx_destruct;
- (id)displayAsset;
- (id)error;
- (id)init;
- (id)initWithDisplayAssetResource:(id)arg1 mediaProvider:(id)arg2;
- (id)mediaProvider;
- (id /* block */)progressHandler;
- (void)px_finishIfPossible;
- (void)px_start;
- (id)resource;
- (void)setError:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;

@end

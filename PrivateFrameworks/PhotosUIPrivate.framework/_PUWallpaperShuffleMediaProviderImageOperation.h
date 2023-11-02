
@interface _PUWallpaperShuffleMediaProviderImageOperation : PXAsyncOperation {
    NSError * _error;
    NUBufferRenderRequest * _renderRequest;
    PXImageRequestDescriptor * _requestDescriptor;
    id /* block */  _resultHandler;
    PXCGImage * _resultImage;
    PUWallpaperShuffleSegmentationLoadingOperation * _segmentationLoadingOperation;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) PXImageRequestDescriptor *requestDescriptor;
@property (nonatomic, readonly) id /* block */ resultHandler;
@property (nonatomic, readonly) PXCGImage *resultImage;
@property (nonatomic, readonly) PUWallpaperShuffleSegmentationLoadingOperation *segmentationLoadingOperation;

- (void).cxx_destruct;
- (void)_handleRenderResponse:(id)arg1;
- (void)cancel;
- (id)error;
- (id)initWithSegmentationOperation:(id)arg1 requestDescriptor:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)px_start;
- (id)requestDescriptor;
- (id /* block */)resultHandler;
- (id)resultImage;
- (id)segmentationLoadingOperation;

@end

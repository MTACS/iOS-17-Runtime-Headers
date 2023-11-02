
@interface PXStoryImageAssetResourcePreloadingOperation : PXStoryDisplayAssetResourcePreloadingOperation {
    double  _fractionComplete;
    long long  _imageRequestID;
    NSObject<OS_dispatch_group> * _loadingGroup;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
}

@property double fractionComplete;
@property long long imageRequestID;
@property (retain) NSObject<OS_dispatch_group> *loadingGroup;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetSize;

+ (id)_resultHandlingQueue;

- (void).cxx_destruct;
- (void)_handleImageLoadingResultWithImage:(struct CGImage { }*)arg1 info:(id)arg2;
- (void)cancel;
- (id)diagnosticDescription;
- (double)fractionComplete;
- (long long)imageRequestID;
- (id)initWithDisplayAssetResource:(id)arg1 mediaProvider:(id)arg2;
- (id)initWithDisplayAssetResource:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 mediaProvider:(id)arg3;
- (id)loadingGroup;
- (void)px_start;
- (void)setFractionComplete:(double)arg1;
- (void)setImageRequestID:(long long)arg1;
- (void)setLoadingGroup:(id)arg1;
- (struct CGSize { double x1; double x2; })targetSize;

@end


@interface PUFilmstripMediaProvider : PUMediaProvider {
    NSCache * __imageCache;
    AVAssetImageGenerator * __imageGenerator;
    long long  __requestNumber;
    AVAsset * _asset;
    bool  _deliversImagesInOrder;
    NSObject<OS_dispatch_queue> * _imageGenerationQueue;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    NSMutableDictionary * _ivarQueue_completionHandlersByRequestNumber;
    NSMutableArray * _ivarQueue_pendingResults;
    NSMutableDictionary * _ivarQueue_resultsByRequestNumber;
    UIImage * _placeholderImage;
    double  _timeTolerance;
    AVVideoComposition * _videoComposition;
}

@property (setter=_setImageCache:, nonatomic, retain) NSCache *_imageCache;
@property (setter=_setImageGenerator:, nonatomic, retain) AVAssetImageGenerator *_imageGenerator;
@property (setter=_setRequestNumber:, nonatomic) long long _requestNumber;
@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic) bool deliversImagesInOrder;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic) double timeTolerance;
@property (nonatomic, readonly) AVVideoComposition *videoComposition;

- (void).cxx_destruct;
- (void)_deliverPendingResults;
- (void)_deliverPlaceholderImage;
- (void)_deliverResult:(id)arg1;
- (void)_didGenerateImage:(id)arg1 error:(id)arg2 requestedTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 actualTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 generatorResult:(long long)arg5 forResult:(id)arg6;
- (void)_generateImageForResult:(id)arg1;
- (void)_handleSourceTimeLoadedForAsset:(id)arg1 time:(double)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 contentMode:(long long)arg4 requestNumber:(long long)arg5;
- (id)_imageCache;
- (id)_imageGenerator;
- (void)_performIvarRead:(id /* block */)arg1;
- (void)_performIvarWrite:(id /* block */)arg1;
- (long long)_requestNumber;
- (void)_setImageCache:(id)arg1;
- (void)_setImageGenerator:(id)arg1;
- (void)_setRequestNumber:(long long)arg1;
- (id)asset;
- (void)cancelAllRequests;
- (void)cancelImageRequest:(int)arg1;
- (void)dealloc;
- (bool)deliversImagesInOrder;
- (id)init;
- (id)initWithAVAsset:(id)arg1 videoComposition:(id)arg2;
- (id)placeholderImage;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (void)setDeliversImagesInOrder:(bool)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setTimeTolerance:(double)arg1;
- (double)timeTolerance;
- (id)videoComposition;

@end

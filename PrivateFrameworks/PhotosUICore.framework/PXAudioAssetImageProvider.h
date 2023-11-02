
@interface PXAudioAssetImageProvider : NSObject <PXUIImageProvider> {
    NSCache * _imageCache;
    NSMutableDictionary * _imageLoaderByIdentifier;
    NSObject<OS_os_log> * _log;
    NSMutableDictionary * _requestByClientID;
    NSCountedSet * _requestCountByCacheSpec;
    long long  _requestCounter;
    NSMutableDictionary * _requestIDByCacheSpec;
    NSMutableDictionary * _requestsByImageLoaderIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSCache *imageCache;
@property (nonatomic, readonly) NSMutableDictionary *imageLoaderByIdentifier;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) NSMutableDictionary *requestByClientID;
@property (nonatomic, readonly) NSCountedSet *requestCountByCacheSpec;
@property (nonatomic) long long requestCounter;
@property (nonatomic, readonly) NSMutableDictionary *requestIDByCacheSpec;
@property (nonatomic, readonly) NSMutableDictionary *requestsByImageLoaderIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleImageLoaderCompletionForIdentifier:(id)arg1;
- (void)cancelImageRequest:(long long)arg1;
- (id)createImageLoaderForRequest:(id)arg1;
- (id)imageCache;
- (id)imageCacheKeyForRequest:(id)arg1;
- (id)imageLoaderByIdentifier;
- (id)imageLoaderCoalescingKeyForRequest:(id)arg1;
- (id)init;
- (id)log;
- (id)requestByClientID;
- (id)requestCountByCacheSpec;
- (long long)requestCounter;
- (id)requestIDByCacheSpec;
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (id)requestsByImageLoaderIdentifier;
- (id)resultForCompletedImageLoader:(id)arg1 request:(id)arg2 error:(id*)arg3;
- (void)setRequestCounter:(long long)arg1;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;

@end

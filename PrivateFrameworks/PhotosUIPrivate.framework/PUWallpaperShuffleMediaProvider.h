
@interface PUWallpaperShuffleMediaProvider : PXMediaProvider {
    PXMediaProviderImageCacher * _imageCacher;
    NSCache * _memoryCache;
    NSOperationQueue * _operationQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _operationsByIDLock;
    NSMutableDictionary * _operationsByRequestID;
    _Atomic int  _requestIDCounter;
    PUWallpaperShuffleResourceManager * _resourceManager;
}

@property (nonatomic, readonly) PXMediaProviderImageCacher *imageCacher;
@property (nonatomic, readonly) NSCache *memoryCache;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) NSMutableDictionary *operationsByRequestID;
@property (nonatomic, readonly) PUWallpaperShuffleResourceManager *resourceManager;

- (void).cxx_destruct;
- (void)_handleOperationCompletedWithID:(long long)arg1;
- (long long)_nextRequestID;
- (void)cancelImageRequest:(long long)arg1;
- (id)imageCacher;
- (id)initWithResourceManager:(id)arg1;
- (id)memoryCache;
- (id)operationQueue;
- (id)operationsByRequestID;
- (long long)requestCGImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (id)resourceManager;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (id)thumbnailDataForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 onlyFromCache:(bool)arg3 outDataSpec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x_1_1_1; struct __CFString {} *x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; bool x_1_1_5; } x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; }*)arg4;

@end

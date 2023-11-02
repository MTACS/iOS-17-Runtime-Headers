
@interface PXPhotoKitUIMediaProvider : PXUIMediaProvider {
    PHCachingImageManager * _cachingImageManager;
    PHImageManager * _imageManager;
    _Atomic long long  _lastActivity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _lock_lastQualityClassIndex;
    PHAssetResourceQualityClass * _lock_lastResourceQualityClass;
    struct CGSize { 
        double width; 
        double height; 
    }  _lock_lastTargetSize;
    PXPhotoKitThumbnailCache * _lock_lastThumbnailCache;
    struct CGSize { 
        double width; 
        double height; 
    }  _masterThumbnailSize;
    PHPhotoLibrary * _photoLibrary;
    NSMutableArray * _preheatLock_preheatStates;
    NSObject<OS_dispatch_queue> * _preheatQueue;
    unsigned long long  _preheatQueue_state;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _preheatlock;
    NSArray * _thumbnailCaches;
    NSArray * _thumbnailQualityClasses;
}

@property (nonatomic, readonly) PHCachingImageManager *cachingImageManager;
@property (nonatomic, readonly) PHImageManager *imageManager;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

+ (id)_defaultImageManager;
+ (id)_defaultLoadingStatusManager;
+ (id)mediaProviderWithLibrary:(id)arg1;

- (void).cxx_destruct;
- (void)_getQualityClass:(id*)arg1 cache:(id*)arg2 qualityClassIndex:(long long*)arg3 forTargetSize:(struct CGSize { double x1; double x2; })arg4;
- (void)_noteActivity;
- (id)_preheatInfoForQualityClassIndex:(long long)arg1;
- (void)_preheatQueue_schedulePreheat;
- (void)_preheatQueue_scheduleUpdateAfterDelay;
- (void)_preheatQueue_update;
- (void)_schedulePreheat;
- (void)_setPreheatInfo:(id)arg1 forQualityClassIndex:(long long)arg2;
- (id)_thumbnailDataForAsset:(id)arg1 qualityClass:(id)arg2 cache:(id)arg3 onlyFromCache:(bool)arg4 outDataSpec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x_1_1_1; struct __CFString {} *x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; bool x_1_1_5; } x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; }*)arg5;
- (id)cachingImageManager;
- (void)cancelImageRequest:(long long)arg1;
- (void)enumerateAvailableThumbnailDataFormats:(id /* block */)arg1;
- (id)imageManager;
- (id)init;
- (id)initWithImageManager:(id)arg1;
- (id)initWithImageManager:(id)arg1 library:(id)arg2;
- (struct CGSize { double x1; double x2; })masterThumbnailSize;
- (id)photoLibrary;
- (void)preheatThumbnailDataForAssets:(id)arg1 origin:(long long)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3;
- (long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestURLForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (id)thumbnailDataForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 onlyFromCache:(bool)arg3 outDataSpec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x_1_1_1; struct __CFString {} *x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; bool x_1_1_5; } x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; }*)arg4;

@end

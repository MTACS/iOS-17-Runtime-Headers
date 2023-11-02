
@interface PXMediaProvider : NSObject {
    NSArray * _availableThumbnailSizes;
    PXLoadingStatusManager * _loadingStatusManager;
}

@property (nonatomic, readonly) NSArray *availableThumbnailSizes;
@property (nonatomic, retain) PXLoadingStatusManager *loadingStatusManager;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } masterThumbnailSize;

+ (id)preheatQueue;

- (void).cxx_destruct;
- (id)availableThumbnailSizes;
- (void)cancelImageRequest:(long long)arg1;
- (void)enumerateAvailableThumbnailDataFormats:(id /* block */)arg1;
- (id)loadingStatusManager;
- (struct CGSize { double x1; double x2; })masterThumbnailSize;
- (void)preheatThumbnailDataForAssets:(id)arg1 origin:(long long)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3;
- (long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestCGImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestURLForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)setLoadingStatusManager:(id)arg1;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (id)thumbnailDataForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 onlyFromCache:(bool)arg3 outDataSpec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x_1_1_1; struct __CFString {} *x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; bool x_1_1_5; } x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; }*)arg4;

@end

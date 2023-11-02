
@interface PXImportMediaProvider : PXUIMediaProvider {
    NSMutableDictionary * _extensionPlaceholderCachesByRequestSize;
    bool  _hasBeenIdle;
    PXImportImageCache * _imageCache;
    long long  _imageRequestsInflight;
    long long  _lastRequestsInflight;
    _Atomic int  _nextRequestID;
    unsigned short  _thumbnailImageFormat;
    NSMutableDictionary * _thumbnailRequestsByID;
    PXLoadingStatusManager * loadingStatusManager;
}

@property (nonatomic, retain) NSMutableDictionary *extensionPlaceholderCachesByRequestSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } gridItemSize;
@property (nonatomic) bool hasBeenIdle;
@property (nonatomic, retain) PXImportImageCache *imageCache;
@property (nonatomic) long long imageRequestsInflight;
@property (nonatomic) long long lastRequestsInflight;
@property (nonatomic, retain) PXLoadingStatusManager *loadingStatusManager;
@property (nonatomic, readonly) long long nextRequestID;
@property (nonatomic, readonly) unsigned short thumbnailImageFormat;
@property (nonatomic, retain) NSMutableDictionary *thumbnailRequestsByID;

- (void).cxx_destruct;
- (id)_newPlaceholderImageForItemWithExtension:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)_placeholderExtensionForItem:(id)arg1;
- (id)_placeholderForItem:(id)arg1 size:(unsigned long long)arg2;
- (id)cachedImageForModel:(id)arg1 atSize:(unsigned long long)arg2;
- (void)cancelImageRequest:(long long)arg1;
- (void)enumerateAvailableThumbnailDataFormats:(id /* block */)arg1;
- (id)extensionPlaceholderCachesByRequestSize;
- (struct CGSize { double x1; double x2; })gridItemSize;
- (bool)hasBeenIdle;
- (double)idleTimeOut;
- (id)imageCache;
- (long long)imageOfSize:(unsigned long long)arg1 forModel:(id)arg2 localCacheOnly:(bool)arg3 priority:(unsigned char)arg4 completion:(id /* block */)arg5;
- (long long)imageRequestsInflight;
- (id)initWithImageFormat:(unsigned short)arg1;
- (long long)lastRequestsInflight;
- (id)loadingStatusManager;
- (long long)nextRequestID;
- (void)performIdleProcessingIfNecessary;
- (void)ppt_sendMediaProviderDidProcessAsset:(id)arg1;
- (long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestCGImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestImageForImportItem:(id)arg1 ofSize:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (long long)requestImageForImportItem:(id)arg1 ofSize:(unsigned long long)arg2 priority:(unsigned char)arg3 completion:(id /* block */)arg4;
- (long long)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)sendMediaProviderThumbnailingBecameIdle;
- (void)setExtensionPlaceholderCachesByRequestSize:(id)arg1;
- (void)setHasBeenIdle:(bool)arg1;
- (void)setImageCache:(id)arg1;
- (void)setImageRequestsInflight:(long long)arg1;
- (void)setLastRequestsInflight:(long long)arg1;
- (void)setLoadingStatusManager:(id)arg1;
- (void)setThumbnailRequestsByID:(id)arg1;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (id)thumbnailDataForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 onlyFromCache:(bool)arg3 outDataSpec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x_1_1_1; struct __CFString {} *x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; bool x_1_1_5; } x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; }*)arg4;
- (bool)thumbnailExistsForModel:(id)arg1;
- (bool)thumbnailExistsForModel:(id)arg1 atSize:(unsigned long long)arg2;
- (unsigned short)thumbnailImageFormat;
- (id)thumbnailRequestsByID;

@end


@interface PXJoiningMediaProvider : PXMediaProvider {
    NSArray * _allMediaProviders;
    NSDictionary * _mediaProvidersByAssetClassName;
    NSCountedSet * _requestCountByCacheSpec;
    NSMutableDictionary * _requestIDByCacheSpec;
}

@property (nonatomic, readonly) NSArray *allMediaProviders;
@property (nonatomic, readonly) NSDictionary *mediaProvidersByAssetClassName;
@property (nonatomic, readonly) NSCountedSet *requestCountByCacheSpec;
@property (nonatomic, readonly) NSMutableDictionary *requestIDByCacheSpec;

- (void).cxx_destruct;
- (long long)_externalRequestIDForMediaProvider:(id)arg1 mediaProviderRequestID:(long long)arg2;
- (id)_mediaProviderForAsset:(id)arg1;
- (id)allMediaProviders;
- (void)cancelImageRequest:(long long)arg1;
- (id)init;
- (id)initWithMediaProvidersByAssetClassName:(id)arg1;
- (id)mediaProvidersByAssetClassName;
- (long long)requestCGImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (id)requestCountByCacheSpec;
- (id)requestIDByCacheSpec;
- (long long)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (id)thumbnailDataForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 onlyFromCache:(bool)arg3 outDataSpec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x_1_1_1; struct __CFString {} *x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; bool x_1_1_5; } x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; }*)arg4;

@end


@interface PXMediaProviderImageCacher : NSObject {
    PXMediaProvider * _mediaProvider;
    NSCountedSet * _requestCountByCacheSpec;
    NSMutableDictionary * _requestIDByCacheSpec;
}

@property (nonatomic) PXMediaProvider *mediaProvider;
@property (nonatomic, readonly) NSCountedSet *requestCountByCacheSpec;
@property (nonatomic, readonly) NSMutableDictionary *requestIDByCacheSpec;

- (void).cxx_destruct;
- (id)initWithMediaProvider:(id)arg1;
- (id)mediaProvider;
- (id)requestCountByCacheSpec;
- (id)requestIDByCacheSpec;
- (void)setMediaProvider:(id)arg1;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;

@end

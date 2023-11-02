
@interface AXMImageNode : AXMSourceNode

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void)produceImage:(id)arg1;
- (void)triggerWithImage:(id)arg1 options:(id)arg2 cacheKey:(id)arg3 resultHandler:(id /* block */)arg4;
- (void)triggerWithImageAssetLocalIdentifier:(id)arg1 photoLibraryURL:(id)arg2 options:(id)arg3 cacheKey:(id)arg4 resultHandler:(id /* block */)arg5;
- (void)triggerWithImageAssetLocalIdentifier:(id)arg1 photoLibraryURL:(id)arg2 usePHAsset:(bool)arg3 options:(id)arg4 cacheKey:(id)arg5 resultHandler:(id /* block */)arg6;
- (void)triggerWithImageURL:(id)arg1 assetLocalIdentifier:(id)arg2 photoLibraryURL:(id)arg3 options:(id)arg4 cacheKey:(id)arg5 resultHandler:(id /* block */)arg6;
- (void)triggerWithImageURL:(id)arg1 options:(id)arg2 cacheKey:(id)arg3 resultHandler:(id /* block */)arg4;
- (void)triggerWithPixelBuffer:(struct __CVBuffer { }*)arg1 exifOrientation:(unsigned int)arg2 options:(id)arg3 cacheKey:(id)arg4 resultHandler:(id /* block */)arg5;

@end

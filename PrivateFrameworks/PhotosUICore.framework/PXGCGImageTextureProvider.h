
@interface PXGCGImageTextureProvider : PXGTextureProvider {
    NSCache * _additionalInfoCache;
    NSMapTable * _aliveImagesCache;
    NSCache * _imageCache;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_clearStrongCaches;
- (void)_updateCacheLimit;
- (void)cacheAdditionalInfo:(id)arg1 withKey:(id)arg2;
- (id)init;
- (void)invalidateCache;
- (void)lowMemoryModeDidChange;
- (void)releaseCachedResources;
- (void)requestCGImageAndAdditionalInfoWithCacheKey:(id)arg1 imageProvider:(id /* block */)arg2 resultHandler:(id /* block */)arg3;
- (void)requestCGImageWithCacheKey:(id)arg1 imageProvider:(id /* block */)arg2 resultHandler:(id /* block */)arg3;
- (id)workQueue;

@end

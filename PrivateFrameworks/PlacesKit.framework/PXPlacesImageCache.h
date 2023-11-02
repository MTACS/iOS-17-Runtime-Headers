
@interface PXPlacesImageCache : NSObject {
    NSCache * _cache;
}

- (void).cxx_destruct;
- (void)cacheRenderedImage:(id)arg1 forGeotaggble:(id)arg2 andKey:(id)arg3;
- (id)cachedRenderedImageForGeotaggble:(id)arg1 andKey:(id)arg2;
- (id)init;
- (void)removeAllObjects;
- (void)removeCachedRenderedImageForGeotaggble:(id)arg1 andKey:(id)arg2;

@end

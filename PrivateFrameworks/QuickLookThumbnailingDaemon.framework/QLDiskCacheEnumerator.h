
@interface QLDiskCacheEnumerator : NSObject {
    QLDiskCache * _diskCache;
}

+ (double)_expectedThumbnailSizeForRequest:(id)arg1;
+ (bool)cachedThumbnailDataIsLowQuality:(id)arg1 forThumbnailRequest:(id)arg2;

- (void).cxx_destruct;
- (id)initWithDiskCache:(id)arg1;

@end

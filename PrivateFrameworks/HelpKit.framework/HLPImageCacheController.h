
@interface HLPImageCacheController : HLPDataCacheController

+ (id)defaultInMemoryImageCache;
+ (id)sharedInstance;

- (void)addInMemoryCacheForImage:(id)arg1 identifier:(id)arg2 cost:(unsigned long long)arg3;
- (void)addInMemoryCacheForImage:(id)arg1 path:(id)arg2 cost:(unsigned long long)arg3;
- (void)commonInit;
- (id)formattedDataWithData:(id)arg1;
- (id)formattedDataWithFileURL:(id)arg1;
- (void)formattedDataWithFileURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)getImageForPath:(id)arg1;
- (id)imageFromMemoryCacheForPath:(id)arg1;
- (bool)isURLValid:(id)arg1;
- (id)newDataCache;
- (void)removeAllDataCache;
- (void)removeInMemoryCache;
- (void)removeInMemoryCacheForPath:(id)arg1;

@end

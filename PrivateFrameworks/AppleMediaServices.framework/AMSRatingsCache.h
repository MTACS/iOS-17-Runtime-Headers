
@interface AMSRatingsCache : NSObject {
    unsigned long long  _mediaType;
    NSString * _storeFront;
}

@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) NSString *storeFront;

- (void).cxx_destruct;
- (bool)_hasCachedData;
- (bool)addCacheData:(id)arg1;
- (id)cacheDirectory;
- (id)cachePath;
- (id)cacheTitle;
- (void)clearCacheIfNeeded;
- (id)getCacheData;
- (id)initWithMediaType:(unsigned long long)arg1;
- (id)initWithMediaType:(unsigned long long)arg1 storeFront:(id)arg2;
- (unsigned long long)mediaType;
- (id)storeFront;

@end

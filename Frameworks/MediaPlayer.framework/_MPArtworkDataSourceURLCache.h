
@interface _MPArtworkDataSourceURLCache : NSURLCache {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMapTable * _requestSizeMap;
}

- (void).cxx_destruct;
- (id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3;
- (void)setRepresentationSize:(struct CGSize { double x1; double x2; })arg1 forRequest:(id)arg2;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;

@end

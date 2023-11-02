
@interface NTKSiderealCache : NSObject {
    NSCache * _aplCache;
    NSCache * _dataCache;
    NSObject<OS_dispatch_queue> * _readerWriterQueue;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)_init;
- (void)_purgeEverything;
- (float)aplForDate:(id)arg1 generationBlock:(id /* block */)arg2;
- (id)imageDataForKey:(id)arg1 generationBlock:(id /* block */)arg2;
- (void)purgeAPLCache;
- (void)purgeCachedKey:(id)arg1;

@end

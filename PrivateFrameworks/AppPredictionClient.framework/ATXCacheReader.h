
@interface ATXCacheReader : NSObject {
    NSString * _cacheBasePath;
    _PASLock * _lock;
    NSObject<OS_dispatch_source> * _vnodeSource;
}

- (void).cxx_destruct;
- (void)_handleDirChange;
- (void)dealloc;
- (id)init;
- (id)initWithCacheBasePath:(id)arg1;
- (id)readCacheFileForCachePath:(id)arg1;
- (id)readCacheFileForConsumerSubtype:(unsigned char)arg1;

@end

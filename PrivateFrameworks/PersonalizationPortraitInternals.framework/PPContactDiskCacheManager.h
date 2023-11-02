
@interface PPContactDiskCacheManager : NSObject {
    _PASLock * _lock;
}

- (void).cxx_destruct;
- (void)accessCacheWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithPath:(id)arg1;
- (void)mutateCacheWithBlock:(id /* block */)arg1;

@end

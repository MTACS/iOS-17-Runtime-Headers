
@interface PPMeCardCacheManager : NSObject {
    _PASLock * _lock;
}

- (void).cxx_destruct;
- (void)accessCacheWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithPath:(id)arg1;

@end

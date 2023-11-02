
@interface XRExpiredPidCacheServiceProtected : NSObject {
    _XRExpiredPidCache * _cache;
    NSObject<OS_dispatch_queue> * _cacheQ;
}

- (void).cxx_destruct;
- (void)_performOnCache:(id /* block */)arg1;
- (id)init;

@end

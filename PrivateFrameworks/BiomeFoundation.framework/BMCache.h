
@interface BMCache : NSObject {
    BMCache * _fallback;
    id /* block */  _isExpiredBlock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _mapTable;
}

@property (copy) id /* block */ isExpiredBlock;

+ (id)strongCache;
+ (id)strongCacheWithFallbackCache:(id)arg1;
+ (id)weakCache;

- (void).cxx_destruct;
- (id)_initWithMapTable:(id)arg1 fallback:(id)arg2;
- (id)cachedObjectWithKey:(id)arg1;
- (id)cachedObjectWithKey:(id)arg1 missHandler:(id /* block */)arg2;
- (id /* block */)isExpiredBlock;
- (void)pruneCacheWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)removeCachedObjectForKey:(id)arg1;
- (void)removeCachedObjectForKey:(id)arg1 performWhileLocked:(id /* block */)arg2;
- (void)setIsExpiredBlock:(id /* block */)arg1;

@end

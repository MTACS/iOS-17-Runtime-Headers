
@interface PMObjectCache : NSObject {
    NSRecursiveLock * _cacheLock;
    unsigned long long  _currentSize;
    float  _decayRate;
    NSMapTable * _mapTable;
    unsigned long long  _maxSize;
    unsigned long long  _numberOfCalls;
    float  _penalty;
    int  _purgesInProgress;
    unsigned long long  _reservedMemory;
    float  _responseRate;
    unsigned long long  _setSize;
}

+ (void)releaseSharedInstance;
+ (id)sharedInstance;

- (int)addObject:(id)arg1 cacheKey:(id)arg2 size:(unsigned long long)arg3 cost:(double)arg4;
- (int)addObject:(id)arg1 cacheKey:(id)arg2 size:(unsigned long long)arg3 cost:(double)arg4 retDidAddObject:(bool*)arg5;
- (void)clearCache;
- (id)copyObjectForKey:(id)arg1 cost:(double*)arg2;
- (id)copyObjectForKeyDontUpdateAccessTime:(id)arg1 cost:(double*)arg2;
- (id)copyObjectForKeyImpl:(id)arg1 cost:(double*)arg2 updateAccessTime:(bool)arg3;
- (unsigned long long)currentSize;
- (void)dealloc;
- (unsigned long long)getCacheMemoryUsed;
- (unsigned long long)getCacheSize;
- (id)initWithCacheSize:(unsigned long long)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)reserveCacheMemory:(long long)arg1;
- (unsigned long long)reservedMemorySize;
- (void)setCacheSize:(unsigned long long)arg1;
- (void)shutdownCache;

@end

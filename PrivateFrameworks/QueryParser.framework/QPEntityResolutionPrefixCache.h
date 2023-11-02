
@interface QPEntityResolutionPrefixCache : NSObject {
    NSMutableOrderedSet * _cache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _maxCount;
    long long  _minPrefixLength;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (void)cacheGroundedToken:(id)arg1;
- (bool)hasPreviouslyGroundedPrefixOfToken:(id)arg1;
- (id)initWithMaxCount:(long long)arg1 minPrefixLength:(long long)arg2;

@end

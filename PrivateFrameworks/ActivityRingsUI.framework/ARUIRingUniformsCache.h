
@interface ARUIRingUniformsCache : NSObject {
    NSCache * _cache;
}

+ (id)cacheWithLimit:(unsigned long long)arg1;
+ (id)defaultCache;

- (void).cxx_destruct;
- (void)clearCache;
- (id)initWithLimit:(unsigned long long)arg1;
- (id)uniformsForRing:(id)arg1 renderedInContext:(id)arg2;

@end

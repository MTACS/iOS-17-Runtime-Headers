
@interface _DKObjectFromMOCache : NSObject {
    NSMutableDictionary * _cache;
    NSMutableDictionary * _cacheEntries;
    NSMutableDictionary * _cacheHits;
    NSMutableDictionary * _cacheMisses;
}

- (void).cxx_destruct;
- (id)init;

@end

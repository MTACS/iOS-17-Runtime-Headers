
@interface STReferenceCountedCache : NSObject {
    NSMutableDictionary * _cache;
    NSMutableDictionary * _referenceCounts;
}

- (void).cxx_destruct;
- (void)cacheObject:(id)arg1 forKey:(id)arg2;
- (id)cachedObjectForKey:(id)arg1;
- (void)clearObjectForKey:(id)arg1;
- (void)decrementReferenceCountForKey:(id)arg1;
- (void)incrementReferenceCountForKey:(id)arg1;
- (id)init;

@end

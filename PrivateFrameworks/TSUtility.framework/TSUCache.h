
@interface TSUCache : TSUFlushableObject {
    NSMutableDictionary * mCache;
    NSString * mCacheName;
}

- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (bool)hasFlushableContent;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)p_addEntriesFromDictionary:(id)arg1;
- (id)p_objectForKey:(id)arg1;
- (id)p_objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)unload;

@end

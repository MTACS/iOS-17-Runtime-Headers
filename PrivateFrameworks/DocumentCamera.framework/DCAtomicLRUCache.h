
@interface DCAtomicLRUCache : DCLRUCache

- (id)allKeys;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end

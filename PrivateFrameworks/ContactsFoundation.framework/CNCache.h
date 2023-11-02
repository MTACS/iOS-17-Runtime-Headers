
@interface CNCache : NSObject {
    NSArray * _boundingStrategies;
    NSMutableArray * _didEvictHandlers;
    NSArray * _evictedKeysAndValues;
    <CNScheduler> * _resourceScheduler;
    NSMutableDictionary * _storage;
}

@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allObjects;
@property (nonatomic, readonly, copy) NSArray *boundingStrategies;
@property (nonatomic, readonly) NSMutableArray *didEvictHandlers;
@property (nonatomic, copy) NSArray *evictedKeysAndValues;
@property (readonly) unsigned long long overestimatedCount;
@property (nonatomic, readonly) <CNScheduler> *resourceScheduler;
@property (nonatomic, readonly) NSMutableDictionary *storage;

+ (id)atomicCache;
+ (id)atomicCacheScheduler;
+ (id)boundingStrategyWithCapacity:(unsigned long long)arg1;
+ (id)boundingStrategyWithTTL:(double)arg1;
+ (id)boundingStrategyWithTTL:(double)arg1 renewalOptions:(unsigned long long)arg2 timeProvider:(id)arg3;
+ (id)cache;
+ (id)nonatomicCacheScheduler;

- (void).cxx_destruct;
- (void)addDidEvictHandler:(id /* block */)arg1;
- (id)allKeys;
- (id)allObjects;
- (id)boundingStrategies;
- (void)callDidEvictHandlersIfNecessary;
- (id)description;
- (id)didEvictHandlers;
- (id)evictedKeysAndValues;
- (id)init;
- (id)initWithBoundingStrategies:(id)arg1 resourceScheduler:(id)arg2;
- (id)initWithResourceScheduler:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 onCacheMiss:(id /* block */)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (unsigned long long)overestimatedCount;
- (void)performWithResourceLock:(id /* block */)arg1;
- (void)removeAllObjects;
- (void)resourceLock_evictObjectsForKeys:(id)arg1;
- (void)resourceLock_setObject:(id)arg1 forKey:(id)arg2;
- (void)resourceLock_validateAllKeys;
- (void)resourceLock_validateKey:(id)arg1;
- (void)resourceLock_validateKeys:(id)arg1;
- (void)resourceLock_willAccessKey:(id)arg1;
- (void)resourceLock_willSetObject:(id)arg1 forKey:(id)arg2;
- (id)resourceScheduler;
- (id)resultWithResourceLock:(id /* block */)arg1;
- (void)setEvictedKeysAndValues:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)storage;

@end


@interface JFXLRUCache : NSObject {
    NSObject<OS_dispatch_queue> * _cacheQueue;
    unsigned long long  _capacity;
    NSMutableDictionary * _dictionary;
    NSMutableOrderedSet * _keys;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cacheQueue;
@property (nonatomic) unsigned long long capacity;
@property (readonly) unsigned long long count;
@property (nonatomic, readonly) NSMutableDictionary *dictionary;
@property (nonatomic, retain) NSMutableOrderedSet *keys;

- (void).cxx_destruct;
- (void)JT_markRecentlyUsed:(id)arg1;
- (bool)JT_removeLeastRecentlyUsedIfAtCapacity;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)cacheQueue;
- (unsigned long long)capacity;
- (unsigned long long)count;
- (void)dealloc;
- (id)dictionary;
- (void)highMemoryWarning;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)keys;
- (id)objectForKey:(id)arg1;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setCapacity:(unsigned long long)arg1;
- (void)setKeys:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end

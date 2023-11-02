
@interface ICCache : NSCache {
    NSObject<OS_dispatch_source> * _memoryWarningEventSource;
    NSMutableSet * _mutableKeys;
    NSObject<OS_dispatch_queue> * _mutableKeysAccessQueue;
}

@property (nonatomic, readonly) NSSet *allKeys;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *memoryWarningEventSource;
@property (nonatomic, retain) NSMutableSet *mutableKeys;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *mutableKeysAccessQueue;

+ (id)cacheCollection;
+ (void)purgeAllCaches;

- (void).cxx_destruct;
- (id)allKeys;
- (void)dealloc;
- (id)init;
- (id)memoryWarningEventSource;
- (id)mutableKeys;
- (id)mutableKeysAccessQueue;
- (void)receivedMemoryWarning;
- (void)registerForMemoryWarnings;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsWithKeyContainingString:(id)arg1;
- (void)setMemoryWarningEventSource:(id)arg1;
- (void)setMutableKeys:(id)arg1;
- (void)setMutableKeysAccessQueue:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)unregisterForMemoryWarnings;

@end

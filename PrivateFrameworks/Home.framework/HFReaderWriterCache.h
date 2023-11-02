
@interface HFReaderWriterCache : NSObject {
    NSMutableDictionary * _cachedObjects;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _rwlock;
}

@property (nonatomic, readonly) NSMutableDictionary *cachedObjects;

- (void).cxx_destruct;
- (id)cachedObjects;
- (void)dealloc;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)performBlockWithWriteLock:(id /* block */)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 onlyIfNoObjectForKey:(id)arg2;
- (id)tryObjectForKey:(id)arg1;

@end

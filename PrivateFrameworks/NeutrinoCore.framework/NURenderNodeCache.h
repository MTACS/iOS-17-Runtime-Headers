
@interface NURenderNodeCache : NSObject {
    NSHashTable * _cache;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addNode:(id)arg1;
- (void)_mediaServicesWereReset:(id)arg1;
- (void)addNode:(id)arg1;
- (id)cachedNodeForNode:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)retrieveAndCacheNode:(id)arg1;
- (unsigned long long)unhitCacheEntriesCount;

@end

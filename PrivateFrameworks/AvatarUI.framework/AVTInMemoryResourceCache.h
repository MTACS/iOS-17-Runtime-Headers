
@interface AVTInMemoryResourceCache : NSObject <AVTResourceCache, NSCacheDelegate> {
    <AVTUILogger> * _logger;
    NSMutableArray * _orderedEntries;
    NSCache * _storage;
    NSObject<OS_dispatch_queue> * _storageLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) NSMutableArray *orderedEntries;
@property (nonatomic, readonly) NSCache *storage;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *storageLock;
@property (readonly) Class superclass;

+ (unsigned long long)costForItem:(id)arg1 scope:(id)arg2;
+ (id)keyForItem:(id)arg1 scope:(id)arg2;

- (void).cxx_destruct;
- (id)_resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(id /* block */)arg3;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)clearCache;
- (void)dealloc;
- (void)evictResourceFromCache:(id)arg1 scope:(id)arg2;
- (void)handleChangeForItemForKey:(id)arg1;
- (id)initWithLockProvider:(id /* block */)arg1 totalCostLimit:(unsigned long long)arg2 logger:(id)arg3;
- (id)logger;
- (void)nts_evictObjectsToFreeUpCost:(unsigned long long)arg1;
- (id)observeChangesForItem:(id)arg1 key:(id)arg2;
- (id)orderedEntries;
- (void)performStorageWork:(id /* block */)arg1;
- (bool)resourceExistsInCacheForItem:(id)arg1 scope:(id)arg2;
- (id)resourceForItem:(id)arg1 scope:(id)arg2;
- (id)resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(id /* block */)arg3;
- (id)storage;
- (id)storageLock;

@end

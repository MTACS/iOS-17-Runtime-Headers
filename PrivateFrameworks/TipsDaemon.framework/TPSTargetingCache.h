
@interface TPSTargetingCache : NSObject {
    NSMutableDictionary * _cacheResultDictionary;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

@property (nonatomic, retain) NSMutableDictionary *cacheResultDictionary;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;

- (void).cxx_destruct;
- (void)addCacheResult:(long long)arg1 forIdentifier:(id)arg2;
- (id)cacheResultDictionary;
- (long long)cacheResultForIdentifier:(id)arg1;
- (id)init;
- (void)reset;
- (void)setCacheResultDictionary:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (id)syncQueue;

@end

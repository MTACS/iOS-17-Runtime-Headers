
@interface DDSCache : NSObject {
    NSMutableDictionary * _cache;
    <DDSCacheDelegate> * _delegate;
    unsigned long long  _maxCount;
    NSMutableOrderedSet * _order;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSMutableDictionary *cache;
@property (nonatomic) <DDSCacheDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long maxCount;
@property (nonatomic, readonly) NSMutableOrderedSet *order;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)cache;
- (void)cacheObject:(id)arg1 forKey:(id)arg2;
- (void)clearCache;
- (id)delegate;
- (id)initWithMaxCount:(unsigned long long)arg1;
- (unsigned long long)maxCount;
- (id)objectForKey:(id)arg1;
- (id)order;
- (id)queue;
- (void)removeEntriesWithPrefixKey:(id)arg1;
- (void)setDelegate:(id)arg1;

@end

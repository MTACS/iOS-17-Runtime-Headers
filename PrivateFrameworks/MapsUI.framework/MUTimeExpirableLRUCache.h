
@interface MUTimeExpirableLRUCache : NSObject <MULRUCacheDelegate> {
    unsigned long long  _maxSize;
    double  _timeToLiveInSeconds;
    NSMutableDictionary * _timestampsByCacheKeys;
    MULRUCache * _valuesByCacheKeys;
}

@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long maxSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithMaxSize:(unsigned long long)arg1 timeToLive:(double)arg2;
- (void)lruCache:(id)arg1 willEvictObject:(id)arg2 forKey:(id)arg3;
- (unsigned long long)maxSize;
- (unsigned long long)numberOfTimestamps;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)timestampForKey:(id)arg1;

@end

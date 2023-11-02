
@interface MTNonretainedCache : NSObject {
    NSMutableDictionary * _cache;
}

@property (nonatomic, retain) NSMutableDictionary *cache;

- (void).cxx_destruct;
- (id)cache;
- (id)init;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1 creation:(id /* block */)arg2;
- (void)setCache:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end

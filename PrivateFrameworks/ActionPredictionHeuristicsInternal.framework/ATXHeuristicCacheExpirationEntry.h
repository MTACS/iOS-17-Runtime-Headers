
@interface ATXHeuristicCacheExpirationEntry : NSObject {
    ATXHeuristicResultCache * _cache;
    NSString * _heuristicName;
}

@property (nonatomic) ATXHeuristicResultCache *cache;
@property (nonatomic, retain) NSString *heuristicName;

- (void).cxx_destruct;
- (id)cache;
- (unsigned long long)hash;
- (id)heuristicName;
- (id)initWithHeuristic:(id)arg1 cache:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setHeuristicName:(id)arg1;

@end

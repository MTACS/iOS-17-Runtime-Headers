
@interface ATXHeuristicResultCacheEntry : NSObject {
    NSArray * _actions;
    ATXHeuristicResultCache * _cache;
    NSSet * _expirers;
    NSString * _heuristicName;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHeuristic:(id)arg1 cache:(id)arg2;
- (void)setActions:(id)arg1 expirers:(id)arg2;

@end

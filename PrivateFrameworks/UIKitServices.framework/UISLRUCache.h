
@interface UISLRUCache : NSObject {
    NSMutableOrderedSet * _cache;
    unsigned long long  _limit;
}

- (void).cxx_destruct;
- (id)evictedObjectForUsedObject:(id)arg1;
- (id)initWithLimit:(unsigned long long)arg1;

@end

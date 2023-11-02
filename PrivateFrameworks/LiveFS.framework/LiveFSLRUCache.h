
@interface LiveFSLRUCache : NSObject {
    int  _countLimit;
    NSMutableDictionary * _mapping;
    NSMutableArray * _usageOrder;
}

@property int countLimit;
@property (retain) NSMutableDictionary *mapping;
@property (retain) NSMutableArray *usageOrder;

- (void).cxx_destruct;
- (int)countLimit;
- (id)init;
- (id)mapping;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyLocked:(id)arg1;
- (void)removeAllObjects;
- (void)removeLastItem;
- (void)removeObjectForKey:(id)arg1;
- (void)setCountLimit:(int)arg1;
- (void)setMapping:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setUsageOrder:(id)arg1;
- (id)usageOrder;

@end

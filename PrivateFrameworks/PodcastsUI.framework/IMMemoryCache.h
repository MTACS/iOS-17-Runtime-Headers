
@interface IMMemoryCache : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    unsigned long long  _count;
    unsigned long long  _countLimit;
    id  _delegate;
    bool  _evictsItemsWithDiscardedContent;
    NSMutableDictionary * _items;
    NSMutableArray * _itemsArray;
    double  _lastCheckTime;
    NSString * _name;
    NSOperationQueue * _queue;
    unsigned long long  _totalCost;
    unsigned long long  _totalCostLimit;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long countLimit;
@property (nonatomic) id delegate;
@property (nonatomic) bool evictsItemsWithDiscardedContent;
@property (nonatomic, retain) NSMutableDictionary *items;
@property (nonatomic, retain) NSMutableArray *itemsArray;
@property (nonatomic) double lastCheckTime;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSOperationQueue *queue;
@property (nonatomic) unsigned long long totalCost;
@property (nonatomic) unsigned long long totalCostLimit;

- (void).cxx_destruct;
- (void)_addItem:(id)arg1 forKey:(id)arg2;
- (void)_checkLimits;
- (void)_checkLimitsAndEvictObjects;
- (void)_removeObjectForKey:(id)arg1;
- (bool)_shouldRemoveIndex:(unsigned long long)arg1;
- (id)accessQueue;
- (id)allKeys;
- (void)checkLimitsAndEvictObjects;
- (unsigned long long)costForObjectWithKey:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)countLimit;
- (id)delegate;
- (id)description;
- (bool)evictsItemsWithDiscardedContent;
- (id)init;
- (id)items;
- (id)itemsArray;
- (double)lastCheckTime;
- (id)name;
- (long long)numberOfCachedItems;
- (id)objectForKey:(id)arg1;
- (id)queue;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeyWithPrefix:(id)arg1;
- (void)setAccessQueue:(id)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setCountLimit:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEvictsItemsWithDiscardedContent:(bool)arg1;
- (void)setItems:(id)arg1;
- (void)setItemsArray:(id)arg1;
- (void)setLastCheckTime:(double)arg1;
- (void)setName:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)setQueue:(id)arg1;
- (void)setTotalCost:(unsigned long long)arg1;
- (void)setTotalCostLimit:(unsigned long long)arg1;
- (unsigned long long)totalCost;
- (unsigned long long)totalCostLimit;

@end

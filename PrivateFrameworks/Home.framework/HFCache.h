
@interface HFCache : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    id /* block */  _defaultObjectEvictionComparator;
    <HFCacheDelegate> * _delegate;
    NSMapTable * _mapTable;
    id /* block */  _overrideObjectEvictionComparator;
    unsigned long long  _totalCost;
    unsigned long long  _totalCostLimit;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly, copy) id /* block */ defaultObjectEvictionComparator;
@property (nonatomic, readonly) <HFCacheDelegate> *delegate;
@property (nonatomic, retain) NSMapTable *mapTable;
@property (nonatomic, copy) id /* block */ overrideObjectEvictionComparator;
@property (nonatomic) unsigned long long totalCost;
@property (nonatomic) unsigned long long totalCostLimit;

- (void).cxx_destruct;
- (bool)_canAccommodateCost:(unsigned long long)arg1;
- (bool)_canAccommodateCostWithoutRemoval:(unsigned long long)arg1;
- (void)_didEvictObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (id /* block */)_overrideObjectEvictionComparator;
- (void)_removeObjectForKey:(id)arg1;
- (bool)_removeObjectsToAccommodateCost:(unsigned long long)arg1;
- (void)_setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 removeObjectsToAccommodateCost:(bool)arg4;
- (void)_setOverrideObjectEvictionComparator:(id /* block */)arg1;
- (void)_setTotalCost:(unsigned long long)arg1;
- (void)_setTotalCostLimit:(unsigned long long)arg1;
- (unsigned long long)_totalCost;
- (unsigned long long)_totalCostLimit;
- (id)accessQueue;
- (bool)canAccommodateCost:(unsigned long long)arg1;
- (unsigned long long)count;
- (id /* block */)defaultObjectEvictionComparator;
- (id)delegate;
- (id)description;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)mapTable;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id /* block */)overrideObjectEvictionComparator;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (bool)removeObjectsToAccommodateCost:(unsigned long long)arg1;
- (void)setAccessQueue:(id)arg1;
- (void)setMapTable:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 removeObjectsToAccommodateCost:(bool)arg4;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setOverrideObjectEvictionComparator:(id /* block */)arg1;
- (void)setTotalCost:(unsigned long long)arg1;
- (void)setTotalCostLimit:(unsigned long long)arg1;
- (unsigned long long)totalCost;
- (unsigned long long)totalCostLimit;

@end

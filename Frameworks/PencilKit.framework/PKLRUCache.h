
@interface PKLRUCache : NSObject {
    unsigned long long  _currentCost;
    PKLRUCacheItem * _firstItem;
    long long  _freeItemCount;
    PKLRUCacheItem * _freeItems;
    NSMutableArray * _freeKeys;
    NSMapTable * _itemTable;
    PKLRUCacheItem * _lastItem;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _totalCostLimit;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

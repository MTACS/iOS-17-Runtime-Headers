
@interface PXLRUMemoryCache : NSObject {
    NSMapTable * _cacheDictionary;
    NSMapTable * _leastRecentUsedDictionary;
    struct _PXLRUMemoryCacheList { unsigned long long x1; struct _PXLRUMemoryCacheListElement {} *x2; struct _PXLRUMemoryCacheListElement {} *x3; } * _leastRecentUsedList;
    unsigned long long  _numberOfSlots;
    NSRecursiveLock * _recursiveLock;
}

@property (nonatomic, readonly) unsigned long long currentUsedSlots;
@property (nonatomic) unsigned long long numberOfSlots;

- (void)_promoteListElement:(struct _PXLRUMemoryCacheListElement { id x1; struct _PXLRUMemoryCacheListElement {} *x2; struct _PXLRUMemoryCacheListElement {} *x3; }*)arg1;
- (void)_removeListElement:(struct _PXLRUMemoryCacheListElement { id x1; struct _PXLRUMemoryCacheListElement {} *x2; struct _PXLRUMemoryCacheListElement {} *x3; }*)arg1;
- (id)allKeys;
- (unsigned long long)currentUsedSlots;
- (void)dealloc;
- (id)description;
- (void)evictSlots:(unsigned long long)arg1;
- (id)init;
- (unsigned long long)numberOfSlots;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setNumberOfSlots:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end

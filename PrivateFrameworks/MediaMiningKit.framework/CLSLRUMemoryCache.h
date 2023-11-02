
@interface CLSLRUMemoryCache : NSObject {
    NSMapTable * _cacheDictionary;
    NSMapTable * _leastRecentUsedDictionary;
    struct _CLSLRUMemoryCacheList { unsigned long long x1; struct _CLSLRUMemoryCacheListElement {} *x2; struct _CLSLRUMemoryCacheListElement {} *x3; } * _leastRecentUsedList;
    unsigned long long  _numberOfSlots;
    NSRecursiveLock * _recursiveLock;
}

@property (nonatomic, readonly) unsigned long long currentUsedSlots;
@property (nonatomic) unsigned long long numberOfSlots;

- (void)_promoteListElement:(struct _CLSLRUMemoryCacheListElement { id x1; struct _CLSLRUMemoryCacheListElement {} *x2; struct _CLSLRUMemoryCacheListElement {} *x3; }*)arg1;
- (void)_removeListElement:(struct _CLSLRUMemoryCacheListElement { id x1; struct _CLSLRUMemoryCacheListElement {} *x2; struct _CLSLRUMemoryCacheListElement {} *x3; }*)arg1;
- (id)allKeys;
- (unsigned long long)currentUsedSlots;
- (void)dealloc;
- (void)evictSlots:(unsigned long long)arg1;
- (id)init;
- (bool)loadFromURL:(id)arg1;
- (unsigned long long)numberOfSlots;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setNumberOfSlots:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (bool)writeToURL:(id)arg1;

@end

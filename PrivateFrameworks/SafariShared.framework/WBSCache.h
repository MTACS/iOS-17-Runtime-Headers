
@interface WBSCache : NSObject {
    NSCache * _cache;
    NSObject<OS_dispatch_queue> * _cacheQueue;
    NSMapTable * _weakObjectsTable;
}

- (void).cxx_destruct;
- (void)_recacheObjectForKey:(id)arg1;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end

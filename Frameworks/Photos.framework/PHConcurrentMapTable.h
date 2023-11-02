
@interface PHConcurrentMapTable : NSObject {
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSMapTable * _protectedTable;
}

+ (id)mapTable;

- (void).cxx_destruct;
- (void)_dispatchIsolatedRead:(id /* block */)arg1;
- (void)_dispatchIsolatedWriteAsync:(id /* block */)arg1;
- (void)_dispatchIsolatedWriteSync:(id /* block */)arg1;
- (id)allKeys;
- (unsigned long long)count;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (bool)tryRemoveObjectForKey:(id)arg1;

@end

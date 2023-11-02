
@protocol GCSTombstones

@required

- (void)addObserver:(NSObject *)arg1 forKeyPath:(NSString *)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)removeObserver:(NSObject *)arg1 forKeyPath:(NSString *)arg2;
- (void)removeObserver:(NSObject *)arg1 forKeyPath:(NSString *)arg2 context:(void*)arg3;
- (<GCSSettingsStoreService> *)settingsStore;
- (bool)storeVersionIsCompatible;
- (GCSTombstone *)tombstoneForIdentifier:(NSString *)arg1;
- (NSArray *)values;

@end

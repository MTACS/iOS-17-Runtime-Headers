
@protocol GCSGames

@required

- (void)addObserver:(NSObject *)arg1 forKeyPath:(NSString *)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (GCSGame *)gameWithBundleIdentifier:(NSString *)arg1;
- (void)removeObserver:(NSObject *)arg1 forKeyPath:(NSString *)arg2;
- (void)removeObserver:(NSObject *)arg1 forKeyPath:(NSString *)arg2 context:(void*)arg3;
- (<GCSSettingsStoreService> *)settingsStore;
- (bool)storeVersionIsCompatible;
- (NSArray *)values;

@end

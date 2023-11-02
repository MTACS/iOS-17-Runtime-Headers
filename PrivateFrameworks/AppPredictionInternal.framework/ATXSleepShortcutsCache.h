
@interface ATXSleepShortcutsCache : NSObject {
    ATXGenericFileBasedCache * _cache;
}

- (void).cxx_destruct;
- (id)_cache;
- (void)_fetchAndCacheSleepShortcutsWithTransaction:(id)arg1 completion:(id /* block */)arg2;
- (void)cacheSleepShortcutsIfNecessary;
- (void)fetchSleepShortcutsWithCompletion:(id /* block */)arg1;

@end

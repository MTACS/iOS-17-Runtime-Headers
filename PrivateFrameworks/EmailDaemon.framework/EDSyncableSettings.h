
@interface EDSyncableSettings : NSObject {
    EFCancelationToken * _cancelable;
    EFLocked * _changeActionsByKey;
    NSUserDefaults * _defaults;
    id /* block */  _proxyChangeHandler;
    <EFAssertableScheduler> * _scheduler;
    NSUbiquitousKeyValueStore * _store;
}

@property (nonatomic, copy) id /* block */ proxyChangeHandler;

- (void).cxx_destruct;
- (void)_storeChangedExternally:(id)arg1;
- (void)beginSyncing;
- (void)dealloc;
- (id)init;
- (id)initWithDefaults:(id)arg1 store:(id)arg2;
- (id)observeChangesForKey:(id)arg1 cloudKey:(id)arg2 conflictResolver:(id /* block */)arg3;
- (id /* block */)proxyChangeHandler;
- (void)setProxyChangeHandler:(id /* block */)arg1;

@end

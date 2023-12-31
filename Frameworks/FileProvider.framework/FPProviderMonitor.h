
@interface FPProviderMonitor : NSObject {
    NSMutableDictionary * _notifyTokenByContainerID;
    NSMutableDictionary * _observersByContainerID;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (bool)isProviderIDForeground:(id)arg1;
+ (id)providerIDForApplication:(id)arg1 sharedContainerIdentifier:(id)arg2;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forProviderID:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1 forProviderID:(id)arg2;
- (bool)supportsWakesForProviderID:(id)arg1;
- (bool)wakeProviderID:(id)arg1 forSessionIdentifier:(id)arg2;

@end


@interface FPProviderDomainChangesReceiver : NSObject {
    NSMutableSet * _changesHandlers;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    int  _notifyToken;
    FPPacer * _pacer;
    NSDictionary * _providerDomainsByID;
    int  _settingsChangedToken;
}

@property (readonly, copy) NSDictionary *cachedProviderDomainsByID;

+ (id)_sharedChangesReceiverInitIfNeeded:(bool)arg1;
+ (id)sharedChangesReceiver;
+ (id)sharedChangesReceiverIfAvailable;

- (void).cxx_destruct;
- (id)_init;
- (void)_t_discardCache;
- (id)addChangesHandler:(id /* block */)arg1;
- (id)cachedProviderDomainsByID;
- (void)callChangesHandlersWithProviderDomains:(id)arg1 error:(id)arg2;
- (void)providerDomainsHaveChanged:(id)arg1 error:(id)arg2;
- (void)removeChangesHandlerToken:(id)arg1;
- (void)signalChange;
- (void)updateProviderDomainsWithAttemptCount:(unsigned long long)arg1;

@end

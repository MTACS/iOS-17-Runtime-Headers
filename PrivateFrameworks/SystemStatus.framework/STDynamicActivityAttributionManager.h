
@interface STDynamicActivityAttributionManager : NSObject <STDynamicActivityAttributionServerHandle> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _clientLock;
    STLocalDynamicActivityAttributionManager * _localManager;
    NSMutableSet * _lock_registeredClients;
    STDynamicActivityAttributionMonitor * _monitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentAttributedAppForClient:(id)arg1;
- (id)currentAttributionForAttribution:(id)arg1;
- (id)currentAttributionForClient:(struct { unsigned int x1[8]; })arg1;
- (id)currentAttributionKeyForClient:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setAttributionLocalizableKey:(id)arg1 maskingClientAuditToken:(struct { unsigned int x1[8]; })arg2 forClient:(id)arg3;
- (void)setAttributionStringWithFormat:(id)arg1 maskingClientAuditToken:(struct { unsigned int x1[8]; })arg2 forClient:(id)arg3;
- (void)setAttributionWebsiteString:(id)arg1 maskingClientAuditToken:(struct { unsigned int x1[8]; })arg2 forClient:(id)arg3;
- (void)setLocalizableAttributionKey:(id)arg1 andApplication:(id)arg2 forClient:(id)arg3;
- (void)subscribeToUpdates:(id)arg1;
- (void)unsubscribeFromUpdates:(id)arg1;

@end

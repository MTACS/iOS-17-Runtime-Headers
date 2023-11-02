
@interface STLocalDynamicActivityAttributionManager : NSObject <STDynamicActivityAttributionServerHandle> {
    NSMutableDictionary * _clientAttributionMap;
    STDynamicActivityAttributionListener * _dynamicAttributionListener;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableSet * _monitorClients;
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
- (id)init;
- (void)setAttributionLocalizableKey:(id)arg1 maskingClientAuditToken:(struct { unsigned int x1[8]; })arg2 forClient:(id)arg3;
- (void)setAttributionStringWithFormat:(id)arg1 maskingClientAuditToken:(struct { unsigned int x1[8]; })arg2 forClient:(id)arg3;
- (void)setAttributionWebsiteString:(id)arg1 maskingClientAuditToken:(struct { unsigned int x1[8]; })arg2 forClient:(id)arg3;
- (void)setLocalizableAttributionKey:(id)arg1 andApplication:(id)arg2 forClient:(id)arg3;
- (void)subscribeToUpdates:(id)arg1;
- (void)unsubscribeFromUpdates:(id)arg1;

@end

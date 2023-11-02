
@interface DADeviceResolver : NSObject {
    struct _DNSServiceRef_t { } * _bonjourSharedService;
    NSString * _bundleID;
    unsigned long long  _coalesceMinTicks;
    CUCoalescer * _coalescer;
    NSMutableDictionary * _devices;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableDictionary * _endpoints;
    id /* block */  _eventHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    bool  _prefNameBasedSelect;
    bool  _prefsInitialized;
    NSMutableSet * _resolveOperations;
    NSMutableArray * _selectedEndpoints;
    NSString * _selectedProtocolStr;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, retain) CUCoalescer *coalescer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ eventHandler;
@property (nonatomic, retain) NSMutableSet *resolveOperations;

- (void).cxx_destruct;
- (void)_addEndpoint:(id)arg1;
- (void)_ensureInitialized;
- (void)_evaluateEndpoints;
- (void)_groupEndpoint:(id)arg1 matchedEndpoint:(id)arg2;
- (void)_invalidated;
- (void)_removeEndpoint:(id)arg1;
- (void)_reportDeviceWithSoloEndpoint:(id)arg1;
- (void)_reportEvent:(id)arg1;
- (void)_reportEventType:(long long)arg1;
- (void)_selectEndpoint:(id)arg1;
- (void)_startResolvingBonjourFullName:(const char *)arg1 interfaceIndex:(unsigned int)arg2 endpoint:(id)arg3;
- (void)_startResolvingBonjourName:(const char *)arg1 type:(const char *)arg2 interfaceIndex:(unsigned int)arg3 endpoint:(id)arg4;
- (void)_startResolvingEndpoint:(id)arg1;
- (void)_startResolvingHostname:(const char *)arg1 interfaceIndex:(unsigned int)arg2 endpoint:(id)arg3;
- (void)_updateSelectedEndpoint:(id)arg1;
- (void)addEndpoint:(id)arg1;
- (id)bundleID;
- (id)coalescer;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)dispatchQueue;
- (id /* block */)eventHandler;
- (id)init;
- (void)invalidate;
- (void)removeEndpoint:(id)arg1;
- (id)resolveOperations;
- (void)selectEndpoint:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCoalescer:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setResolveOperations:(id)arg1;

@end

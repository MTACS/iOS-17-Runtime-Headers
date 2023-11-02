
@interface MRAVRoutingDiscoverySessionWrapper : NSProxy {
    MRAVRoutingDiscoverySessionConfiguration * _configuration;
    unsigned int  _discoveryMode;
    NSMutableDictionary * _endpointsAddedCallbacks;
    NSMutableDictionary * _endpointsChangedCallbacks;
    NSMutableDictionary * _endpointsModifiedCallbacks;
    NSMutableDictionary * _endpointsRemovedCallbacks;
    NSMutableDictionary * _endpointsTokensMap;
    NSMutableDictionary * _outputDevicesAddedCallbacks;
    NSMutableDictionary * _outputDevicesChangedCallbacks;
    NSMutableDictionary * _outputDevicesModifiedCallbacks;
    NSMutableDictionary * _outputDevicesRemovedCallbacks;
    NSMutableDictionary * _outputDevicesTokensMap;
    MRAVRoutingDiscoverySession * _sharedSession;
}

@property (nonatomic, retain) MRAVRoutingDiscoverySessionConfiguration *configuration;
@property (nonatomic, retain) MRAVRoutingDiscoverySession *sharedSession;

- (void).cxx_destruct;
- (id)addEndpointsAddedCallback:(id /* block */)arg1;
- (id)addEndpointsChangedCallback:(id /* block */)arg1;
- (id)addEndpointsModifiedCallback:(id /* block */)arg1;
- (id)addEndpointsRemovedCallback:(id /* block */)arg1;
- (id)addOutputDevicesAddedCallback:(id /* block */)arg1;
- (id)addOutputDevicesChangedCallback:(id /* block */)arg1;
- (id)addOutputDevicesModifiedCallback:(id /* block */)arg1;
- (id)addOutputDevicesRemovedCallback:(id /* block */)arg1;
- (id)configuration;
- (void)dealloc;
- (id)debugDescription;
- (unsigned int)discoveryMode;
- (void)forwardInvocation:(id)arg1;
- (id)initWithSession:(id)arg1 configuration:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)reevaluateDiscoveryModeForSession:(id)arg1;
- (void)removeEndpointsAddedCallback:(id)arg1;
- (void)removeEndpointsChangedCallback:(id)arg1;
- (void)removeEndpointsModifiedCallback:(id)arg1;
- (void)removeEndpointsRemovedCallback:(id)arg1;
- (void)removeOutputDevicesAddedCallback:(id)arg1;
- (void)removeOutputDevicesChangedCallback:(id)arg1;
- (void)removeOutputDevicesModifiedCallback:(id)arg1;
- (void)removeOutputDevicesRemovedCallback:(id)arg1;
- (void)setAlwaysAllowUpdates:(bool)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDiscoveryMode:(unsigned int)arg1;
- (void)setPopulatesExternalDevice:(bool)arg1;
- (void)setRoutingContextUID:(id)arg1;
- (void)setSharedSession:(id)arg1;
- (void)setTargetAudioSessionID:(unsigned int)arg1;
- (id)sharedSession;
- (void)transferCallbacksFromSession:(id)arg1 toSession:(id)arg2;
- (void)transferEndpointsAddedCallbacksFromSession:(id)arg1 toSession:(id)arg2;
- (void)transferEndpointsChangedCallbacksFromSession:(id)arg1 toSession:(id)arg2;
- (void)transferEndpointsModifiedCallbacksFromSession:(id)arg1 toSession:(id)arg2;
- (void)transferEndpointsRemovedCallbacksFromSession:(id)arg1 toSession:(id)arg2;
- (void)transferOutputDevicesAddedCallbacksFromSession:(id)arg1 toSession:(id)arg2;
- (void)transferOutputDevicesChangedCallbacksFromSession:(id)arg1 toSession:(id)arg2;
- (void)transferOutputDevicesModifiedCallbacksFromSession:(id)arg1 toSession:(id)arg2;
- (void)transferOutputDevicesRemovedCallbacksFromSession:(id)arg1 toSession:(id)arg2;
- (void)updateObserversWithPreviousSession:(id)arg1;
- (void)updateSharedSession;

@end

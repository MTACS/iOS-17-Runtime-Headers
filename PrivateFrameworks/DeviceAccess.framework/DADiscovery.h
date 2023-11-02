
@interface DADiscovery : NSObject <CUXPCCodable> {
    bool  _activateCalled;
    DAAppContext * _appContext;
    unsigned int  _clientID;
    DADiscoveryConfiguration * _configuration;
    NSMutableDictionary * _deviceMap;
    bool  _direct;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _eventHandler;
    NSMutableSet * _extensions;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _policySessions;
    NSObject<OS_xpc_object> * _xpcCnx;
    NSObject<OS_xpc_object> * _xpcListenerEndpoint;
}

@property (nonatomic, retain) DAAppContext *appContext;
@property (nonatomic) unsigned int clientID;
@property (nonatomic, retain) DADiscoveryConfiguration *configuration;
@property (nonatomic) bool direct;
@property (readonly, copy) NSArray *discoveredDevices;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ eventHandler;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcCnx;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcListenerEndpoint;

- (void).cxx_destruct;
- (void)_activateDirect;
- (void)_activateXPCCompleted:(id)arg1;
- (void)_activateXPCStart:(bool)arg1;
- (id)_ensureXPCStarted;
- (void)_getAuthorizedDevicesCompleted:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_interrupted;
- (void)_invalidated;
- (void)_reportEvent:(id)arg1;
- (void)_reportEventType:(long long)arg1;
- (void)_startExtensions:(id)arg1;
- (void)_stopExtensons;
- (void)_updateNEPolicy:(id)arg1 remove:(bool)arg2;
- (id)_uuidFromExtension:(id)arg1;
- (void)_xpcReceivedDAEvent:(id)arg1;
- (void)_xpcReceivedDeviceEvent:(id)arg1;
- (void)_xpcReceivedMessage:(id)arg1;
- (void)activate;
- (id)appContext;
- (unsigned int)clientID;
- (id)configuration;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (bool)direct;
- (id)discoveredDevices;
- (id)dispatchQueue;
- (void)encodeWithXPCObject:(id)arg1;
- (id /* block */)eventHandler;
- (void)getAuthorizedDevices:(id /* block */)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (void)invalidate;
- (void)reportDeviceChanged:(id)arg1 appID:(id)arg2;
- (void)setAppContext:(id)arg1;
- (void)setClientID:(unsigned int)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDirect:(bool)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setState:(long long)arg1 device:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setState:(long long)arg1 device:(id)arg2 simulateApp:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)setXpcCnx:(id)arg1;
- (void)setXpcListenerEndpoint:(id)arg1;
- (id)xpcCnx;
- (id)xpcListenerEndpoint;
- (void)xpcReceivedMessage:(id)arg1;

@end

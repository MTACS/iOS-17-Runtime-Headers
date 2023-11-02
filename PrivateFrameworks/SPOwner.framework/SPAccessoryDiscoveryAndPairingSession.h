
@interface SPAccessoryDiscoveryAndPairingSession : NSObject <SPAccessoryDiscoveryXPCClientProtocol> {
    id /* block */  _accessoryDiscoveredCallback;
    id /* block */  _accessoryDiscoveryErrorCallback;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <SPAccessoryDiscoveryXPCProtocol> * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
    FMXPCServiceDescription * _serviceDescription;
    FMXPCSession * _session;
    id /* block */  _sessionInvalidatedCallback;
    SPAccessoryDiscoverySessionState * _state;
}

@property (nonatomic, copy) id /* block */ accessoryDiscoveredCallback;
@property (nonatomic, copy) id /* block */ accessoryDiscoveryErrorCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SPAccessoryDiscoveryXPCProtocol> *proxy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) FMXPCServiceDescription *serviceDescription;
@property (nonatomic, retain) FMXPCSession *session;
@property (nonatomic, copy) id /* block */ sessionInvalidatedCallback;
@property (nonatomic, copy) SPAccessoryDiscoverySessionState *state;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)remoteInterface;

- (void).cxx_destruct;
- (id /* block */)accessoryDiscoveredCallback;
- (void)accessoryDiscoveryError:(id)arg1;
- (id /* block */)accessoryDiscoveryErrorCallback;
- (id)callbackQueue;
- (void)discoveredAccessory:(id)arg1;
- (void)finalizePairingWith:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithPreviousState:(id)arg1;
- (void)initiatePairingWith:(id)arg1 completion:(id /* block */)arg2;
- (void)interruptionHandler:(id)arg1;
- (void)invalidatePairingWith:(id)arg1 completion:(id /* block */)arg2;
- (void)invalidationHandler:(id)arg1;
- (void)lostAccessory:(id)arg1;
- (id)proxy;
- (id)queue;
- (id)serviceDescription;
- (id)session;
- (id /* block */)sessionInvalidatedCallback;
- (void)setAccessoryDiscoveredCallback:(id /* block */)arg1;
- (void)setAccessoryDiscoveryErrorCallback:(id /* block */)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setProxy:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServiceDescription:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionInvalidatedCallback:(id /* block */)arg1;
- (void)setState:(id)arg1;
- (void)startAccessoryDiscoveryWithCompletion:(id /* block */)arg1;
- (id)state;
- (void)stop;
- (void)stopAccessoryDiscoveryWithCompletion:(id /* block */)arg1;

@end

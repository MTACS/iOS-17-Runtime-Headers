
@interface SPUnknownDiscoverySession : NSObject <SPUnknownDiscoveryXPCClientProtocol> {
    id /* block */  _accessoryDiscoveredCallback;
    id /* block */  _accessoryDiscoveryErrorCallback;
    id /* block */  _accessoryDiscoveryFinishedCallback;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <SPUnknownDiscoveryXPCProtocol> * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
    FMXPCServiceDescription * _serviceDescription;
    FMXPCSession * _session;
    id /* block */  _sessionInvalidatedCallback;
    SPUnknownDiscoverySessionState * _state;
}

@property (nonatomic, copy) id /* block */ accessoryDiscoveredCallback;
@property (nonatomic, copy) id /* block */ accessoryDiscoveryErrorCallback;
@property (nonatomic, copy) id /* block */ accessoryDiscoveryFinishedCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SPUnknownDiscoveryXPCProtocol> *proxy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) FMXPCServiceDescription *serviceDescription;
@property (nonatomic, retain) FMXPCSession *session;
@property (nonatomic, copy) id /* block */ sessionInvalidatedCallback;
@property (nonatomic, copy) SPUnknownDiscoverySessionState *state;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)remoteInterface;

- (void).cxx_destruct;
- (id /* block */)accessoryDiscoveredCallback;
- (id /* block */)accessoryDiscoveryErrorCallback;
- (id /* block */)accessoryDiscoveryFinishedCallback;
- (id)callbackQueue;
- (void)discoveredUnknownAccessory:(id)arg1;
- (void)fetchEncryptedPayloadForUnknownBeacon:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithPreviousState:(id)arg1;
- (void)interruptionHandler:(id)arg1;
- (void)invalidationHandler:(id)arg1;
- (void)lostUnknownAccessory:(id)arg1;
- (id)proxy;
- (id)queue;
- (id)serviceDescription;
- (id)session;
- (id /* block */)sessionInvalidatedCallback;
- (void)setAccessoryDiscoveredCallback:(id /* block */)arg1;
- (void)setAccessoryDiscoveryErrorCallback:(id /* block */)arg1;
- (void)setAccessoryDiscoveryFinishedCallback:(id /* block */)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setProxy:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServiceDescription:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionInvalidatedCallback:(id /* block */)arg1;
- (void)setState:(id)arg1;
- (void)startDiscoveryWithCompletion:(id /* block */)arg1;
- (void)startDiscoveryWithScanRate:(long long)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (id)state;
- (void)stop;
- (void)stopDiscoveryWithCompletion:(id /* block */)arg1;
- (void)unknownAccessoryDiscoveryError:(id)arg1;
- (void)unknownAccessoryDiscoveryFinished;

@end

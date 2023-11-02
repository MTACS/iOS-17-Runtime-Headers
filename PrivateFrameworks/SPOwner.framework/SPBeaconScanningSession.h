
@interface SPBeaconScanningSession : NSObject <SPBeaconScanningXPCClientProtocol> {
    id /* block */  _beaconDiscoveredCallback;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _discoveryFinishedCallback;
    <SPBeaconScanningXPCProtocol> * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
    FMXPCServiceDescription * _serviceDescription;
    FMXPCSession * _session;
    id /* block */  _sessionInvalidatedCallback;
}

@property (nonatomic, copy) id /* block */ beaconDiscoveredCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ discoveryFinishedCallback;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SPBeaconScanningXPCProtocol> *proxy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) FMXPCServiceDescription *serviceDescription;
@property (nonatomic, retain) FMXPCSession *session;
@property (nonatomic, copy) id /* block */ sessionInvalidatedCallback;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)remoteInterface;

- (void).cxx_destruct;
- (id /* block */)beaconDiscoveredCallback;
- (id)callbackQueue;
- (void)discoveredObject:(id)arg1;
- (void)discoveryFinished:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)discoveryFinishedCallback;
- (id)init;
- (void)interruptionHandler:(id)arg1;
- (void)invalidationHandler:(id)arg1;
- (id)proxy;
- (id)queue;
- (id)serviceDescription;
- (id)session;
- (id /* block */)sessionInvalidatedCallback;
- (void)setBeaconDiscoveredCallback:(id /* block */)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setDiscoveryFinishedCallback:(id /* block */)arg1;
- (void)setProxy:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServiceDescription:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionInvalidatedCallback:(id /* block */)arg1;
- (void)startScanningIncludeServiceCharacteristics:(bool)arg1;
- (void)stopScanning;

@end

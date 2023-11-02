
@interface SPBTFindingSession : NSObject <SPBTFindingXPCClientProtocol> {
    NSUUID * _beacon;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    SPBTFindingSessionConfig * _config;
    id /* block */  _didUpdateBTRSSIMeasurementCallback;
    id /* block */  _didUpdateBTRSSIResultCallback;
    id /* block */  _findingSessionErrorCallback;
    <SPBTFindingXPCProtocol> * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
    FMXPCServiceDescription * _serviceDescription;
    FMXPCSession * _session;
    id /* block */  _sessionInvalidatedCallback;
}

@property (nonatomic, copy) NSUUID *beacon;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly, copy) SPBTFindingSessionConfig *config;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didUpdateBTRSSIMeasurementCallback;
@property (nonatomic, copy) id /* block */ didUpdateBTRSSIResultCallback;
@property (nonatomic, copy) id /* block */ findingSessionErrorCallback;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SPBTFindingXPCProtocol> *proxy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) FMXPCServiceDescription *serviceDescription;
@property (nonatomic, retain) FMXPCSession *session;
@property (nonatomic, copy) id /* block */ sessionInvalidatedCallback;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)remoteInterface;

- (void).cxx_destruct;
- (id)beacon;
- (id)callbackQueue;
- (id)config;
- (id /* block */)didUpdateBTRSSIMeasurementCallback;
- (id /* block */)didUpdateBTRSSIResultCallback;
- (void)findingSessionError:(id)arg1;
- (id /* block */)findingSessionErrorCallback;
- (id)initWithConfig:(id)arg1;
- (void)interruptionHandler:(id)arg1;
- (void)invalidationHandler:(id)arg1;
- (id)proxy;
- (id)queue;
- (id)serviceDescription;
- (id)session;
- (id /* block */)sessionInvalidatedCallback;
- (void)setBeacon:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setDidUpdateBTRSSIMeasurementCallback:(id /* block */)arg1;
- (void)setDidUpdateBTRSSIResultCallback:(id /* block */)arg1;
- (void)setFindingSessionErrorCallback:(id /* block */)arg1;
- (void)setProxy:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServiceDescription:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionInvalidatedCallback:(id /* block */)arg1;
- (void)startFindingBeacons:(id)arg1 completion:(id /* block */)arg2;
- (void)stopFindingBeacons:(id)arg1 completion:(id /* block */)arg2;
- (void)updateConfig:(id)arg1;
- (void)updatedBTRSSIMeasurement:(id)arg1;
- (void)updatedBTRSSIResult:(id)arg1;

@end

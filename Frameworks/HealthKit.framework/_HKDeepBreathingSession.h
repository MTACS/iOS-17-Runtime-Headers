
@interface _HKDeepBreathingSession : NSObject <_HKDeepBreathingSessionClient, _HKXPCExportable> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    <_HKDeepBreathingSessionDelegate> * _delegate;
    HKTaskServerProxyProvider * _proxyProvider;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _serverState;
}

@property (readonly, copy) NSString *debugDescription;
@property <_HKDeepBreathingSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) long long serverState;
@property (readonly, copy) _HKDeepBreathingSessionConfiguration *sessionConfiguration;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)_connectionDidEncounterError:(id)arg1;
- (bool)_isServerAttached;
- (void)_queue_alertDelegateDidEncounterError:(id)arg1;
- (void)_queue_alertDelegateDidReceiveHeartRate:(double)arg1;
- (void)_queue_deactivate;
- (bool)_queue_isServerAttached;
- (void)_queue_transitionToServerState:(long long)arg1;
- (void)clientRemote_sessionDidReceiveError:(id)arg1;
- (void)clientRemote_sessionDidReceiveHeartRate:(double)arg1;
- (void)connectionInvalidated;
- (id)delegate;
- (id)description;
- (void)endSessionWithEndReason:(long long)arg1;
- (id)exportedInterface;
- (void)fetchProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (id)initWithHealthStore:(id)arg1 configuration:(id)arg2;
- (id)remoteInterface;
- (long long)serverState;
- (id)sessionConfiguration;
- (void)setDelegate:(id)arg1;
- (void)startGuiding;
- (void)startSessionWithStartDate:(id)arg1 completion:(id /* block */)arg2;

@end

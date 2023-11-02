
@interface HDDeepBreathingSessionServer : HDStandardTaskServer <_HKDeepBreathingSessionServer> {
    HDDaemonTransaction * _daemonTransaction;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _serverState;
    _HKDeepBreathingSessionConfiguration * _sessionConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (void)dealloc;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_endSessionWithEndReason:(long long)arg1;
- (void)remote_startGuiding;
- (void)remote_startSessionWithStartDate:(id)arg1 completion:(id /* block */)arg2;

@end

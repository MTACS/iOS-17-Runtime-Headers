
@interface HFWiFiExecutionEnvironmentObserver : NSObject <HFExecutionEnvironmentObserver, HFHomeManagerObserver> {
    HFHomeKitDispatcher * _dispatcher;
    HFExecutionEnvironment * _environment;
    HMHome * _lastKnownHome;
    unsigned long long  _lastKnownRunningState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HFHomeKitDispatcher *dispatcher;
@property (nonatomic, readonly) HFExecutionEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *lastKnownHome;
@property (nonatomic) unsigned long long lastKnownRunningState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateState;
- (void)dealloc;
- (id)dispatcher;
- (id)environment;
- (void)executionEnvironmentDidBecomeActive:(id)arg1;
- (void)executionEnvironmentDidEnterBackground:(id)arg1;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
- (id)initWithExecutionEnvironment:(id)arg1 dispatcher:(id)arg2;
- (id)lastKnownHome;
- (unsigned long long)lastKnownRunningState;
- (void)setLastKnownHome:(id)arg1;
- (void)setLastKnownRunningState:(unsigned long long)arg1;

@end

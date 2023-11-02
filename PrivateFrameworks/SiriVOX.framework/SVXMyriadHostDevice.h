
@interface SVXMyriadHostDevice : NSObject <AFMyriadDelegate, SVXMyriadRequestDelegate> {
    <SVXMyriadResponseDelegate> * _delegate;
    struct { 
        id /* block */ completion; 
        NSObject<OS_dispatch_source> *timer; 
    }  _emergencyContext;
    AFMyriadCoordinator * _myriadCoordinator;
    NSObject<OS_dispatch_queue> * _queue;
    SVXMyriadWiFiAssertion * _wifiAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_acquireWiFiAssertion;
- (void)_armEmergencyDispatchTimerFor:(double)arg1 toExecute:(id /* block */)arg2;
- (void)_disarmMyriadEmergencyTimer;
- (void)_initializeMyriadEmergencyTimer;
- (void)_releaseWiFiAssertion;
- (void)_signalEmergencyCallHandledStatus:(bool)arg1;
- (void)_startAdvertisingEmergency:(id /* block */)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)myriadCoordinatorDidHandleEmergency:(id)arg1;
- (void)preheatMyriad;
- (void)resetMyriad;
- (void)setupEnabled:(bool)arg1;
- (void)shouldAbortAnotherDeviceBetter:(id)arg1;
- (void)shouldContinue:(id)arg1;
- (void)shouldUnduck:(id)arg1;
- (void)startAdvertising:(unsigned long long)arg1 withMyriadGoodnessScoreContext:(id)arg2 withMyriadAudioContext:(id)arg3 completion:(id /* block */)arg4;
- (void)willEndSession:(id)arg1;
- (void)willStartWithSession:(id)arg1;

@end

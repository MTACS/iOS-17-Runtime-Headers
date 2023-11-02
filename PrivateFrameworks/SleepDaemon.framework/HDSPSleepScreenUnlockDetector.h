
@interface HDSPSleepScreenUnlockDetector : NSObject <HDSPEnvironmentAware, HDSPSleepActionObserver, HDSPSleepModeObserver, HDSPWakeDetector> {
    HDSPEnvironment * _environment;
    bool  _isDetecting;
    <HKSPMutexProvider> * _mutexProvider;
    <HDSPWakeDetectorDelegate> * _wakeDetectorDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDetecting;
@property (nonatomic, readonly) <HKSPMutexProvider> *mutexProvider;
@property (nonatomic) unsigned long long numberOfTimesDismissed;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic) <HDSPWakeDetectorDelegate> *wakeDetectorDelegate;

- (void).cxx_destruct;
- (void)_resetCounter;
- (void)_withLock:(id /* block */)arg1;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (bool)isDetecting;
- (id)mutexProvider;
- (unsigned long long)numberOfTimesDismissed;
- (void)setNumberOfTimesDismissed:(unsigned long long)arg1;
- (void)setWakeDetectorDelegate:(id)arg1;
- (void)sleepLockWasDismissed;
- (void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3;
- (void)startDetecting;
- (void)stopDetecting;
- (unsigned long long)type;
- (id)wakeDetectorDelegate;

@end

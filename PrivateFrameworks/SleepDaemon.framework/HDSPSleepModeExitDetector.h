
@interface HDSPSleepModeExitDetector : NSObject <HDSPEnvironmentAware, HDSPSleepModeObserver, HDSPWakeDetector> {
    HDSPEnvironment * _environment;
    bool  _isDetecting;
    <HDSPWakeDetectorDelegate> * _wakeDetectorDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDetecting;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic) <HDSPWakeDetectorDelegate> *wakeDetectorDelegate;

- (void).cxx_destruct;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (bool)isDetecting;
- (void)setWakeDetectorDelegate:(id)arg1;
- (void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3;
- (void)startDetecting;
- (void)stopDetecting;
- (unsigned long long)type;
- (id)wakeDetectorDelegate;

@end

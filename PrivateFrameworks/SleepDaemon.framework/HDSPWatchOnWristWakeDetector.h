
@interface HDSPWatchOnWristWakeDetector : NSObject <HDSPEnvironmentAware, HDSPWakeDetector, HDSPWatchOnWristObserver> {
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
- (void)detectedOffWristOnDate:(id)arg1;
- (void)detectedOnWristOnDate:(id)arg1;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (bool)isDetecting;
- (id)onWristMonitor;
- (void)setWakeDetectorDelegate:(id)arg1;
- (void)startDetecting;
- (void)stopDetecting;
- (unsigned long long)type;
- (id)wakeDetectorDelegate;

@end

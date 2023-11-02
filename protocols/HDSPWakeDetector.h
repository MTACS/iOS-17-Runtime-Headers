
@protocol HDSPWakeDetector <NSObject>

@required

- (bool)isDetecting;
- (void)setWakeDetectorDelegate:(id <HDSPWakeDetectorDelegate>)arg1;
- (void)startDetecting;
- (void)stopDetecting;
- (unsigned long long)type;
- (<HDSPWakeDetectorDelegate> *)wakeDetectorDelegate;

@end

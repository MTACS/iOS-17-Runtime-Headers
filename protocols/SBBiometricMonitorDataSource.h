
@protocol SBBiometricMonitorDataSource <NSObject>

@required

- (void)addObserver:(id <SBBiometricMonitorObserver>)arg1;
- (bool)matchRunning;
- (bool)poseIsMarginal;
- (bool)presenceDetectRunning;
- (void)removeObserver:(id <SBBiometricMonitorObserver>)arg1;

@end


@protocol SBFSensorActivityDataProvider <NSObject>

@required

- (NSSet *)activeAndRecentSensorActivityAttributions;
- (NSSet *)activeCameraAndMicrophoneActivityAttributions;
- (NSSet *)activeSensorActivityAttributions;
- (void)addObserver:(id <SBFSensorActivityObserver>)arg1;
- (<SBFSensorActivityAttribution> *)mostRecentCameraAndMicrophoneSensorActivityAttribution;
- (void)removeObserver:(id <SBFSensorActivityObserver>)arg1;

@end

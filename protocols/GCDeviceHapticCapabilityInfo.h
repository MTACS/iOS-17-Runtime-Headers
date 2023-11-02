
@protocol GCDeviceHapticCapabilityInfo <GCControllerComponent>

@required

- (GCDeviceHaptics *)deviceHaptics;
- (NSArray *)hapticEngines;
- (void)initializeHapticEngines;
- (void)removeHapticEngines;

@end

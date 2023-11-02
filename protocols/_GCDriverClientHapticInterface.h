
@protocol _GCDriverClientHapticInterface

@required

- (void)enableHaptics;
- (void)enqueueTransient:(_GCHapticEvent *)arg1 hapticMotor:(unsigned long long)arg2;
- (void)setHapticMotor:(unsigned long long)arg1 frequency:(float)arg2 amplitude:(float)arg3;

@end

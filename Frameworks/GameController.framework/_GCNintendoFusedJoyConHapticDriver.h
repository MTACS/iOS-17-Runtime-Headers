
@interface _GCNintendoFusedJoyConHapticDriver : NSObject <_GCDriverClientHapticInterface> {
    <_GCDriverClientInterface> * _leftDriver;
    <_GCDriverClientInterface> * _rightDriver;
}

- (void).cxx_destruct;
- (void)enableHaptics;
- (void)enqueueTransient:(id)arg1 hapticMotor:(unsigned long long)arg2;
- (id)getDriver:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1;
- (void)setHapticMotor:(unsigned long long)arg1 frequency:(float)arg2 amplitude:(float)arg3;

@end

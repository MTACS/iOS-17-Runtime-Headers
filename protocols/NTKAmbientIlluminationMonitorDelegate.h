
@protocol NTKAmbientIlluminationMonitorDelegate <NSObject>

@required

- (void)ambientIlluminationMonitor:(NTKAmbientIlluminationMonitor *)arg1 receivedAmbientLux:(double)arg2;
- (void)ambientIlluminationMonitor:(NTKAmbientIlluminationMonitor *)arg1 receivedDisplayNits:(double)arg2;

@end

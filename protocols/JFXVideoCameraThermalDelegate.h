
@protocol JFXVideoCameraThermalDelegate <NSObject>

@required

- (void)cameraFPSForThermalLevel:(int)arg1 deviceType:(NSString *)arg2 minRate:(out int*)arg3 maxRate:(out int*)arg4;

@end

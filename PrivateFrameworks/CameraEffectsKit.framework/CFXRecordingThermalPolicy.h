
@interface CFXRecordingThermalPolicy : JFXCameraFPSThermalPolicy

- (void)cameraFPSForThermalLevel:(int)arg1 deviceType:(id)arg2 minRate:(out int*)arg3 maxRate:(out int*)arg4;
- (unsigned long long)priority;

@end

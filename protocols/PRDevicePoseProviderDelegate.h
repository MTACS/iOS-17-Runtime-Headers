
@protocol PRDevicePoseProviderDelegate

@required

- (void)devicePoseUpdated:(PRPose *)arg1;
- (void)invalidPoseDetected;

@end


@protocol _HMCameraStreamControlDelegate <NSObject>

@required

- (void)cameraStreamControl:(_HMCameraStreamControl *)arg1 didStopStream:(NSError *)arg2;
- (void)cameraStreamControlDidStartStream:(_HMCameraStreamControl *)arg1;

@end


@protocol CIDVRGBCaptureSelfieControllerDelegate

@required

- (void)captureSelfieDidDetectIncorrectGesture;
- (void)captureSelfieDidEncounterError:(NSError *)arg1;
- (void)captureSelfieDidFinishGestureMonitoring;
- (void)captureSelfieDidObtainImageQualityError:(NSError *)arg1;
- (void)captureSelfieDidObtainPicture:(NSData *)arg1 error:(NSError *)arg2;
- (void)captureSelfieWillMonitorGesture:(long long)arg1;

@end

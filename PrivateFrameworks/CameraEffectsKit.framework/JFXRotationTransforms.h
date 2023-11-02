
@interface JFXRotationTransforms : NSObject

+ (int)rotationFromCaptureDevicePosition:(long long)arg1 captureVideoOrientation:(long long)arg2 toInterfaceOrientation:(long long)arg3;
+ (int)rotationFromUIInterfaceOrientation:(long long)arg1 toUIInterfaceOrientation:(long long)arg2;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformFromCaptureDevicePosition:(long long)arg1 captureVideoOrientation:(long long)arg2 toInterfaceOrientation:(long long)arg3;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformFromTopLeftCaptureDevicePivotPosition:(long long)arg1 captureVideoOrientation:(long long)arg2 toInterfaceOrientation:(long long)arg3 size:(struct CGSize { double x1; double x2; })arg4;

@end

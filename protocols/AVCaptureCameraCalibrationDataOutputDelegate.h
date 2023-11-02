
@protocol AVCaptureCameraCalibrationDataOutputDelegate <NSObject>

@optional

- (void)cameraCalibrationDataOutput:(AVCaptureCameraCalibrationDataOutput *)arg1 didDropCameraCalibrationDataAtTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 connection:(AVCaptureConnection *)arg3 reason:(long long)arg4;
- (void)cameraCalibrationDataOutput:(AVCaptureCameraCalibrationDataOutput *)arg1 didOutputCameraCalibrationData:(AVCameraCalibrationData *)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 connection:(AVCaptureConnection *)arg4;

@end

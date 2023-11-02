
@protocol AVCaptureVisionDataOutputDelegate <NSObject>

@optional

- (void)visionDataOutput:(AVCaptureVisionDataOutput *)arg1 didDropVisionDataPixelBufferForTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 connection:(AVCaptureConnection *)arg3 reason:(long long)arg4;
- (void)visionDataOutput:(AVCaptureVisionDataOutput *)arg1 didOutputVisionDataPixelBuffer:(struct __CVBuffer { }*)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 connection:(AVCaptureConnection *)arg4;

@end

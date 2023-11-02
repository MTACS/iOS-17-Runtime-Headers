
@protocol AVCapturePointCloudDataOutputDelegate <NSObject>

@optional

- (void)pointCloudDataOutput:(AVCapturePointCloudDataOutput *)arg1 didDropPointCloudData:(AVPointCloudData *)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 connection:(AVCaptureConnection *)arg4 reason:(long long)arg5;
- (void)pointCloudDataOutput:(AVCapturePointCloudDataOutput *)arg1 didOutputPointCloudData:(AVPointCloudData *)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 connection:(AVCaptureConnection *)arg4;

@end

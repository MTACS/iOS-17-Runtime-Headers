
@interface AVCaptureDeviceFakeBiasControlRequest : AVCaptureDeviceControlRequest {
    float  _fakeBias;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _fakeBiasCompletionTime;
}

@property (nonatomic) float fakeBias;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } fakeBiasCompletionTime;

- (float)fakeBias;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })fakeBiasCompletionTime;
- (void)setFakeBias:(float)arg1;
- (void)setFakeBiasCompletionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end

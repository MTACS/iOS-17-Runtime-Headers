
@protocol SCNCaptureDeviceOutputConsumer <NSObject>

@required

- (bool)automaticallyAdjustsVideoMirroring;
- (bool)isVideoMirrored;
- (void)setAutomaticallyAdjustsVideoMirroring:(bool)arg1;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1 fromDevice:(AVCaptureDevice *)arg2;
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 fromDevice:(AVCaptureDevice *)arg2;
- (void)setVideoMirrored:(bool)arg1;

@end


@protocol AVCaptureVideoDataOutputSampleBufferDelegate <NSObject>

@optional

- (void)captureOutput:(AVCaptureOutput *)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(AVCaptureConnection *)arg3;
- (void)captureOutput:(AVCaptureOutput *)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(AVCaptureConnection *)arg3;

@end

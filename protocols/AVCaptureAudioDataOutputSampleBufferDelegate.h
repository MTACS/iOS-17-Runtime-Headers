
@protocol AVCaptureAudioDataOutputSampleBufferDelegate <NSObject>

@optional

- (void)captureOutput:(AVCaptureOutput *)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(AVCaptureConnection *)arg3;

@end

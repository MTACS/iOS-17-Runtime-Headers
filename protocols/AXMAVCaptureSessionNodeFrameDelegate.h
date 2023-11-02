
@protocol AXMAVCaptureSessionNodeFrameDelegate <NSObject>

@required

- (void)captureSessionNode:(AXMAVCaptureSessionNode *)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(AVCaptureConnection *)arg3;

@end

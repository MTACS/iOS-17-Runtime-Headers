
@protocol HMIVideoFrameSelectorDelegate

@required

- (void)frameSelector:(HMIVideoFrameSelector *)arg1 didSelectFrame:(struct opaqueCMSampleBuffer { }*)arg2 reference:(struct opaqueCMSampleBuffer { }*)arg3;
- (void)frameSelector:(HMIVideoFrameSelector *)arg1 didSkipFrame:(struct opaqueCMSampleBuffer { }*)arg2;
- (struct opaqueCMSampleBuffer { }*)frameSelector:(HMIVideoFrameSelector *)arg1 prepareFrame:(struct opaqueCMSampleBuffer { }*)arg2;

@end

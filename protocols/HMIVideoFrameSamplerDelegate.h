
@protocol HMIVideoFrameSamplerDelegate <NSObject>

@required

- (void)frameSampler:(HMIVideoFrameSampler *)arg1 didSampleFrame:(struct opaqueCMSampleBuffer { }*)arg2;

@optional

- (void)frameSampler:(HMIVideoFrameSampler *)arg1 didDropFrame:(struct opaqueCMSampleBuffer { }*)arg2;

@end

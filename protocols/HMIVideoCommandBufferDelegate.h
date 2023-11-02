
@protocol HMIVideoCommandBufferDelegate <NSObject>

@required

- (void)buffer:(HMIVideoCommandBuffer *)arg1 willHandleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)bufferWillFlush:(HMIVideoCommandBuffer *)arg1;

@end

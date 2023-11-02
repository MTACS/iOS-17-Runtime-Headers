
@protocol PFRWSampleBufferChannelDelegate <NSObject>

@optional

- (void)sampleBufferChannel:(PFRWSampleBufferChannel *)arg1 didReadSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)sampleBufferChannel:(PFRWSampleBufferChannel *)arg1 didReadSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 andMadeWriteSampleBuffer:(struct __CVBuffer { }*)arg3;

@end

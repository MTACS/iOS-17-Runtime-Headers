
@protocol BWUBProcessorInputDelegate <NSObject>

@required

- (void)input:(BWUBProcessorInput *)arg1 addFrame:(struct opaqueCMSampleBuffer { }*)arg2 isReferenceFrame:(bool)arg3;
- (void)inputReceivedAllFrames:(BWUBProcessorInput *)arg1;

@end

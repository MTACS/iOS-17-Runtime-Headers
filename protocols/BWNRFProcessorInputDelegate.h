
@protocol BWNRFProcessorInputDelegate <NSObject>

@required

- (void)input:(BWNRFProcessorInput *)arg1 addFrame:(struct opaqueCMSampleBuffer { }*)arg2 isReferenceFrame:(bool)arg3;
- (void)inputReceivedAllFrames:(BWNRFProcessorInput *)arg1;
- (void)inputReceivedProcessedRawErrorRecoveryFrame:(BWNRFProcessorInput *)arg1;

@end


@protocol VCMediaRecorderHistoryBufferDelegate <NSObject>

@required

- (void)historyBuffer:(VCMediaRecorderHistoryBuffer *)arg1 didDequeueSample:(struct opaqueCMSampleBuffer { }*)arg2 timestamp:(unsigned int)arg3;

@end

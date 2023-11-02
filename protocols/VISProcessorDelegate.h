
@protocol VISProcessorDelegate <NSObject>

@required

- (void)didCompleteProcessingOfBuffer:(struct opaqueCMSampleBuffer { }*)arg1 withStatus:(int)arg2;

@end

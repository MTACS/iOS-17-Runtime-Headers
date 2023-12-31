
@protocol AVQueuedSampleBufferRenderingInternal <NSObject>

@required

- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer {}**)arg1;
- (bool)setRenderSynchronizer:(AVSampleBufferRenderSynchronizer *)arg1 error:(id*)arg2;
- (void)setSTSLabel:(NSString *)arg1;

@end


@interface HMIVideoProcessingNode : HMIVideoNode

- (void)finish;
- (void)finishWithCompletionHandler:(id /* block */)arg1;
- (void)flush;
- (void)flushAsync;
- (void)handleAudioSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)handleVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;

@end


@protocol TTSSynthesisProviderAudioOutput

@required

- (bool)isRunning;
- (void)pause;
- (bool)play;
- (void)scheduleBuffer:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: AVAudioPCMBuffer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)scheduleBuffer:(void *)arg1 completionHandler:(void *)arg2 lastBuffer:(void *)arg3; // needs 3 arg types, found 7: AVAudioPCMBuffer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, bool
- (void)setAudioSession:(AVAudioSession *)arg1;
- (void)setChannels:(NSArray *)arg1;
- (void)setOutputFormat:(AVAudioFormat *)arg1;
- (void)stop;

@optional

- (void)setAudioQueueFlags:(unsigned int)arg1;

@end

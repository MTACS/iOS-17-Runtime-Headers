
@protocol AXSDListenEngineDelegate <NSObject>

@required

- (void)listenEngineDidStartWithInputFormat:(AVAudioFormat *)arg1;
- (void)listenEngineFailedToStartWithError:(NSError *)arg1;
- (void)receivedBuffer:(AVAudioPCMBuffer *)arg1 atTime:(AVAudioTime *)arg2;

@optional

- (void)listenEngineEncounteredError:(NSError *)arg1;
- (void)receivedBuffer:(AVAudioPCMBuffer *)arg1 atTime:(AVAudioTime *)arg2 isFile:(bool)arg3;

@end

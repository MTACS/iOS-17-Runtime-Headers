
@protocol SVXAudioStreamingListening <NSObject>

@optional

- (void)audioStreamDidProvideAudio:(SiriTTSAudioData *)arg1;
- (void)audioStreamDidProvideBuffer:(VSAudioData *)arg1;
- (void)audioStreamWillBeginWithAudioSessionID:(unsigned int)arg1;

@end


@protocol CSAudioStreamProvidingDelegate <NSObject>

@required

- (void)audioStreamProvider:(id <CSAudioStreamProviding>)arg1 audioBufferAvailable:(CSAudioChunk *)arg2;
- (void)audioStreamProvider:(id <CSAudioStreamProviding>)arg1 audioChunkForTVAvailable:(CSAudioChunkForTV *)arg2;
- (void)audioStreamProvider:(id <CSAudioStreamProviding>)arg1 didStopStreamUnexpectedly:(long long)arg2;

@optional

- (void)audioStreamProvider:(id <CSAudioStreamProviding>)arg1 didHardwareConfigurationChange:(long long)arg2;

@end

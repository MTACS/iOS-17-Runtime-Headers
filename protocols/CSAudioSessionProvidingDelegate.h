
@protocol CSAudioSessionProvidingDelegate <NSObject>

@optional

- (void)audioSessionProvider:(id <CSAudioSessionProviding>)arg1 didChangeContext:(bool)arg2;
- (void)audioSessionProvider:(id <CSAudioSessionProviding>)arg1 didSetAudioSessionActive:(bool)arg2;
- (void)audioSessionProvider:(id <CSAudioSessionProviding>)arg1 providerInvalidated:(bool)arg2;
- (void)audioSessionProvider:(id <CSAudioSessionProviding>)arg1 willSetAudioSessionActive:(bool)arg2;
- (void)audioSessionProviderBeginInterruption:(id <CSAudioSessionProviding>)arg1;
- (void)audioSessionProviderBeginInterruption:(id <CSAudioSessionProviding>)arg1 withContext:(NSDictionary *)arg2;
- (void)audioSessionProviderEndInterruption:(id <CSAudioSessionProviding>)arg1;

@end

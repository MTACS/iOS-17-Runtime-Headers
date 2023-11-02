
@protocol CSAudioSessionInfoProviding <NSObject>

@required

- (unsigned int)audioSessionIdForDeviceId:(NSString *)arg1;
- (void)registerObserver:(id <CSAudioSessionInfoProvidingDelegate>)arg1;
- (void)unregisterObserver:(id <CSAudioSessionInfoProvidingDelegate>)arg1;

@end

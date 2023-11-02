
@protocol CSAudioSessionEventProvidingDelegate <NSObject>

@required

- (void)audioSessionEventProvidingDidSetAudioSessionActive:(bool)arg1;
- (void)audioSessionEventProvidingWillSetAudioSessionActive:(bool)arg1;

@end

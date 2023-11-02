
@protocol SUICVoiceSelectionPresenterDelegate <NSObject>

@required

- (void)presenter:(SUICVoiceSelectionPresenter *)arg1 didChangeVoiceSelection:(AFVoiceInfo *)arg2;

@optional

- (void)presenter:(SUICVoiceSelectionPresenter *)arg1 didChangeAudioOutputPowerLevel:(float)arg2;

@end

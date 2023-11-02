
@protocol SUICVoiceSelectionDisplaying <NSObject>

@required

- (void)setVoiceSelectionEventHandler:(id <SUICVoiceSelectionEventHandling>)arg1;
- (void)setVoiceSelectionViewModelProvider:(id <SUICVoiceSelectionViewModelProviding>)arg1;
- (<SUICVoiceSelectionEventHandling> *)voiceSelectionEventHandler;
- (void)voiceSelectionViewModelDidChange;
- (<SUICVoiceSelectionViewModelProviding> *)voiceSelectionViewModelProvider;

@end

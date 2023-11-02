
@protocol SUICVoiceSelectionEventHandling <NSObject>

@required

- (void)voiceSelectionView:(id <SUICVoiceSelectionDisplaying>)arg1 receivedRequestToSelectLanguage:(SUICVoiceSelectionViewModelLanguage *)arg2;
- (void)voiceSelectionView:(id <SUICVoiceSelectionDisplaying>)arg1 receivedRequestToSelectVoice:(SUICVoiceSelectionViewModelVoice *)arg2;

@end

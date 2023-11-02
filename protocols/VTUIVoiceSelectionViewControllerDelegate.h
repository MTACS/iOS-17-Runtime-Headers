
@protocol VTUIVoiceSelectionViewControllerDelegate <NSObject>

@required

- (void)voiceSelectionController:(VTUIVoiceSelectionViewController *)arg1 didSelectVoice:(AFVoiceInfo *)arg2;

@optional

- (void)voiceSelectionController:(VTUIVoiceSelectionViewController *)arg1 didSelectVoice:(AFVoiceInfo *)arg2 randomlySelected:(bool)arg3;
- (void)voiceSelectionControllerRequestsDismissal:(VTUIVoiceSelectionViewController *)arg1;

@end

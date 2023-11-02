
@protocol SBVoiceControlViewControllerDelegate <NSObject>

@optional

- (void)voiceControlViewControllerPrefersProximityDetectionEnabledDidChange:(SBVoiceControlViewController *)arg1;
- (void)voiceControlViewControllerRequestsDismissal:(SBVoiceControlViewController *)arg1;

@end

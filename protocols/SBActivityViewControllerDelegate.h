
@protocol SBActivityViewControllerDelegate <NSObject>

@optional

- (void)activityViewController:(SBActivityViewController *)arg1 didSetIdleTimerDisabled:(bool)arg2;
- (void)activityViewControllerContentRequestsCancellingGesture:(SBActivityViewController *)arg1;
- (void)activityViewControllerDidUpdateAudioCategoriesDisablingVolumeHUD:(SBActivityViewController *)arg1;

@end

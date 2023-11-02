
@protocol SBActivityAmbientViewControllerDelegate <NSObject>

@required

- (void)activityAmbientViewController:(SBActivityAmbientViewController *)arg1 addPendingItem:(SBActivityItem *)arg2;
- (bool)activityAmbientViewController:(SBActivityAmbientViewController *)arg1 isActiveActivityItem:(SBActivityItem *)arg2;
- (void)activityAmbientViewController:(SBActivityAmbientViewController *)arg1 removePendingItem:(SBActivityItem *)arg2;
- (bool)activityAmbientViewControllerCanBeginFullOverlayDismissGesture:(SBActivityAmbientViewController *)arg1;
- (void)activityAmbientViewControllerDidUpdateAudioCategoriesDisablingVolumeHUD:(SBActivityAmbientViewController *)arg1;
- (void)activityAmbientViewControllerDidUpdateVisibleActivityItems:(SBActivityAmbientViewController *)arg1;
- (SBActivityItem *)activityAmbientViewControllerNextPendingActivityItem:(SBActivityAmbientViewController *)arg1;
- (void)activityAmbientViewControllerResetIdleTimerBehavior:(SBActivityAmbientViewController *)arg1;

@end

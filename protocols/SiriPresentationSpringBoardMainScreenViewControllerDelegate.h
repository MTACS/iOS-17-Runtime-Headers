
@protocol SiriPresentationSpringBoardMainScreenViewControllerDelegate <SiriPresentationControllerDelegate>

@required

- (void)screenWakeIdleTimerResetRequested;
- (void)screenWakeRequested;
- (bool)siriPresentation:(id <SiriPresentation>)arg1 requestsDeviceUnlockWithPassword:(NSString *)arg2;

@optional

- (bool)isAmbientActive;
- (void)siriPresentation:(id <SiriPresentation>)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(NSArray *)arg2;
- (void)siriPresentation:(SiriPresentationSpringBoardMainScreenViewController *)arg1 didUpdateHomeGestureSharing:(bool)arg2;
- (void)siriPresentation:(SiriPresentationSpringBoardMainScreenViewController *)arg1 didUpdateShouldDismissForSwipesOutsideContent:(bool)arg2;
- (void)siriPresentation:(SiriPresentationSpringBoardMainScreenViewController *)arg1 didUpdateShouldDismissForTapOutsideContentTo:(bool)arg2;
- (void)siriPresentation:(SiriPresentationSpringBoardMainScreenViewController *)arg1 didUpdateShouldDismissForTapsOutsideContent:(bool)arg2;
- (void)siriPresentation:(SiriPresentationSpringBoardMainScreenViewController *)arg1 didUpdateShouldPassTouchesThroughToSpringBoard:(bool)arg2;

@end

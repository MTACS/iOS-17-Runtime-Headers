
@protocol AVPlaybackControlsViewVisibilityDelegate

@required

- (void)playbackControlsView:(AVPlaybackControlsView *)arg1 animateAlongsideVisibilityAnimationsWithAnimationCoordinator:(id <AVPlayerViewControllerAnimationCoordinator>)arg2 appearingViews:(NSArray *)arg3 disappearingViews:(NSArray *)arg4;
- (void)playbackControlsViewDidToggleControlsVisibility:(AVPlaybackControlsView *)arg1;
- (void)playbackControlsViewNeedsUpdateStatusBarAppearance:(AVPlaybackControlsView *)arg1;

@end

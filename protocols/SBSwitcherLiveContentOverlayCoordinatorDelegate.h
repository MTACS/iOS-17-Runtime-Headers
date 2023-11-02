
@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate <NSObject>

@required

- (void)addLiveContentOverlay:(id <SBSwitcherLiveContentOverlay>)arg1 forAppLayout:(SBAppLayout *)arg2 animated:(bool)arg3;
- (double)displayScaleForContentOverlay;
- (void)moveExistingLiveContentOverlay:(id <SBSwitcherLiveContentOverlay>)arg1 forAppLayout:(SBAppLayout *)arg2 toAppLayout:(SBAppLayout *)arg3;
- (UIViewController *)parentViewControllerForContentOverlay;
- (void)removeLiveContentOverlayForAppLayout:(SBAppLayout *)arg1 animated:(bool)arg2;

@end

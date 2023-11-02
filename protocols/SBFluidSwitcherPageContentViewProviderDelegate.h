
@protocol SBFluidSwitcherPageContentViewProviderDelegate <NSObject>

@required

- (UIViewController *)containerViewControllerForPageViewFromProvider:(SBFluidSwitcherPageContentViewProvider *)arg1;
- (<SBAppSwitcherReusableSnapshotViewDelegate> *)delegateForSnapshotPageViewFromProvider:(SBFluidSwitcherPageContentViewProvider *)arg1;
- (long long)orientationForPageViewFromProvider:(SBFluidSwitcherPageContentViewProvider *)arg1;
- (struct CGSize { double x1; double x2; })sizeForAppLayout:(SBAppLayout *)arg1 fromProvider:(SBFluidSwitcherPageContentViewProvider *)arg2;
- (SBTransientOverlayViewController *)viewControllerForTransientOverlayAppLayout:(SBAppLayout *)arg1 fromProvider:(SBFluidSwitcherPageContentViewProvider *)arg2;

@end

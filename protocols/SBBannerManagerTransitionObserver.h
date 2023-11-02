
@protocol SBBannerManagerTransitionObserver <NSObject>

@optional

- (void)bannerManager:(SBBannerManager *)arg1 containerWillTransitionToSize:(struct CGSize { double x1; double x2; })arg2 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (void)bannerManager:(SBBannerManager *)arg1 didUpdateWindowLevelOfWindow:(UIWindow *)arg2;
- (void)bannerManager:(SBBannerManager *)arg1 presentable:(id <BNPresentable>)arg2 willTransitionToSize:(struct CGSize { double x1; double x2; })arg3 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg4;
- (void)bannerManager:(SBBannerManager *)arg1 willDismissPresentable:(id <BNPresentable>)arg2 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (void)bannerManager:(SBBannerManager *)arg1 willPresentPresentable:(id <BNPresentable>)arg2 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (void)bannerManagerDidUpdateWindowLevel:(SBBannerManager *)arg1;

@end

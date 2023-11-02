
@protocol PKBannerViewController <NSObject, BNPresentableObserving, SBUISystemApertureElement>

@required

- (<PKBannerViewControllerPresentable> *)presentable;
- (void)revoked;
- (void)setPresentable:(id <PKBannerViewControllerPresentable>)arg1;

@end

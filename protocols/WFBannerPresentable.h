
@protocol WFBannerPresentable <NSObject, BNHostedContentProviding, BNPresentable>

@required

- (WFWorkflowRunningContext *)associatedRunningContext;
- (void)setAssociatedRunningContext:(WFWorkflowRunningContext *)arg1;
- (void)systemDismissedBanner;
- (UIViewController *)viewController;

@optional

- (bool)hasCustomHomeGestureBehavior;
- (void)homeGestureDidPassThreshold;
- (NSDictionary *)postOptions;
- (bool)shouldInstallBannerDimmingLayer;

@end

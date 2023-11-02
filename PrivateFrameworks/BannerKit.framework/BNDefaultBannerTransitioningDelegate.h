
@interface BNDefaultBannerTransitioningDelegate : NSObject <BNBannerTransitioningDelegate, BNPresentedBannerAnimationCustomizing> {
    bool  _resizeAnimationCustomizationPermitted;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isResizeAnimationCustomizationPermitted, nonatomic) bool resizeAnimationCustomizationPermitted;
@property (readonly) Class superclass;

- (Class)_bannerTransitionAnimatorClassForAnimationStyle:(long long)arg1;
- (id)_sizeTransitionAnimationSettingsForViewController:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1 userInfo:(id)arg2;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 userInfo:(id)arg4;
- (id)animationControllerForResizingController:(id)arg1 userInfo:(id)arg2;
- (id)init;
- (bool)isResizeAnimationCustomizationPermitted;
- (void)setResizeAnimationCustomizationPermitted:(bool)arg1;
- (id)sizeTransitionAnimationSettingsForPresentable:(id)arg1;

@end

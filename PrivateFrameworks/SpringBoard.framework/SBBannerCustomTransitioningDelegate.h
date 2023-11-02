
@interface SBBannerCustomTransitioningDelegate : BNDefaultBannerTransitioningDelegate {
    long long  _style;
}

@property (nonatomic) long long style;

- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1 userInfo:(id)arg2;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 userInfo:(id)arg4;
- (id)animatorForDismissalTransitionWithStyle:(long long)arg1;
- (id)animatorForPresentationTransitionWithStyle:(long long)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end

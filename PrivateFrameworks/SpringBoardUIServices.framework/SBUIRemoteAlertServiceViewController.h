
@interface SBUIRemoteAlertServiceViewController : UIViewController <SBUIRemoteAlertServiceInterface, SBUIRemoteAlertServiceInterface_Internal> {
    bool  _hasPreservedInputViews;
    bool  _hasSentAnimationFence;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (bool)_selectorIsOverriden:(SEL)arg1;
- (void)configureWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)didInvalidateForRemoteAlert;
- (void)didTransitionToAttachedToWindowedAccessory:(bool)arg1 windowedAccessoryCutoutFrameInScreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)handleButtonActions:(id)arg1;
- (void)handleDoubleHeightStatusBarTap;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)noteActivatedForActivityContinuationWithIdentifier:(id)arg1;
- (void)noteActivatedWithPresentationMode:(long long)arg1;
- (long long)preferredStatusBarStyle;
- (void)prepareForActivationWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)sb_becomeFirstResponder;
- (void)sb_dismissForAlertAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)sb_presentForAlertAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)sb_preserveInputViewsAnimated:(bool)arg1;
- (void)sb_resignFirstResponder;
- (void)sb_restoreInputViewsAnimated:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (void)synchronizeAnimationsInActions:(id /* block */)arg1;

@end

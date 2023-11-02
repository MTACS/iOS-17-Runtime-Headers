
@interface AMPPrivacyPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate> {
    UIView * _dimmingView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *dimmingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (void)_prepareDimmingViewIfNecessary;
- (long long)adaptivePresentationStyle;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (id)dimmingView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (void)presentationTransitionWillBegin;
- (void)setDimmingView:(id)arg1;
- (bool)shouldRemovePresentersView;

@end


@interface FBKPartialPresentationController : UIPresentationController {
    UIView * _dimmingView;
    double  _height;
}

@property (nonatomic, retain) UIView *dimmingView;
@property (nonatomic) double height;

- (void).cxx_destruct;
- (long long)adaptivePresentationStyle;
- (void)containerViewWillLayoutSubviews;
- (id)dimmingView;
- (void)dismissPresentation:(id)arg1;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (double)height;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (bool)isPresentingFullScreen;
- (void)presentationTransitionWillBegin;
- (void)setDimmingView:(id)arg1;
- (void)setHeight:(double)arg1;

@end

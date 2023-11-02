
@interface PRXCardSlideUpPresentationController : UIPresentationController {
    UIView * _dimmingView;
}

@property (nonatomic, readonly) UIView *dimmingView;

- (void).cxx_destruct;
- (id)dimmingView;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (id)initWithDimmingStyle:(long long)arg1 presentedViewController:(id)arg2 presentingViewController:(id)arg3;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;

@end

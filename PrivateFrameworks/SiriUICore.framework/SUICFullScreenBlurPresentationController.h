
@interface SUICFullScreenBlurPresentationController : UIPresentationController {
    _UIBackdropView * _fullScreenBlurView;
}

@property (nonatomic) unsigned long long blurStyle;

- (void).cxx_destruct;
- (void)_stageViewsForFadeIn;
- (unsigned long long)blurStyle;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 blurStyle:(unsigned long long)arg3;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (void)setBlurStyle:(unsigned long long)arg1;

@end

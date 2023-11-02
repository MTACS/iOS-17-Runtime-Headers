
@interface SMUFocusedSheetPresentationController : _UISheetPresentationController <SMUFocusedSheetPresentationController> {
    UIBlurEffect * _backgroundBlurEffect;
    UIVisualEffectView * _blurredBackgroundView;
}

@property (nonatomic, retain) UIBlurEffect *backgroundBlurEffect;
@property (nonatomic, readonly) UIVisualEffectView *blurredBackgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backgroundBlurEffect;
- (id)blurredBackgroundView;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (void)setBackgroundBlurEffect:(id)arg1;

@end

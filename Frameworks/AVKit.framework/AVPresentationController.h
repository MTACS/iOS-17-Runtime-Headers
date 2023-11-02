
@interface AVPresentationController : NSObject {
    AVPresentationContext * _context;
    AVObservationController * _observationController;
    UIPresentationController * _presentationController;
    UIWindow * _presentationWindowForDisablingAutorotation;
    AVPresentationContainerView * _presentedPresentationContainerView;
}

@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) AVPresentationContext *context;
@property (nonatomic, readonly) AVObservationController *observationController;
@property (nonatomic) UIWindow *presentationWindowForDisablingAutorotation;
@property (nonatomic, readonly) AVPresentationContainerView *presentedPresentationContainerView;
@property (nonatomic, readonly) UIViewController *presentedViewController;
@property (nonatomic, readonly) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (void)_ensureOrientation:(long long)arg1 enablingMixedOrientations:(bool)arg2;
- (void)_observeSceneDidBecomeActiveForRestoringRotatability;
- (void)_prepareDismissingTransitionContext;
- (id)containerView;
- (void)containerViewWillLayoutSubviews;
- (id)context;
- (void)dealloc;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (bool)dismissed;
- (bool)dismissing;
- (id)initWithPresentationController:(id)arg1 presentedViewController:(id)arg2 presentingViewController:(id)arg3 withConfiguration:(id)arg4;
- (id)observationController;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (id)presentationWindowForDisablingAutorotation;
- (bool)presented;
- (id)presentedPresentationContainerView;
- (id)presentedView;
- (id)presentedViewController;
- (bool)presenting;
- (id)presentingViewController;
- (void)setPresentationWindowForDisablingAutorotation:(id)arg1;
- (bool)shouldPresentInFullscreen;
- (bool)shouldRemovePresentersView;

@end

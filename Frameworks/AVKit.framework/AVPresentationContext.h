
@interface AVPresentationContext : NSObject {
    bool  _allowsPausingWhenTransitionCompletes;
    bool  _allowsSecondWindowPresentations;
    AVFullScreenViewController * _avFullScreenViewController;
    UIView * _backgroundView;
    AVPresentationConfiguration * _configuration;
    AVPresentationContextTransition * _dismissingTransition;
    AVPresentationController * _presentationController;
    AVPresentationContextTransition * _presentingTransition;
    UIWindow * _rotatableSecondWindow;
    UIView * _sourceView;
    UIView * _touchBlockingView;
    <UIViewControllerContextTransitioning> * _transitionContext;
    bool  _wasInitiallyPresentedWithoutSecondWindow;
}

@property (nonatomic) bool allowsPausingWhenTransitionCompletes;
@property (nonatomic) bool allowsSecondWindowPresentations;
@property (nonatomic, readonly) AVFullScreenViewController *avFullScreenViewController;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) bool canBeInteractivelyDismissed;
@property (nonatomic, readonly) AVPresentationConfiguration *configuration;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) AVPresentationContextTransition *currentTransition;
@property (getter=isDismissing, nonatomic, readonly) bool dismissing;
@property (nonatomic, retain) AVPresentationContextTransition *dismissingTransition;
@property (nonatomic, readonly) bool hasActiveTransition;
@property (nonatomic, readonly) AVPresentationController *presentationController;
@property (nonatomic, readonly) UIWindow *presentationWindow;
@property (nonatomic, readonly) AVPresentationContainerView *presentedPresentationContainerView;
@property (nonatomic, readonly) UIView *presentedView;
@property (nonatomic, readonly) UIViewController *presentedViewController;
@property (getter=isPresenting, nonatomic, readonly) bool presenting;
@property (nonatomic, retain) AVPresentationContextTransition *presentingTransition;
@property (nonatomic, retain) UIWindow *rotatableSecondWindow;
@property (nonatomic, readonly) AVFullScreenViewController *rotatableWindowViewController;
@property (nonatomic) UIView *sourceView;
@property (nonatomic, readonly) UIView *touchBlockingView;
@property (nonatomic) <UIViewControllerContextTransitioning> *transitionContext;
@property (nonatomic, readonly) long long transitionType;
@property (nonatomic, readonly) bool wasInitiallyInteractive;
@property (nonatomic) bool wasInitiallyPresentedWithoutSecondWindow;

+ (bool)supportsInteractiveCounterRotationDismissals;

- (void).cxx_destruct;
- (bool)allowsPausingWhenTransitionCompletes;
- (bool)allowsSecondWindowPresentations;
- (id)avFullScreenViewController;
- (id)backgroundView;
- (bool)canBeInteractivelyDismissed;
- (id)configuration;
- (id)containerView;
- (id)currentTransition;
- (id)dismissingTransition;
- (id)fromView;
- (bool)hasActiveTransition;
- (id)initWithPresentationController:(id)arg1 configuration:(id)arg2;
- (bool)isDismissing;
- (bool)isPresenting;
- (id)presentationController;
- (id)presentationWindow;
- (id)presentedPresentationContainerView;
- (id)presentedView;
- (id)presentedViewController;
- (id)presentingTransition;
- (id)presentingView;
- (id)rotatableSecondWindow;
- (id)rotatableWindowViewController;
- (void)setAllowsPausingWhenTransitionCompletes:(bool)arg1;
- (void)setAllowsSecondWindowPresentations:(bool)arg1;
- (void)setDismissingTransition:(id)arg1;
- (void)setPresentingTransition:(id)arg1;
- (void)setRotatableSecondWindow:(id)arg1;
- (void)setSourceView:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (void)setWasInitiallyPresentedWithoutSecondWindow:(bool)arg1;
- (id)sourceView;
- (id)toView;
- (id)touchBlockingView;
- (id)transitionContext;
- (long long)transitionType;
- (bool)wasInitiallyInteractive;
- (bool)wasInitiallyPresentedWithoutSecondWindow;

@end

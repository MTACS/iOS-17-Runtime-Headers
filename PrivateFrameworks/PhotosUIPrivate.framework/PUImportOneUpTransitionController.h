
@interface PUImportOneUpTransitionController : PUModalTransition <UIGestureRecognizerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UIViewControllerTransitioningDelegate> {
    UIPanGestureRecognizer * _dismissPanGestureRecognizer;
    PUPhotoPinchGestureRecognizer * _dismissPinchGestureRecognizer;
    bool  _hasInstalledDismissGestureRecognizers;
    long long  _operation;
    PUPhotoPinchGestureRecognizer * _presentingPinchGestureRecognizer;
    UIViewController * _presentingViewController;
    PUImportOneUpModalTransition * _transition;
}

@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) double completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIPanGestureRecognizer *dismissPanGestureRecognizer;
@property (nonatomic, retain) PUPhotoPinchGestureRecognizer *dismissPinchGestureRecognizer;
@property (nonatomic) bool hasInstalledDismissGestureRecognizers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long operation;
@property (nonatomic, readonly) PUPhotoPinchGestureRecognizer *presentingPinchGestureRecognizer;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUImportOneUpModalTransition *transition;
@property (nonatomic, readonly) bool wantsInteractiveStart;

- (void).cxx_destruct;
- (void)animationEnded:(bool)arg1;
- (bool)continuousGestureRecognizerIsActive:(id)arg1;
- (id)dismissPanGestureRecognizer;
- (id)dismissPinchGestureRecognizer;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hasInstalledDismissGestureRecognizers;
- (id)initWithPresentingViewController:(id)arg1 pinchGestureRecognizer:(id)arg2;
- (void)installDismissGestureRecognizersOnView:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (void)maybeInitiateInteractiveDismiss:(id)arg1;
- (long long)operation;
- (id)presentingPinchGestureRecognizer;
- (id)presentingViewController;
- (void)setDismissPanGestureRecognizer:(id)arg1;
- (void)setDismissPinchGestureRecognizer:(id)arg1;
- (void)setHasInstalledDismissGestureRecognizers:(bool)arg1;
- (void)setTransition:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (id)transition;
- (bool)wantsInteractiveStart;

@end


@interface PXMessagesStackDismissalAnimationController : NSObject <PXPhotosGridEdgeSwipeInteractiveDismissalDelegate, UIViewControllerAnimatedTransitioning> {
    UIViewController * _dismissingViewController;
    UIViewPropertyAnimator * _propertyAnimator;
    PXMessagesStackView * _stackView;
    double  _transitionDuration;
    PXPhotosGridStackTransitionHelper * _transitionHelper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIViewController *dismissingViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <UIViewControllerInteractiveTransitioning> *interactionController;
@property (nonatomic, readonly) PXMessagesStackView *stackView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)dismissingViewController;
- (id)initWithStackView:(id)arg1 dismissingViewController:(id)arg2;
- (id)interactionController;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (void)runTransitionAnimation:(id)arg1;
- (id)stackView;
- (double)transitionDuration:(id)arg1;

@end

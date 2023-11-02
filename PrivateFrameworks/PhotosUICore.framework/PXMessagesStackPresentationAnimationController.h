
@interface PXMessagesStackPresentationAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    UIViewPropertyAnimator * _propertyAnimator;
    PXMessagesStackView * _stackView;
    double  _transitionDuration;
    PXPhotosGridStackTransitionHelper * _transitionHelper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXMessagesStackView *stackView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)initWithStackView:(id)arg1;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (id)stackView;
- (double)transitionDuration:(id)arg1;

@end

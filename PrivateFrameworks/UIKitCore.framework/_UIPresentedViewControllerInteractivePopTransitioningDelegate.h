
@interface _UIPresentedViewControllerInteractivePopTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate> {
    <UIViewControllerAnimatedTransitioning> * _animator;
    <UIViewControllerInteractiveTransitioning> * _interactor;
}

@property (nonatomic, retain) <UIViewControllerAnimatedTransitioning> *animator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <UIViewControllerInteractiveTransitioning> *interactor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animator;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactor;
- (void)setAnimator:(id)arg1;
- (void)setInteractor:(id)arg1;

@end

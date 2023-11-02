
@interface VUIConfirmationTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate, VUIConfirmationAnimatedTransitioningDelegate> {
    VUIConfirmationAnimatedTransitioning * _dismissTransition;
    id /* block */  _dismissedHandlerBlock;
    VUIConfirmationAnimatedTransitioning * _presentTransition;
    id /* block */  _presentedHandlerBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissedHandlerBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ presentedHandlerBlock;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)confirmationAnimatedTransitioningAnimationDidEnd:(id)arg1;
- (id /* block */)dismissedHandlerBlock;
- (id)init;
- (id /* block */)presentedHandlerBlock;
- (void)setDismissedHandlerBlock:(id /* block */)arg1;
- (void)setPresentedHandlerBlock:(id /* block */)arg1;

@end

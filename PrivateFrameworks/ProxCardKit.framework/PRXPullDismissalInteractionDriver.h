
@interface PRXPullDismissalInteractionDriver : NSObject <UIScrollViewDelegate> {
    PRXPurelyInteractiveTransition * _interactiveTransition;
    UIViewController * _presentedViewController;
    PRXPullDismissalScrollView * _scrollView;
}

@property (nonatomic, readonly) <UIViewControllerAnimatedTransitioning> *animationController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <UIViewControllerInteractiveTransitioning> *interactionController;
@property (nonatomic, readonly) UIViewController *presentedViewController;
@property (nonatomic, readonly) PRXPullDismissalScrollView *scrollView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishPullToDismiss;
- (id)animationController;
- (id)initWithPresentedViewController:(id)arg1 scrollView:(id)arg2;
- (id)interactionController;
- (id)presentedViewController;
- (id)scrollView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;

@end

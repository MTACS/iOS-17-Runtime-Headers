
@interface PhotosUICore.BasicInteractiveSwipeDownTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    void completionHandler;
    void grabAffordanceView;
    void interactiveTransition;
    void verticalOffset;
}

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)init;
- (double)transitionDuration:(id)arg1;

@end


@interface _UINavigationControllerVisualStyleWatchOS : _UINavigationControllerVisualStyle {
    <UIViewControllerInteractiveTransitioning> * _interactionController;
    <UIViewControllerAnimatedTransitioning> * _transitionController;
}

- (void).cxx_destruct;
- (id)interactionController;
- (bool)isUsingParallaxTransition;
- (void)setInteractionController:(id)arg1;
- (void)setTransitionController:(id)arg1;
- (id)transitionController;

@end

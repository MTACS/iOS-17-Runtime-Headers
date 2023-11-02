
@interface _UINavigationControllerVisualStyleIOS : _UINavigationControllerVisualStyle {
    _UINavigationInteractiveTransition * _interactionController;
    _UINavigationParallaxTransition * _transitionController;
}

- (void).cxx_destruct;
- (id)initWithNavigationController:(id)arg1;
- (id)interactionController;
- (bool)isUsingParallaxTransition;
- (void)layoutContainerViewSemanticContentAttributeChanged:(id)arg1;
- (id)transitionController;
- (void)updateTransitionControllerWithOperation:(long long)arg1;

@end


@interface _UINavigationControllerVisualStyle : NSObject {
    UINavigationController * _navigationController;
}

@property (nonatomic, readonly) <UIViewControllerInteractiveTransitioning> *interactionController;
@property (nonatomic, readonly) bool isUsingParallaxTransition;
@property (nonatomic) UINavigationController *navigationController;
@property (nonatomic, readonly) <UIViewControllerAnimatedTransitioning> *transitionController;

- (void)containerViewWillLayoutSubviews:(id)arg1;
- (id)initWithNavigationController:(id)arg1;
- (id)interactionController;
- (bool)isUsingParallaxTransition;
- (void)layoutContainerViewSemanticContentAttributeChanged:(id)arg1;
- (void)navigationBarFrameChanged;
- (void)navigationBarVisibilityChanged;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (bool)shouldUseInteractionControllerForInteractiveTransition;
- (void)toolbarFrameChanged;
- (void)toolbarVisibilityChanged;
- (id)transitionController;
- (void)updateTransitionControllerWithOperation:(long long)arg1;

@end

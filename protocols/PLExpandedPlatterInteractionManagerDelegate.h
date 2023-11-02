
@protocol PLExpandedPlatterInteractionManagerDelegate <NSObject>

@optional

- (UIMenu *)expandedPlatterInteractionManager:(PLExpandedPlatterInteractionManager *)arg1 menuWithSuggestedActions:(NSArray *)arg2;
- (bool)expandedPlatterInteractionManager:(PLExpandedPlatterInteractionManager *)arg1 shouldBeginInteractionWithTouchAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)expandedPlatterInteractionManager:(void *)arg1 shouldCommitInteraction:(void *)arg2; // needs 2 arg types, found 7: PLExpandedPlatterInteractionManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)expandedPlatterInteractionManager:(PLExpandedPlatterInteractionManager *)arg1 willDismissContentWithAnimator:(id <PLExpandedPlatterInteractionAnimating>)arg2;
- (void)expandedPlatterInteractionManager:(PLExpandedPlatterInteractionManager *)arg1 willPresentContentWithAnimator:(id <PLExpandedPlatterInteractionAnimating>)arg2;
- (UIView *)expandedPlatterInteractionManagerContainerView:(PLExpandedPlatterInteractionManager *)arg1;
- (UIViewController *)expandedPlatterInteractionManagerContentViewController:(PLExpandedPlatterInteractionManager *)arg1;
- (NSString *)expandedPlatterInteractionManagerIdentifier:(PLExpandedPlatterInteractionManager *)arg1;
- (bool)expandedPlatterInteractionManagerShouldAllowInitialSwipeToDismiss:(PLExpandedPlatterInteractionManager *)arg1;
- (bool)expandedPlatterInteractionManagerShouldAllowLongPressGesture:(PLExpandedPlatterInteractionManager *)arg1;

@end

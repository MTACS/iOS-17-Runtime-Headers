
@protocol PLSwipeInteractionDelegate <NSObject>

@required

- (bool)shouldContinuePresentingActionButtonsForSwipeInteraction:(PLSwipeInteraction *)arg1;
- (NSArray *)swipeInteraction:(PLSwipeInteraction *)arg1 actionsToRevealFromLayoutLocation:(unsigned long long)arg2;
- (bool)swipeInteraction:(PLSwipeInteraction *)arg1 shouldRevealActionsFromLayoutLocation:(unsigned long long)arg2;
- (UIView *)viewToMoveForSwipeInteraction:(PLSwipeInteraction *)arg1;

@optional

- (double)buttonsCornerRadiusForSwipeInteraction:(PLSwipeInteraction *)arg1;
- (long long)buttonsRecipeForSwipeInteraction:(PLSwipeInteraction *)arg1;
- (UIColor *)buttonsTextColorForSwipeInteraction:(PLSwipeInteraction *)arg1;
- (UIColor *)buttonsTintColorForSwipeInteraction:(PLSwipeInteraction *)arg1;
- (bool)shouldVerticallyStackButtonsForSwipeInteraction:(PLSwipeInteraction *)arg1;
- (void)swipeInteraction:(PLSwipeInteraction *)arg1 didMoveToNewXPosition:(double)arg2;
- (void)swipeInteractionDidBeginHidingActions:(PLSwipeInteraction *)arg1;
- (void)swipeInteractionDidBeginRevealingActions:(PLSwipeInteraction *)arg1;
- (void)swipeInteractionDidCompleteHidingActions:(PLSwipeInteraction *)arg1;
- (void)swipeInteractionDidCompleteRevealingActions:(PLSwipeInteraction *)arg1;
- (void)swipeInteractionDidSignificantUserInteraction:(PLSwipeInteraction *)arg1;

@end


@protocol _UISheetInteractionDelegate <NSObject>

@optional

- (void)_sheetInteractionDraggingBegan:(_UISheetInteraction *)arg1 withRubberBandCoefficient:(double)arg2;
- (void)_sheetInteractionDraggingChanged:(_UISheetInteraction *)arg1 withTranslation:(struct CGPoint { double x1; double x2; })arg2 velocity:(struct CGPoint { double x1; double x2; })arg3 animateChange:(bool)arg4;
- (void)_sheetInteractionDraggingEnded:(_UISheetInteraction *)arg1;
- (struct CGPoint { double x1; double x2; })offsetForInterruptedAnimationInSheetInteraction:(_UISheetInteraction *)arg1;
- (void)sheetInteraction:(_UISheetInteraction *)arg1 didChangeOffset:(struct CGPoint { double x1; double x2; })arg2;
- (bool)sheetInteraction:(_UISheetInteraction *)arg1 shouldAllowVerticalRubberBandingWithEvent:(UIEvent *)arg2;
- (bool)sheetInteraction:(_UISheetInteraction *)arg1 shouldBeginHorizontalRubberBandingWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (bool)sheetInteractionShouldInteractWithQuicklyScrollingDescendentScrollView:(_UISheetInteraction *)arg1;

@end

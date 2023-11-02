
@protocol UIMultiSelectInteractionDelegate <NSObject>

@required

- (void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(bool)arg1;
- (void)didEndMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)interaction:(UIMultiSelectInteraction *)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint { double x1; double x2; })arg2 withVelocity:(struct CGPoint { double x1; double x2; })arg3;
- (bool)isInMultiSelectMode;
- (void)multiSelectInteraction:(UIMultiSelectInteraction *)arg1 appendSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)multiSelectInteraction:(UIMultiSelectInteraction *)arg1 toggleSelectionStateUpToPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)shouldAllowSelectionExtensionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldBeginMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 ofType:(long long)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 withVelocity:(struct CGPoint { double x1; double x2; })arg4;
- (bool)supportsMultiSelectInteraction:(UIMultiSelectInteraction *)arg1;
- (void)willBeginMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 keepCurrentSelection:(bool)arg3;

@optional

- (void)automaticallyTransitionToMultiSelectMode;
- (UIScrollView *)childScrollViewAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)didCancelMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)interaction:(UIMultiSelectInteraction *)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)multiSelectInteraction:(UIMultiSelectInteraction *)arg1 extendSelectionInDirection:(unsigned long long)arg2;
- (void)multiSelectInteraction:(UIMultiSelectInteraction *)arg1 selectItemsWithinRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 leadingPoint:(struct CGPoint { double x1; double x2; })arg3;
- (bool)multiSelectInteraction:(UIMultiSelectInteraction *)arg1 shouldStartBandSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)multiSelectInteraction:(UIMultiSelectInteraction *)arg1 toggleSelectionWithinRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 leadingPoint:(struct CGPoint { double x1; double x2; })arg3;
- (bool)multiSelectInteractionGestureShouldPreventDragLiftGesture:(UIGestureRecognizer *)arg1;
- (bool)shouldAllowSelectionAppendageAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldAllowSelectionExtensionAtIndexPath:(NSIndexPath *)arg1;
- (bool)shouldBeginMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 withVelocity:(struct CGPoint { double x1; double x2; })arg3;
- (bool)supportsKeyboardSelectionExtension;
- (void)willBeginMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;

@end

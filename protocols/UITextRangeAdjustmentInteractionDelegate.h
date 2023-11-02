
@protocol UITextRangeAdjustmentInteractionDelegate <NSObject>

@required

- (void)cancelAutoscroll;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForTextRangeAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1;
- (<UICoordinateSpace> *)containerCoordinateSpaceForTextRangeAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1;
- (unsigned long long)loupeOrientationForTextRangeAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paddedTextRangeAdjustmentHitRegionForEdge:(unsigned long long)arg1 precision:(unsigned long long)arg2;
- (void)startAutoscroll:(struct CGPoint { double x1; double x2; })arg1;
- (void)textRangeAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1 didBeginAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)textRangeAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1 didEndAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)textRangeAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1 selectionMoved:(struct CGPoint { double x1; double x2; })arg2 withTouchPoint:(struct CGPoint { double x1; double x2; })arg3;
- (bool)textRangeAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1 shouldBeginAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)textRangeAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1 shouldDisplayLoupeForTouchType:(long long)arg2;
- (bool)textRangeAdjustmentInteractionShouldApplyTouchOffset:(UITextRangeAdjustmentInteraction *)arg1;
- (void)textRangeAdjustmentInteractionWasCancelled:(UITextRangeAdjustmentInteraction *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRangeAdjustmentRectForEdge:(unsigned long long)arg1;
- (UIView<_UITextSelectionWidgetAnimating> *)textRangeAdjustmentViewForEdge:(unsigned long long)arg1;

@end

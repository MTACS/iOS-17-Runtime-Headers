
@protocol _UIRemoteSheet_Internal <_UIRemoteSheet>

@optional

- (void)_sheetInteractionDraggingDidBeginWithRubberBandCoefficient:(double)arg1;
- (void)_sheetInteractionDraggingDidChangeWithTranslation:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2 animateChange:(bool)arg3;
- (void)_sheetInteractionDraggingDidEnd;

@end

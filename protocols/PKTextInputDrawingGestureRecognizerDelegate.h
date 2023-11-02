
@protocol PKTextInputDrawingGestureRecognizerDelegate <PKDrawingGestureRecognizerDelegate>

@required

- (bool)drawingGestureRecognizer:(PKTextInputDrawingGestureRecognizer *)arg1 shouldFinishGestureWithTouch:(UITouch *)arg2;
- (void)drawingGestureRecognizerDrawingTargetIsDrawingDidChange:(PKTextInputDrawingGestureRecognizer *)arg1;
- (bool)drawingGestureRecognizerLongPressShouldBegin:(PKTextInputDrawingGestureRecognizer *)arg1;
- (void)drawingGestureRecognizerLongPressStateDidChange:(PKTextInputDrawingGestureRecognizer *)arg1;
- (bool)drawingGestureRecognizerRequiresPastTapToBegin:(PKTextInputDrawingGestureRecognizer *)arg1;
- (bool)drawingGestureRecognizerRequiresTargetElementToBegin:(PKTextInputDrawingGestureRecognizer *)arg1;
- (void)drawingGestureStrokeAcceptanceStateDidChange:(PKTextInputDrawingGestureRecognizer *)arg1;

@end

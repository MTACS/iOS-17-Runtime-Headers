
@protocol PKTextInputCanvasControllerDelegate <NSObject>

@required

- (void)canvasControllerCanvasDidFinishAnimatingStrokes:(PKTextInputCanvasController *)arg1;
- (UIView *)canvasControllerContainerView:(PKTextInputCanvasController *)arg1;
- (PKTextInputDrawingGestureRecognizer *)canvasControllerDrawingGestureRecognizer:(PKTextInputCanvasController *)arg1;
- (void)canvasControllerHasVisibleStrokesChanged:(PKTextInputCanvasController *)arg1;
- (UIColor *)canvasControllerPreferredStrokeColor:(PKTextInputCanvasController *)arg1 animated:(bool*)arg2;

@end

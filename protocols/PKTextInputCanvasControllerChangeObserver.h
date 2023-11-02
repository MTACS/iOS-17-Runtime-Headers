
@protocol PKTextInputCanvasControllerChangeObserver <NSObject>

@required

- (void)canvasController:(PKTextInputCanvasController *)arg1 drawingDidChange:(PKDrawing *)arg2;
- (void)canvasControllerDidBeginDrawing:(PKTextInputCanvasController *)arg1;
- (void)canvasControllerDidCancelStroke:(PKTextInputCanvasController *)arg1 strokeAcceptanceState:(long long)arg2;
- (void)canvasControllerDidEndDrawing:(PKTextInputCanvasController *)arg1;
- (void)canvasControllerEndedStroke:(PKTextInputCanvasController *)arg1;
- (void)canvasControllerInProgressStrokeDidChange:(PKTextInputCanvasController *)arg1;

@end

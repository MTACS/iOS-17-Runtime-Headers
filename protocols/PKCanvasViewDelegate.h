
@protocol PKCanvasViewDelegate <NSObject, UIScrollViewDelegate>

@optional

- (void)canvasViewDidBeginUsingTool:(PKCanvasView *)arg1;
- (void)canvasViewDidEndUsingTool:(PKCanvasView *)arg1;
- (void)canvasViewDidFinishRendering:(PKCanvasView *)arg1;
- (void)canvasViewDrawingDidChange:(PKCanvasView *)arg1;

@end


@protocol PKTiledCanvasViewDelegate <NSObject>

@optional

- (void)_canvasView:(PKTiledCanvasView *)arg1 didFinishRenderingNewStrokes:(NSArray *)arg2 inDrawing:(PKDrawing *)arg3 forPreview:(bool)arg4;
- (void)_canvasViewDidEraseStrokes:(NSArray *)arg1;
- (void)_canvasViewWillBeginDrawing:(PKTiledCanvasView *)arg1;
- (void)canvasView:(PKTiledCanvasView *)arg1 beganStroke:(PKStroke *)arg2;
- (void)canvasView:(PKTiledCanvasView *)arg1 cancelledStroke:(PKStroke *)arg2;
- (void)canvasView:(PKTiledCanvasView *)arg1 didPresentWithCanvasOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)canvasView:(PKTiledCanvasView *)arg1 drawingDidChange:(PKDrawing *)arg2;
- (void)canvasView:(PKTiledCanvasView *)arg1 endedStroke:(PKStroke *)arg2;
- (void)canvasView:(PKTiledCanvasView *)arg1 endedStroke:(PKStroke *)arg2 shapeStrokes:(NSArray *)arg3;
- (PKInk *)canvasView:(PKTiledCanvasView *)arg1 inkForStroke:(PKStroke *)arg2;
- (void)canvasView:(PKTiledCanvasView *)arg1 registerMultiStepUndoCommands:(NSArray *)arg2;
- (void)canvasView:(PKTiledCanvasView *)arg1 registerUndoCommands:(NSArray *)arg2;
- (bool)canvasView:(PKTiledCanvasView *)arg1 shouldBeginDrawingWithTouch:(UITouch *)arg2;
- (bool)canvasView:(PKTiledCanvasView *)arg1 shouldDelayDrawingBeganWithTouch:(UITouch *)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })canvasView:(PKTiledCanvasView *)arg1 transformForStroke:(PKStroke *)arg2;
- (<UICoordinateSpace> *)canvasViewContentCoordinateSpace:(PKTiledCanvasView *)arg1;
- (void)canvasViewDidBeginDrawing:(PKTiledCanvasView *)arg1;
- (void)canvasViewDidEndDrawing:(PKTiledCanvasView *)arg1;
- (void)canvasViewDidFinishAnimatingStrokes:(PKTiledCanvasView *)arg1;
- (void)canvasViewDrawingMoved:(PKTiledCanvasView *)arg1 withTouch:(UITouch *)arg2;
- (void)canvasViewHasVisibleStrokesChanged:(PKTiledCanvasView *)arg1;
- (void)canvasViewInvalidateTiles:(PKTiledCanvasView *)arg1;
- (bool)canvasViewShouldCombineStrokes:(PKTiledCanvasView *)arg1;
- (bool)canvasViewShouldDisableShapeRecognition:(PKTiledCanvasView *)arg1;
- (UIView *)canvasViewTouchView:(PKTiledCanvasView *)arg1;
- (void)canvasViewWillBeginNewStroke:(PKTiledCanvasView *)arg1 withTouch:(UITouch *)arg2 location:(struct CGPoint { double x1; double x2; })arg3;
- (void)replayCanvasViewDrawingMoved:(PKTiledCanvasView *)arg1 inputPoint:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg2;

@end

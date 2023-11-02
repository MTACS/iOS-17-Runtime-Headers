
@protocol PKTiledViewDelegate

@required

- (void)_canvasViewWillBeginDrawing:(PKTiledView *)arg1;
- (void)canvasView:(PKTiledView *)arg1 beganStroke:(PKStroke *)arg2;
- (void)canvasView:(PKTiledView *)arg1 cancelledStroke:(PKStroke *)arg2;
- (bool)canvasView:(PKTiledView *)arg1 shouldBeginDrawingWithTouch:(UITouch *)arg2;
- (void)canvasViewDidBeginDrawing:(PKTiledView *)arg1;
- (void)canvasViewDidEndDrawing:(PKTiledView *)arg1;
- (void)canvasViewDidEraseStrokes:(NSArray *)arg1;

@optional

- (bool)_canvasViewSnapshottingDisabled:(PKTiledView *)arg1;
- (void)_canvasViewWillCreateSnapshot:(PKTiledView *)arg1;
- (void)canvasView:(PKTiledView *)arg1 didChangeHiddenState:(bool)arg2;
- (void)canvasView:(PKTiledView *)arg1 endedStroke:(PKStroke *)arg2;
- (void)canvasView:(PKTiledView *)arg1 endedStroke:(PKStroke *)arg2 shapeStrokes:(NSArray *)arg3;
- (bool)canvasView:(PKTiledView *)arg1 hoverShouldBeActiveAt:(struct CGPoint { double x1; double x2; })arg2;
- (NSArray *)tiledViewAttachmentViews;

@end

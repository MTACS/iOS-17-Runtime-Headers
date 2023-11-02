
@protocol PKRulerDelegate

@required

- (PKController *)drawingController;
- (UIGestureRecognizer<PKDrawingGestureRecognizerProtocol> *)drawingGestureRecognizer;
- (double)drawingScale;
- (bool)isDrawing;
- (void)setRulerEnabled:(bool)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })strokeTransform;
- (UIView *)topView;

@optional

- (PKTiledCanvasView *)canvasView;

@end

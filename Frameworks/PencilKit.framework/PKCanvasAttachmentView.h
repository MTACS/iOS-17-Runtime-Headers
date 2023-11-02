
@interface PKCanvasAttachmentView : PKAttachmentView {
    bool  __wantsFullyRenderedNotification;
    PKCanvasView * _canvasView;
    double  _drawingWidth;
    NSMutableArray * _fullyRenderedCompletionBlocks;
}

@property (nonatomic) bool _wantsFullyRenderedNotification;
@property (nonatomic) PKCanvasView *canvasView;
@property (nonatomic) double drawingWidth;
@property (nonatomic, retain) NSMutableArray *fullyRenderedCompletionBlocks;

- (void).cxx_destruct;
- (bool)_wantsFullyRenderedNotification;
- (id)canvasView;
- (bool)disableTileAnimations;
- (void)drawingDidChangeVisibleStrokes:(bool)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })drawingTransform;
- (double)drawingWidth;
- (void)fullyRendered;
- (id)fullyRenderedCompletionBlocks;
- (void)setCanvasView:(id)arg1;
- (void)setDrawingWidth:(double)arg1;
- (void)setFullyRenderedCompletionBlocks:(id)arg1;
- (void)set_wantsFullyRenderedNotification:(bool)arg1;
- (bool)wantsFullyRendered;

@end

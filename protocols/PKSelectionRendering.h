
@protocol PKSelectionRendering <NSObject>

@required

- (NSArray *)_accessibilityUserTestingChildren;
- (void)_didBeginDraggingSelection;
- (void)_didEndDraggingSelection;
- (void)_renderLiveSelectionPath:(struct CGPath { }*)arg1 forStrokes:(NSOrderedSet *)arg2 inDrawing:(PKDrawing *)arg3 liveScrollOffset:(struct CGPoint { double x1; double x2; })arg4;
- (void)_setupSelectionAdornment;
- (CALayer *)adornmentLayer;
- (struct CGPoint { double x1; double x2; })editMenuLocation;
- (id)initForLiveSelectionWithRenderingDelegate:(id <PKSelectionRenderingDelegate>)arg1;
- (id)initWithStrokeSelection:(PKStrokeSelection *)arg1 renderingDelegate:(id <PKSelectionRenderingDelegate>)arg2;
- (UIBezierPath *)lassoPath;

@end

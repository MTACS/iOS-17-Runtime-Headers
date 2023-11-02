
@protocol PKSelectionRenderingDelegate

@required

- (NSArray *)_firstStrokesInStrokes:(NSOrderedSet *)arg1;
- (NSArray *)_lastStrokesInStrokes:(NSOrderedSet *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForDrawing:(PKDrawing *)arg1;
- (long long)currentIntersectionAlgorithm;
- (bool)isRTL;
- (double)scaleForDrawing:(PKDrawing *)arg1;
- (struct CGColor { }*)selectionColor;
- (NSObject<OS_dispatch_queue> *)selectionHullQueue;
- (void)setSelectionHullQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformFromStrokeSpaceToViewInDrawing:(PKDrawing *)arg1;

@end

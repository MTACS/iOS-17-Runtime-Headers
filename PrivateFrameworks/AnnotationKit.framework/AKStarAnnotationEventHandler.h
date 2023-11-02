
@interface AKStarAnnotationEventHandler : AKPolygonAnnotationEventHandler

- (void)getInitialDraggedPoint:(struct CGPoint { double x1; double x2; }*)arg1 otherPoint:(struct CGPoint { double x1; double x2; }*)arg2 center:(struct CGPoint { double x1; double x2; }*)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5;
- (bool)lockAspectRatioByDefault;
- (void)updateModelWithCurrentPoint:(struct CGPoint { double x1; double x2; })arg1 options:(unsigned long long)arg2;

@end

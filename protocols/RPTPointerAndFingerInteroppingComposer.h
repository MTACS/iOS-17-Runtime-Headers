
@protocol RPTPointerAndFingerInteroppingComposer

@required

- (void)_pointerOrFingerFlickAt:(struct CGPoint { double x1; double x2; })arg1 byDelta:(struct CGVector { double x1; double x2; })arg2 duration:(double)arg3;
- (void)_pointerOrFingerScrollAt:(struct CGPoint { double x1; double x2; })arg1 byDelta:(struct CGVector { double x1; double x2; })arg2 duration:(double)arg3 touchDownAndLift:(bool)arg4;
- (RPTInteractionOptions *)interactionOptions;
- (void)pointerMoveToPointIfApplicable:(struct CGPoint { double x1; double x2; })arg1;
- (void)pointerOrFingerDoubleTap:(struct CGPoint { double x1; double x2; })arg1;
- (void)pointerOrFingerDragWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 mask:(unsigned long long)arg2 endPoint:(struct CGPoint { double x1; double x2; })arg3 mask:(unsigned long long)arg4 duration:(double)arg5;
- (void)pointerOrFingerMoveToPoint:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
- (void)pointerOrFingerScrollAt:(struct CGPoint { double x1; double x2; })arg1 byDelta:(struct CGVector { double x1; double x2; })arg2 duration:(double)arg3;
- (void)pointerOrFingerTap:(struct CGPoint { double x1; double x2; })arg1;
- (void)pointerOrFingerTapDown:(struct CGPoint { double x1; double x2; })arg1;
- (void)pointerOrFingerTapUp:(struct CGPoint { double x1; double x2; })arg1;

@end

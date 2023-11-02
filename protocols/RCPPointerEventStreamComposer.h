
@protocol RCPPointerEventStreamComposer <RCPBaseEventStreamComposer>

@required

- (void)pointerBeginPressingButton:(long long)arg1;
- (CAMediaTimingFunction *)pointerCurveFunction;
- (void)pointerDiscreteGesture:(NSSet *)arg1 duration:(double)arg2 frequency:(long long)arg3;
- (void)pointerDiscreteScroll:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
- (void)pointerDiscreteScroll:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2 frequency:(long long)arg3;
- (void)pointerEndPressingButton:(long long)arg1;
- (double)pointerFrequency;
- (void)pointerMoveByDelta:(struct CGVector { double x1; double x2; })arg1 duration:(double)arg2;
- (void)pointerMoveDelta:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2 frequency:(long long)arg3;
- (void)pointerMoveFromOriginPoint:(struct CGPoint { double x1; double x2; })arg1 toDestinationPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3 frequency:(long long)arg4;
- (void)pointerMoveToPoint:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
- (void)pointerPhasedFlick:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
- (void)pointerPhasedFlick:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2 frequency:(long long)arg3;
- (void)pointerPhasedScroll:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
- (void)pointerPhasedScroll:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2 frequency:(long long)arg3;
- (void)pointerRotation:(double)arg1 duration:(double)arg2 frequency:(long long)arg3;
- (void)pointerScale:(double)arg1 duration:(double)arg2 frequency:(long long)arg3;
- (void)pointerSetAbsolutePosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)pointerTranslatation:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2 frequency:(long long)arg3;
- (bool)scalePointerPhaseScrollToPixels;
- (void)setPointerCurveFunction:(CAMediaTimingFunction *)arg1;
- (void)setPointerFrequency:(double)arg1;
- (void)setScalePointerPhaseScrollToPixels:(bool)arg1;

@end

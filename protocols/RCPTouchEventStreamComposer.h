
@protocol RCPTouchEventStreamComposer <RCPBaseEventStreamComposer>

@required

- (double)defaultPressure;
- (double)defaultRadius;
- (void)doubleFingerTap:(struct CGPoint { double x1; double x2; })arg1;
- (void)doubleTap:(struct CGPoint { double x1; double x2; })arg1;
- (void)dragWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3;
- (void)dragWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3 pressure:(double)arg4;
- (void)dragWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3 pressure:(double)arg4 radius:(double)arg5;
- (void)dragWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3 radius:(double)arg4;
- (void)dragWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3 tapAndWait:(double)arg4 lift:(bool)arg5;
- (void)dragWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3 tapAndWait:(double)arg4 lift:(bool)arg5 pressure:(double)arg6;
- (void)dragWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3 tapAndWait:(double)arg4 lift:(bool)arg5 pressure:(double)arg6 radius:(double)arg7;
- (void)dragWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3 tapAndWait:(double)arg4 lift:(bool)arg5 radius:(double)arg6;
- (void)dragWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 mask:(unsigned long long)arg2 endPoint:(struct CGPoint { double x1; double x2; })arg3 mask:(unsigned long long)arg4 duration:(double)arg5;
- (void)edgeOrb:(struct CGPoint { double x1; double x2; })arg1;
- (void)edgeOrbSwipe:(struct CGPoint { double x1; double x2; })arg1 withEndLocation:(struct CGPoint { double x1; double x2; })arg2 withDuration:(double)arg3;
- (void)liftUp:(struct CGPoint { double x1; double x2; })arg1;
- (void)liftUp:(struct CGPoint { double x1; double x2; })arg1 touchCount:(unsigned long long)arg2;
- (void)liftUpActivePointsByIndex:(NSArray *)arg1;
- (void)liftUpAtAllActivePoints;
- (void)liftUpAtAllActivePointsWithEventType:(long long)arg1;
- (void)liftUpAtPoints:(struct CGPoint { double x1; double x2; }*)arg1 touchCount:(unsigned long long)arg2;
- (void)moveToPoint:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
- (void)moveToPoints:(struct CGPoint { double x1; double x2; }*)arg1 touchCount:(unsigned long long)arg2 duration:(double)arg3;
- (void)moveToPoints:(struct CGPoint { double x1; double x2; }*)arg1 touchCount:(unsigned long long)arg2 pressure:(double)arg3 duration:(double)arg4;
- (void)moveToPoints:(struct CGPoint { double x1; double x2; }*)arg1 touchCount:(unsigned long long)arg2 pressure:(double)arg3 duration:(double)arg4 radius:(double)arg5;
- (void)multifingerDragWithPointArray:(struct CGPoint { double x1; double x2; }*)arg1 numPoints:(unsigned long long)arg2 duration:(double)arg3 numFingers:(unsigned long long)arg4;
- (void)peekAndPop:(struct CGPoint { double x1; double x2; })arg1 commit:(bool)arg2 duration:(double)arg3;
- (void)peekAndPop:(struct CGPoint { double x1; double x2; })arg1 commit:(bool)arg2 duration:(double)arg3 pressure:(double)arg4;
- (void)peekAndPop:(struct CGPoint { double x1; double x2; })arg1 commit:(bool)arg2 duration:(double)arg3 pressure:(double)arg4 radius:(double)arg5;
- (void)peekAndPop:(struct CGPoint { double x1; double x2; })arg1 commit:(bool)arg2 duration:(double)arg3 radius:(double)arg4;
- (void)pinchCloseWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3;
- (void)pinchCloseWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3 pressure:(double)arg4;
- (void)pinchCloseWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3 pressure:(double)arg4 radius:(double)arg5;
- (void)pinchCloseWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3 radius:(double)arg4;
- (void)pinchOpenWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3;
- (void)pinchOpenWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3 pressure:(double)arg4;
- (void)pinchOpenWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3 pressure:(double)arg4 radius:(double)arg5;
- (void)pinchOpenWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3 radius:(double)arg4;
- (void)rotate:(struct CGPoint { double x1; double x2; })arg1 withRadius:(double)arg2 rotation:(double)arg3 duration:(double)arg4 touchCount:(unsigned long long)arg5;
- (void)sendFlickWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3;
- (void)sendFlickWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3 pressure:(double)arg4;
- (void)sendFlickWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3 pressure:(double)arg4 radius:(double)arg5;
- (void)sendFlickWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3 radius:(double)arg4;
- (void)setTouchCurveFunction:(CAMediaTimingFunction *)arg1;
- (void)setTouchFrequency:(long long)arg1;
- (void)tap:(struct CGPoint { double x1; double x2; })arg1;
- (void)tap:(struct CGPoint { double x1; double x2; })arg1 pressure:(double)arg2;
- (void)tap:(struct CGPoint { double x1; double x2; })arg1 pressure:(double)arg2 radius:(double)arg3;
- (void)tap:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2;
- (void)tapToWakeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (CAMediaTimingFunction *)touchCurveFunction;
- (void)touchDown:(struct CGPoint { double x1; double x2; })arg1;
- (void)touchDown:(struct CGPoint { double x1; double x2; })arg1 touchCount:(unsigned long long)arg2;
- (void)touchDownAtPoints:(struct CGPoint { double x1; double x2; }*)arg1 touchCount:(unsigned long long)arg2;
- (void)touchDownAtPoints:(struct CGPoint { double x1; double x2; }*)arg1 touchCount:(unsigned long long)arg2 pressure:(double)arg3;
- (void)touchDownAtPoints:(struct CGPoint { double x1; double x2; }*)arg1 touchCount:(unsigned long long)arg2 pressure:(double)arg3 radius:(double)arg4;
- (void)touchDownAtPoints:(struct CGPoint { double x1; double x2; }*)arg1 touchCount:(unsigned long long)arg2 radius:(double)arg3;
- (long long)touchFrequency;
- (void)touchTapDown:(struct CGPoint { double x1; double x2; })arg1;

@end

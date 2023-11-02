
@protocol RCPPencilEventStreamComposer <RCPBaseEventStreamComposer>

@required

- (void)hover:(struct CGPoint { double x1; double x2; })arg1 withZPosition:(double)arg2;
- (void)hoverAtLocation:(struct CGPoint { double x1; double x2; })arg1 withDuration:(double)arg2;
- (void)hoverAtLocation:(struct CGPoint { double x1; double x2; })arg1 withDuration:(double)arg2 withZPosition:(double)arg3;
- (void)hoverToTap:(struct CGPoint { double x1; double x2; })arg1 withZPosition:(double)arg2;
- (void)hoverToTapAtLocation:(struct CGPoint { double x1; double x2; })arg1 withDuration:(double)arg2;
- (void)hoverToTapAtLocation:(struct CGPoint { double x1; double x2; })arg1 withDuration:(double)arg2 withZPosition:(double)arg3;
- (void)stylusBarrelDoubleTap;

@end

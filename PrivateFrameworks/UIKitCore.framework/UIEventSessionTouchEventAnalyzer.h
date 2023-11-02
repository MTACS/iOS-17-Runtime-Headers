
@interface UIEventSessionTouchEventAnalyzer : NSObject

+ (double)squaredDistanceBetweenPoint:(struct CGPoint { double x1; double x2; })arg1 andPoint:(struct CGPoint { double x1; double x2; })arg2;

- (id)checkifGestureComplete:(id)arg1;
- (id)completeGesture:(id)arg1;
- (long long)determineWindowSectionWithLocationInWindow:(struct CGPoint { double x1; double x2; })arg1 withWindowBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)didPointerClickWithTrackpadFingerDownCount:(long long)arg1 withLocationInWindow:(struct CGPoint { double x1; double x2; })arg2 withWindowBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)didPointerHoverWithTrackpadFingerDownCount:(long long)arg1 withLocationInWindow:(struct CGPoint { double x1; double x2; })arg2 withWindowBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)didTouchWithID:(id)arg1 withPhase:(long long)arg2 withType:(long long)arg3 withLocationInWindow:(struct CGPoint { double x1; double x2; })arg4 withWindowBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 withTrackpadFingerDownCount:(long long)arg6;
- (id)init;

@end


@protocol BNPanGestureProxyDelegate <NSObject>

@required

- (struct CGPoint { double x1; double x2; })gestureRecognizerProxy:(id <BNPanGestureProxy>)arg1 locationForTouch:(UITouch *)arg2 inCoordinateSpace:(id <UICoordinateSpace>)arg3;
- (struct CGPoint { double x1; double x2; })gestureRecognizerProxy:(id <BNPanGestureProxy>)arg1 translationInCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (struct CGPoint { double x1; double x2; })gestureRecognizerProxy:(id <BNPanGestureProxy>)arg1 velocityInCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (struct CGPoint { double x1; double x2; })gestureRecognizerProxy:(id <BNPanGestureProxy>)arg1 visualTranslationInCoordinateSpace:(id <UICoordinateSpace>)arg2;

@end

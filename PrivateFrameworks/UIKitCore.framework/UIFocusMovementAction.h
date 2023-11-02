
@interface UIFocusMovementAction : BSAction

@property (nonatomic, readonly) _UIFocusMovementInfo *focusMovementInfo;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } focusedFrame;
@property (nonatomic, readonly) _UIFocusInputDeviceInfo *inputDeviceInfo;
@property (nonatomic, readonly) bool shouldPerformHapticFeedback;

- (long long)UIActionType;
- (id)focusMovementInfo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })focusedFrame;
- (id)initWithFocusMovementInfo:(id)arg1;
- (id)initWithFocusMovementInfo:(id)arg1 inputDeviceInfo:(id)arg2 shouldPerformHapticFeedback:(bool)arg3;
- (id)initWithFocusMovementInfo:(id)arg1 inputDeviceInfo:(id)arg2 shouldPerformHapticFeedback:(bool)arg3 focusedFrameInSceneCoordinateSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)inputDeviceInfo;
- (bool)shouldPerformHapticFeedback;

@end

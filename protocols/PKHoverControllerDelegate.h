
@protocol PKHoverControllerDelegate <NSObject>

@optional

- (void)hoverController:(PKHoverController *)arg1 didBegin:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg2;
- (void)hoverController:(PKHoverController *)arg1 didUpdate:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg2;
- (void)hoverController:(PKHoverController *)arg1 holdGestureMeanInputPoint:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg2 latestInputPoint:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg3;
- (void)hoverController:(PKHoverController *)arg1 intentionalHoverWithDuration:(double)arg2;
- (bool)hoverController:(PKHoverController *)arg1 shouldBeActiveAt:(struct CGPoint { double x1; double x2; })arg2;
- (void)hoverControllerDidEnd:(PKHoverController *)arg1;
- (void)hoverControllerDidLift:(PKHoverController *)arg1;
- (void)hoverControllerHoldGestureEnded:(PKHoverController *)arg1;

@end


@protocol CSCoverSheetViewTransitioning <CSCoverSheetParticipating>

@required

- (void)transitionSource:(id <CSCoverSheetViewTransitionSource>)arg1 didEndWithContext:(struct { double x1; struct { struct { double x_1_2_1; bool x_1_2_2; } x_2_1_1; struct { double x_2_2_1; bool x_2_2_2; } x_2_1_2; } x2; long long x3; })arg2;
- (void)transitionSource:(id <CSCoverSheetViewTransitionSource>)arg1 didUpdateTransitionWithContext:(struct { double x1; struct { struct { double x_1_2_1; bool x_1_2_2; } x_2_1_1; struct { double x_2_2_1; bool x_2_2_2; } x_2_1_2; } x2; long long x3; })arg2;
- (void)transitionSource:(id <CSCoverSheetViewTransitionSource>)arg1 willBeginWithType:(long long)arg2;

@end

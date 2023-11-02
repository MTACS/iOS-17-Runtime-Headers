
@protocol CSCoverSheetViewTransitionSource <CSCoverSheetParticipating>

@required

- (void)cancelTransition;
- (bool)isTransitioning;
- (struct { double x1; struct { struct { double x_1_2_1; bool x_1_2_2; } x_2_1_1; struct { double x_2_2_1; bool x_2_2_2; } x_2_1_2; } x2; long long x3; })transitionContext;

@end

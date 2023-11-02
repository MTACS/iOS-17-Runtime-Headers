
@protocol PXSubjectTrackingViewDelegate <NSObject>

@required

- (NUComposition *)composition;
- (void)interactionBegan;
- (UIView *)newFocusStatusBadge;
- (UIView *)newTrackingViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 initialState:(long long)arg2;
- (void)objectTrackingFinishedWithSuccess:(bool)arg1;
- (void)objectTrackingStartedAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForFocusStateBadge:(UIView *)arg1;
- (void)setMessage:(NSString *)arg1 forFocusStateBadge:(UIView *)arg2;
- (void)setTrackingInProgressTextForFocusStateBadge:(UIView *)arg1;
- (void)subjectFocusStateDidChange:(long long)arg1 forBadge:(UIView *)arg2 focusedDisparity:(double)arg3;
- (void)subjectTrackingStateDidChange:(long long)arg1 forView:(UIView *)arg2 animated:(bool)arg3;
- (void)trackedObjectWasUpdatedAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 shouldStop:(bool*)arg2;
- (void)trackingWasEditedAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })unadjustedTimeForPlayerTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end

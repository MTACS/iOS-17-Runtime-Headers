
@protocol PXFocusTimelineController <NSObject>

@required

- (void)didUpdateFocusEventsWithTimes:(NSArray *)arg1;
- (void)enableFocusTimeline:(bool)arg1;
- (void)enableUIForCinematographyScriptLoad:(bool)arg1;
- (void)objectTrackingFinishedWithSuccess:(bool)arg1;
- (void)objectTrackingStartedAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)resetTimeline;
- (void)showFocusTimeline:(bool)arg1;
- (void)updateFocusTimeline;
- (void)updateFocusTimelineWithEvent:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 userInitiated:(bool)arg2 shouldAnimate:(bool)arg3;
- (void)updateFocusTimelineWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)updateObjectTrackingProgressAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 shouldStop:(bool*)arg2;

@end

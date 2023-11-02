
@protocol PXFocusTimelineViewDelegate <NSObject>

@required

- (NSString *)axDescriptionForFocusEventATime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)focusTimeline:(PXFocusTimelineView *)arg1 presentAction:(PXFocusTimelineAction *)arg2 locationInTimeline:(struct CGPoint { double x1; double x2; })arg3;
- (void)focusTimeline:(PXFocusTimelineView *)arg1 updateTrackingProgressShouldStop:(bool*)arg2;
- (void)hideFocusTimelineActions:(PXFocusTimelineView *)arg1;

@end

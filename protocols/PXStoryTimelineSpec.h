
@protocol PXStoryTimelineSpec

@required

- (NSIndexSet *)allowedTransitionKinds;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })fixedSegmentDuration;
- (long long)layoutDirection;
- (double)nUpDividerWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (struct CGSize { double x1; double x2; })viewportSize;
- (bool)wantsTitles;

@end

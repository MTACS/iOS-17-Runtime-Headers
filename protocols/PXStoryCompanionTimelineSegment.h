
@protocol PXStoryCompanionTimelineSegment

@required

- (NSArray *)assets;
- (<PXStoryCompanionTimelineSegmentTransition> *)orderOutTransition;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })preferredDuration;

@end

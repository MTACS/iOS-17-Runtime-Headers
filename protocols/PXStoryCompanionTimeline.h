
@protocol PXStoryCompanionTimeline

@required

- (<PXStoryCompanionColorEffect> *)colorGradingEffect;
- (NSString *)diagnosticDescription;
- (long long)numberOfSegments;
- (<PXStoryCompanionTimelineSegment> *)segmentAtIndex:(long long)arg1;

@end

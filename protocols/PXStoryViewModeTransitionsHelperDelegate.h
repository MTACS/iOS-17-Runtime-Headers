
@protocol PXStoryViewModeTransitionsHelperDelegate <NSObject>

@required

- (PXRegionOfInterest *)transitionsHelper:(PXStoryViewModeTransitionsHelper *)arg1 regionOfInterestForTransition:(PXStoryViewModeTransition *)arg2;
- (PXStoryTimelineLayoutSnapshot *)transitionsHelper:(PXStoryViewModeTransitionsHelper *)arg1 timelineLayoutSnapshotForViewMode:(long long)arg2;
- (void)transitionsHelperNeedsUpdate:(PXStoryViewModeTransitionsHelper *)arg1;

@end


@protocol PUPinchedTileTrackerDelegate <PUInteractiveTileTrackerDelegate>

@optional

- (PUTileLayoutInfo *)pinchedTiledTracker:(PUPinchedTileTracker *)arg1 finalLayoutInfoForTileWithLayoutInfo:(PUTileLayoutInfo *)arg2;
- (double)pinchedTiledTracker:(PUPinchedTileTracker *)arg1 initialAspectRatioForTileWithLayoutInfo:(PUTileLayoutInfo *)arg2;

@end

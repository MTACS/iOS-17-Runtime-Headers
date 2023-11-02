
@protocol PUInteractiveTileTrackerDelegate <NSObject>

@optional

- (void)interactiveTileTracker:(PUInteractiveTileTracker *)arg1 didStopTrackingTileController:(PUTileController *)arg2;
- (void)interactiveTileTracker:(PUInteractiveTileTracker *)arg1 willStartTrackingTileController:(PUTileController *)arg2;

@end

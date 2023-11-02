
@protocol VKCameraController <NSObject>

@required

- (double)altitude;
- (struct AnimationRunner { }*)animationRunner;
- (bool)canZoomInForTileSize:(long long)arg1;
- (bool)canZoomOutForTileSize:(long long)arg1;
- (struct { double x1; double x2; })centerCoordinate;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (double)distanceFromCenterCoordinate;
- (double)heading;
- (bool)isFullyPitched;
- (bool)isPitched;
- (bool)isRotated;
- (struct MapDataAccess { }*)mapDataAccess;
- (GEOMapRegion *)mapRegion;
- (GEOMapRegion *)mapRegionIgnoringEdgeInsets;
- (double)maxPitch;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
- (double)minPitch;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
- (double)pitch;
- (struct RunLoopController { }*)runLoopController;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1;
- (void)setDistanceFromCenterCoordinate:(double)arg1;
- (void)setHeading:(double)arg1;
- (void)setPitch:(double)arg1;
- (long long)tileSize;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;

@end

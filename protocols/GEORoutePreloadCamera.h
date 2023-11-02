
@protocol GEORoutePreloadCamera <NSObject>

@required

- (GEOTileKeyList *)implicateAssetMetadataTilesForCoordinate:(struct { double x1; double x2; })arg1 size:(double)arg2;
- (void)implicateTilesForCoordinate:(struct { double x1; double x2; })arg1 route:(GEOComposedRoute *)arg2 nearestRoutePointIdx:(double)arg3 stepNearManeuever:(bool)arg4 into:(NSMutableDictionary *)arg5 stepSize:(double)arg6 maneuverSize:(double)arg7 tileSetStyles:(NSDictionary *)arg8;

@end

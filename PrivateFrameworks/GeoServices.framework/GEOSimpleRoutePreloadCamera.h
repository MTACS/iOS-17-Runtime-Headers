
@interface GEOSimpleRoutePreloadCamera : NSObject <GEORoutePreloadCamera>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)implicateAssetMetadataTilesForCoordinate:(struct { double x1; double x2; })arg1 size:(double)arg2;
- (void)implicateTilesForCoordinate:(struct { double x1; double x2; })arg1 route:(id)arg2 nearestRoutePointIdx:(double)arg3 stepNearManeuever:(bool)arg4 into:(id)arg5 stepSize:(double)arg6 maneuverSize:(double)arg7 tileSetStyles:(id)arg8;

@end

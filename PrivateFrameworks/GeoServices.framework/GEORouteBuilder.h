
@interface GEORouteBuilder : NSObject

+ (id)_cellularCoverageForGeoWaypointRoute:(id)arg1 coordinates:(id)arg2;
+ (void)_componentsForGeoWaypointRoute:(id)arg1 initializerData:(id)arg2 coordinates:(id)arg3 custodian:(id)arg4 outLegs:(out id*)arg5 outSegments:(out id*)arg6 outSteps:(out id*)arg7;
+ (id)_composedRouteLegForStartStep:(id)arg1 endStep:(id)arg2 startSegment:(id)arg3 endSegment:(id)arg4 custodian:(id)arg5 geoRouteLeg:(id)arg6 legIndex:(unsigned long long)arg7 origin:(id)arg8 destination:(id)arg9 arrivalParameters:(id)arg10 legLength:(double)arg11;
+ (id)_composedRouteSegmentForStartStep:(id)arg1 andEndStep:(id)arg2 segmentIndex:(unsigned long long)arg3 andCustodian:(id)arg4;
+ (id)_composedRouteStepWithTransportType:(int)arg1 andCustodian:(id)arg2 geoRouteLeg:(id)arg3 forGeoStep:(id)arg4 withStepIndex:(unsigned long long)arg5 startRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg6 endRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg7 maneuverStartRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg8;
+ (id)_composedRouteStepWithTransportType:(int)arg1 andCustodian:(id)arg2 geoRouteLeg:(id)arg3 forGeoStep:(id)arg4 withStepIndex:(unsigned long long)arg5 stepStartPointIndex:(unsigned long long)arg6 legStartPointIndex:(unsigned long long)arg7;
+ (id)_coordinatesForGeoWaypointRoute:(id)arg1;
+ (id)_guidanceEventsForGeoWaypointRoute:(id)arg1 legs:(id)arg2 steps:(id)arg3 coordinates:(id)arg4;
+ (bool)_isGuidanceEventAtEndOfLeg:(int)arg1;
+ (id)_segmentForStepIndex:(unsigned long long)arg1 withSegments:(id)arg2;
+ (id)_unpackedPointsDataForGeoRoute:(id)arg1;
+ (id)_visualInfosForGuidanceEvents:(id)arg1 steps:(id)arg2 coordinates:(id)arg3;
+ (id)buildMapRegionFromPointSections:(id)arg1;
+ (id)buildPointSectionsWithSteps:(id)arg1 segments:(id)arg2 coordinates:(id)arg3;
+ (id)outputForGeoWaypointRoute:(id)arg1 initializerData:(id)arg2 custodian:(id)arg3;
+ (id)segmentForPointIndex:(unsigned long long)arg1 withSegments:(id)arg2 andSteps:(id)arg3;
+ (unsigned long long)segmentIndexForPointIndex:(unsigned long long)arg1 withSegments:(id)arg2;
+ (unsigned long long)stepIndexForPointIndex:(unsigned long long)arg1 withSteps:(id)arg2;

@end

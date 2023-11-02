
@interface GEOMapFeatureMultiSegmentRoadFinder : GEOMapFeatureIntersectedRoadFinder

- (void)_recursivelyFindRoadSegmentsWithMuid:(unsigned long long)arg1 segments:(id)arg2 directionality:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)_roadForRoadSegments:(id)arg1;
- (id)findConnectedSegmentsForRoad:(id)arg1 directionality:(unsigned long long)arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findConnectedSegmentsForRoads:(id)arg1 directionality:(unsigned long long)arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;

@end

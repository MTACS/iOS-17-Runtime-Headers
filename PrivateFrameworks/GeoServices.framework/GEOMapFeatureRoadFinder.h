
@interface GEOMapFeatureRoadFinder : GEOMapFeatureAccessFinder {
    GEOMapFeatureMultiSegmentRoadFinder * _multiSegmentRoadFinder;
}

- (void).cxx_destruct;
- (id)_findUnjoinedRoadsNear:(struct { double x1; double x2; })arg1 radius:(double)arg2 handler:(id /* block */)arg3;
- (id)_findUnjoinedRoadsNear:(struct { double x1; double x2; })arg1 radius:(double)arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)_multiSegmentRoadFinder;
- (id)findRoadWithID:(unsigned long long)arg1 handler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)findRoadWithMuid:(unsigned long long)arg1 nearCoordinate:(struct { double x1; double x2; })arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findRoadsNear:(struct { double x1; double x2; })arg1 radius:(double)arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;

@end

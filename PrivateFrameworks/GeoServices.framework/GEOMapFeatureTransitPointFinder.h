
@interface GEOMapFeatureTransitPointFinder : GEOMapFeatureAccessFinder

- (id)_geometryTileFinder;
- (id)_tileFinder;
- (id)_transitPointForFeature:(void*)arg1;
- (id)findGeometryForTransitPoint:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)findParentOfTransitPoint:(id)arg1 handler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)findTransitAccessPointsForStation:(id)arg1 handler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)findTransitPointWithID:(unsigned long long)arg1 near:(struct { double x1; double x2; })arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findTransitPointsOfType:(unsigned long long)arg1 near:(struct { double x1; double x2; })arg2 radius:(double)arg3 handler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)findTransitPointsWithParent:(id)arg1 handler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;

@end

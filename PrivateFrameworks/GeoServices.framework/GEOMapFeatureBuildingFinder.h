
@interface GEOMapFeatureBuildingFinder : GEOMapFeatureAccessFinder

- (struct vector<GeoCodecsVectorTilePoint, std::allocator<GeoCodecsVectorTilePoint>> { struct GeoCodecsVectorTilePoint {} *x1; struct GeoCodecsVectorTilePoint {} *x2; struct __compressed_pair<GeoCodecsVectorTilePoint *, std::allocator<GeoCodecsVectorTilePoint>> { struct GeoCodecsVectorTilePoint {} *x_3_1_1; } x3; })_verticesFromTile:(id)arg1 forBuildingIndex:(unsigned int)arg2;
- (id)findBuildingsNear:(struct { double x1; double x2; })arg1 radius:(double)arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findBuildingsNear:(struct { double x1; double x2; })arg1 radius:(double)arg2 tileSetStyle:(int)arg3 handler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;

@end

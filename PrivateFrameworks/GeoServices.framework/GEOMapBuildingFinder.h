
@interface GEOMapBuildingFinder : GEOMapRequest {
    struct { 
        double latitude; 
        double longitude; 
    }  _centerCoordinate;
    double  _radius;
    GEOMapTileFinder * _tileFinder;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)findBuildingsWithHandler:(id /* block */)arg1;
- (id)initWithMap:(id)arg1 centerCoordinate:(struct { double x1; double x2; })arg2 radius:(double)arg3;

@end

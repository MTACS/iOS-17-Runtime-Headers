
@interface GEOMapEdgeFinder : GEOMapRequest {
    struct { 
        double x; 
        double y; 
    }  _centerPoint;
    NSMutableSet * _edgeBuilders;
    id /* block */  _edgeHandler;
    double  _mapRadius;
    GEOMapTileFinder * _tileFinder;
}

@property (nonatomic, copy) id /* block */ edgeHandler;
@property (nonatomic, readonly) GEOMapAccess *map;

- (void).cxx_destruct;
- (void)_buildersInTile:(id)arg1 localPoint:(const void*)arg2 localRadiusSqr:(float)arg3 localSearch:(const void*)arg4 handler:(id /* block */)arg5;
- (bool)_checkEdgeForDuplicates:(const void*)arg1;
- (void)cancel;
- (id /* block */)edgeHandler;
- (void)findEdges:(id /* block */)arg1;
- (id)initWithMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;
- (id)map;
- (void)setEdgeHandler:(id /* block */)arg1;

@end

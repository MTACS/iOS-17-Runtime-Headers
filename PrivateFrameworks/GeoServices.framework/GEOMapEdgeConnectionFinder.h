
@interface GEOMapEdgeConnectionFinder : GEOMapRequest {
    NSMutableArray * _builders;
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    struct GeoCodecsConnectivityJunction { } * _junction;
    GEOMapAccess * _map;
    GEOVectorTile * _tile;
    GEOMapTileFinder * _tileFinder;
}

- (void).cxx_destruct;
- (void)_findConnections:(id /* block */)arg1 incoming:(bool)arg2;
- (void)cancel;
- (void)findConnectionsIn:(id /* block */)arg1;
- (void)findConnectionsOut:(id /* block */)arg1;
- (id)initWithMap:(id)arg1 tile:(id)arg2 junction:(struct GeoCodecsConnectivityJunction { }*)arg3 coordinate:(struct { double x1; double x2; })arg4;

@end

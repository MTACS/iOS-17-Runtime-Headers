
@interface GEOMapEdgeRoadConnectionFinder : GEOMapEdgeConnectionFinder

- (void)_findConnectedEdges:(id /* block */)arg1 incoming:(bool)arg2;
- (void)_findConnections:(id /* block */)arg1 incoming:(bool)arg2;
- (bool)_isRoadEdgeEqual:(id)arg1 other:(id)arg2;

@end

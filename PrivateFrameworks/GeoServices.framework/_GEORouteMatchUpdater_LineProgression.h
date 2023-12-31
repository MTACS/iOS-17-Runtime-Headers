
@interface _GEORouteMatchUpdater_LineProgression : _GEORouteMatchUpdater {
    GEOComposedTransitTripRouteStep * _alightStep;
    GEOComposedTransitTripRouteStep * _boardStep;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _startRouteCoordinate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithTransitRouteMatcher:(id)arg1 tripSegment:(id)arg2;
- (unsigned long long)priority;
- (bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;

@end

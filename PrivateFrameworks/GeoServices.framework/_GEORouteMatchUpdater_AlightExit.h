
@interface _GEORouteMatchUpdater_AlightExit : _GEORouteMatchUpdater {
    GEOPBTransitStation * _alightStation;
    GEOComposedRouteStep * _alightStep;
    GEOPBTransitStop * _alightStop;
    GEOComposedRouteStep * _postAlightStep;
    GEOComposedRouteStep * _postAlightWalkingStep;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeCoordinateAlightStation;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_isLocationNearAlightNode:(id)arg1;
- (id)initWithTransitRouteMatcher:(id)arg1 alightStep:(id)arg2;
- (bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;

@end
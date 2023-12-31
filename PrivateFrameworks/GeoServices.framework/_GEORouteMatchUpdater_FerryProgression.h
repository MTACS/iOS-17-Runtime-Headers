
@interface _GEORouteMatchUpdater_FerryProgression : _GEORouteMatchUpdater {
    struct { 
        double latitude; 
        double longitude; 
    }  _alightLocationCoordinate;
    GEOComposedRouteStep * _alightStep;
    GEOComposedRouteStep * _boardStep;
    unsigned long long  _progressionCount;
    double  _startProgressionDistanceToDestination;
}

- (void).cxx_destruct;
- (id)initWithRoute:(id)arg1 tripSegment:(id)arg2;
- (unsigned long long)priority;
- (bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;

@end

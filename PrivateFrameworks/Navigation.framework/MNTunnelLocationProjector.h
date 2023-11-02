
@interface MNTunnelLocationProjector : NSObject {
    MNActiveRouteInfo * _currentRouteInfo;
    <MNTunnelLocationProjectorDelegate> * _delegate;
    bool  _isProjecting;
    MNLocation * _lastUnprojectedLocation;
    NSDate * _lastUnprojectedLocationDate;
    double  _locationOverdueTimeoutForTunnel;
    NSTimer * _locationUpdateOverdueTimer;
    NSArray * _tunnelRanges;
}

@property (nonatomic) <MNTunnelLocationProjectorDelegate> *delegate;
@property (nonatomic, readonly) bool isProjecting;

- (void).cxx_destruct;
- (void)_locationUpdateOverdueTimerFired:(id)arg1;
- (id)_projectedLocationFrom:(id)arg1 timeInterval:(double)arg2 tunnelRange:(struct GEOPolylineCoordinateRange { struct { unsigned int x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg3;
- (struct { unsigned int x1; float x2; })_projectedRouteCoordinateFrom:(struct { unsigned int x1; float x2; })arg1 timeInterval:(double)arg2 tunnelRange:(struct GEOPolylineCoordinateRange { struct { unsigned int x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)_resetTimerWithTimeout:(double)arg1;
- (struct GEOPolylineCoordinateRange { struct { unsigned int x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; })_tunnelRangeForRouteCoordinate:(struct { unsigned int x1; float x2; })arg1;
- (id)_tunnelRanges;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isProjecting;
- (void)setDelegate:(id)arg1;
- (void)stop;
- (void)updateForRouteInfo:(id)arg1;
- (void)updateLocation:(id)arg1;

@end

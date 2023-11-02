
@interface ATXInformationHeuristicRefreshLocationTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    <ATXLocationManagerProtocol> * _locationManager;
    bool  _previouslyInsideRegion;
    bool  _previouslyOutsideRegion;
    CLCircularRegion * _regionToMonitor;
    id  _token;
}

+ (bool)_locationIsStaleOrNotAccurateEnough:(id)arg1 now:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_run;
- (void)_start;
- (void)_stop;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnteringLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radiusInMeters:(double)arg2;
- (id)initWithExitingLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radiusInMeters:(double)arg2;
- (id)initWithLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 notifyOnEntry:(bool)arg2 notifyOnExit:(bool)arg3 radiusInMeters:(double)arg4;
- (id)initWithLocationManager:(id)arg1 regionToMonitor:(id)arg2;
- (void)updateWithInjectedLocationManager:(id)arg1;

@end

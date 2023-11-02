
@interface _MNLocationSimulationData : NSObject {
    GEOApplicationAuditToken * _auditToken;
    unsigned long long  _currentLegIndex;
    double  _currentTime;
    bool  _endAtFinalDestination;
    MNActiveRouteInfo * _initialRouteInfo;
    bool  _isChinaShifted;
    MNLocation * _lastLocation;
    struct { 
        unsigned int index; 
        float offset; 
    }  _lastRouteCoordinate;
    NSString * _requestingAppIdentifier;
    MNActiveRouteInfo * _routeInfo;
    long long  _simulationType;
    double  _speedOverride;
}

@property (nonatomic, retain) GEOApplicationAuditToken *auditToken;
@property (nonatomic) unsigned long long currentLegIndex;
@property (nonatomic) double currentTime;
@property (nonatomic) bool endAtFinalDestination;
@property (nonatomic, retain) MNActiveRouteInfo *initialRouteInfo;
@property (nonatomic) bool isChinaShifted;
@property (nonatomic, retain) MNLocation *lastLocation;
@property (nonatomic) struct { unsigned int x1; float x2; } lastRouteCoordinate;
@property (nonatomic, retain) NSString *requestingAppIdentifier;
@property (nonatomic, retain) MNActiveRouteInfo *routeInfo;
@property (nonatomic, readonly) GEOComposedRoute *routeToFollow;
@property (nonatomic) long long simulationType;
@property (nonatomic) double speedOverride;

- (void).cxx_destruct;
- (id)auditToken;
- (unsigned long long)currentLegIndex;
- (double)currentTime;
- (bool)endAtFinalDestination;
- (id)initialRouteInfo;
- (bool)isChinaShifted;
- (id)lastLocation;
- (struct { unsigned int x1; float x2; })lastRouteCoordinate;
- (id)requestingAppIdentifier;
- (id)routeInfo;
- (id)routeToFollow;
- (void)setAuditToken:(id)arg1;
- (void)setCurrentLegIndex:(unsigned long long)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setEndAtFinalDestination:(bool)arg1;
- (void)setInitialRouteInfo:(id)arg1;
- (void)setIsChinaShifted:(bool)arg1;
- (void)setLastLocation:(id)arg1;
- (void)setLastRouteCoordinate:(struct { unsigned int x1; float x2; })arg1;
- (void)setRequestingAppIdentifier:(id)arg1;
- (void)setRouteInfo:(id)arg1;
- (void)setSimulationType:(long long)arg1;
- (void)setSpeedOverride:(double)arg1;
- (long long)simulationType;
- (double)speedOverride;

@end


@interface MNSimulatedLocationGenerator : NSObject <_MNLocationSimulationStateDelegate> {
    _MNLocationSimulationState * _currentState;
    _MNLocationSimulationData * _data;
}

@property (nonatomic, retain) GEOApplicationAuditToken *auditToken;
@property (nonatomic, readonly) long long currentStateType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool endAtFinalDestination;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MNLocation *lastLocation;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; } lastRouteCoordinate;
@property (nonatomic, retain) NSString *requestingAppIdentifier;
@property (nonatomic) double speedOverride;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateStartState;
- (id)auditToken;
- (void)changeState:(id)arg1;
- (long long)currentStateType;
- (bool)endAtFinalDestination;
- (id)initWithRouteInfo:(id)arg1 simulationType:(long long)arg2;
- (id)lastLocation;
- (struct { unsigned int x1; float x2; })lastRouteCoordinate;
- (id)nextSimulatedLocationWithElapsedTime:(double)arg1;
- (id)requestingAppIdentifier;
- (void)setAuditToken:(id)arg1;
- (void)setEndAtFinalDestination:(bool)arg1;
- (void)setRequestingAppIdentifier:(id)arg1;
- (void)setSpeedOverride:(double)arg1;
- (double)speedOverride;
- (void)updatePosition:(double)arg1;
- (void)updateWithRouteInfo:(id)arg1;

@end

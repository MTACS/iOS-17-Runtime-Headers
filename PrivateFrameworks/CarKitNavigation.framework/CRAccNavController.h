
@interface CRAccNavController : NSObject {
    CRAccNavComponent * _component;
    <CRAccNavControllerDelegate> * _delegate;
    CRAccNavRouteGuidance * _routeGuidance;
    CRAccNavInfoCache * _sentLaneGuidances;
    CRAccNavInfoCache * _sentManeuvers;
}

@property (nonatomic, readonly) CRAccNavComponent *component;
@property (nonatomic, readonly) <CRAccNavControllerDelegate> *delegate;
@property (nonatomic, retain) CRAccNavRouteGuidance *routeGuidance;
@property (nonatomic, retain) CRAccNavInfoCache *sentLaneGuidances;
@property (nonatomic, retain) CRAccNavInfoCache *sentManeuvers;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (void)_sendNavInfoFromIndex:(id)arg1 fromSource:(id)arg2 cache:(id)arg3;
- (id)component;
- (id)delegate;
- (void)delegateUpdatedLaneGuidance:(id)arg1;
- (void)delegateUpdatedLaneGuidances;
- (void)delegateUpdatedManeuver:(id)arg1;
- (void)delegateUpdatedManeuvers;
- (void)delegateUpdatedRouteGuidance;
- (id)description;
- (id)initWithComponent:(id)arg1 delegate:(id)arg2;
- (void)resendInfo;
- (void)reset;
- (id)routeGuidance;
- (void)sendInfo;
- (void)sendLaneGuidances;
- (void)sendManeuvers;
- (id)sentLaneGuidances;
- (id)sentManeuvers;
- (void)setRouteGuidance:(id)arg1;
- (void)setSentLaneGuidances:(id)arg1;
- (void)setSentManeuvers:(id)arg1;
- (id)uuid;

@end

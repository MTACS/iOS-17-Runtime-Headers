
@interface GEONavigationServerPeer : GEONavdPeer <GEONavigationServerRequestStateXPCInterface> {
    GEONavigationServer * _delegate;
    bool  _hasEntitlement;
    bool  _wantsRoutes;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) GEONavigationServer *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasEntitlement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsRoutes;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (bool)hasEntitlement;
- (void)requestActiveRouteDetailsData;
- (void)requestETAUpdate;
- (void)requestGuidanceState;
- (void)requestNavigationVoiceVolume;
- (void)requestPositionFromDestination;
- (void)requestPositionFromManeuver;
- (void)requestPositionFromSign;
- (void)requestRideSelections;
- (void)requestRoute;
- (void)requestRouteSummary;
- (void)requestStepIndex;
- (void)requestStepNameInfo;
- (void)requestTransitSummary;
- (void)requestUpdates;
- (void)setDelegate:(id)arg1;
- (void)setHasEntitlement:(bool)arg1;
- (void)setWantsRoutes:(bool)arg1;
- (bool)wantsRoutes;

@end

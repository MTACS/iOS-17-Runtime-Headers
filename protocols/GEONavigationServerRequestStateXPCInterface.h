
@protocol GEONavigationServerRequestStateXPCInterface <NSObject>

@required

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
- (void)setWantsRoutes:(bool)arg1;

@end

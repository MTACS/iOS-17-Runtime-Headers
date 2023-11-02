
@protocol MNNavigationServiceProxy <NSObject>

@required

- (void)acceptReroute:(bool)arg1 forTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)advanceToNextLeg;
- (void)changeOfflineState:(unsigned long long)arg1;
- (void)changeTransportType:(int)arg1 route:(GEOComposedRoute *)arg2;
- (void)changeUserOptions:(MNUserOptions *)arg1;
- (void)checkinForNavigationService:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, char *, void*
- (void)disableNavigationCapability:(unsigned long long)arg1;
- (void)enableNavigationCapability:(unsigned long long)arg1;
- (void)forceReroute;
- (void)insertWaypoint:(GEOComposedWaypoint *)arg1;
- (void)interfaceHashesWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, unsigned long long, void*
- (void)pauseRealtimeUpdatesForSubscriber:(NSUUID *)arg1;
- (void)recordPedestrianTracePath:(NSString *)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(NSData *)arg1;
- (void)removeWaypointAtIndex:(unsigned long long)arg1;
- (void)repeatCurrentGuidanceWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)repeatCurrentTrafficAlertWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)rerouteWithWaypoints:(NSArray *)arg1;
- (void)resumeOriginalDestination;
- (void)resumeRealtimeUpdatesForSubscriber:(NSUUID *)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setGuidanceType:(unsigned long long)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;
- (void)setRoutesForPreview:(NSArray *)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (void)setSimulationPosition:(double)arg1;
- (void)setSimulationSpeedMultiplier:(double)arg1;
- (void)setSimulationSpeedOverride:(double)arg1;
- (void)setTraceIsPlaying:(bool)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (void)startNavigationWithDetails:(void *)arg1 activeBlock:(void *)arg2; // needs 2 arg types, found 6: MNStartNavigationDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigationWithReason:(unsigned long long)arg1;
- (void)switchToRoute:(MNActiveRouteInfo *)arg1;
- (void)updateDestination:(GEOComposedWaypoint *)arg1;
- (void)vibrateForPrompt:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end


@interface GEODirectionsService : NSObject {
    GEODirectionsRequester * _directionsRequester;
}

@property (nonatomic, readonly) NSURL *directionsURL;

+ (bool)_canCurrentVoiceLanguageHandleWrittenText;
+ (bool)canSpeakWrittenAddresses;
+ (bool)canSpeakWrittenPlaceNames;
+ (id)sharedService;

- (void).cxx_destruct;
- (id)_directionsRequestForRequestParameters:(id)arg1 waypoints:(id)arg2;
- (id)_feedbackForRequestParameters:(id)arg1;
- (id)_geoOriginalWaypointRouteForRequestParameters:(id)arg1 waypoints:(id)arg2;
- (id)_geoOriginalWaypointRouteForResumeAfterPause:(id)arg1 waypoints:(id)arg2;
- (id)_geoWaypointTypedForWaypoint:(id)arg1 voiceLanguage:(id)arg2;
- (int)_routePurposeForRequestParameters:(id)arg1;
- (void)_setMiscFieldsOnDirectionsRequest:(id)arg1 forRequestParameters:(id)arg2;
- (bool)_shouldAllowTimepointForRequestType:(unsigned long long)arg1;
- (void)_submitDirectionsRequest:(id)arg1 waypoints:(id)arg2 traits:(id)arg3 auditToken:(id)arg4 useBackgroundURL:(bool)arg5 requestPriority:(long long)arg6 allowRetry:(bool)arg7 handler:(id /* block */)arg8;
- (void)_verifyWaypointsForDirectionsRequest:(id)arg1 requestParameters:(id)arg2;
- (id)_waypointsForModifyWaypointsRequest:(id)arg1;
- (id)_waypointsForRequestParameters:(id)arg1;
- (id)_waypointsForRerouteWithWaypointsRequest:(id)arg1;
- (id)directionsURL;
- (id)init;
- (id)requestDirections:(id)arg1 handler:(id /* block */)arg2;
- (id)requestRoutes:(id)arg1 handler:(id /* block */)arg2;

@end

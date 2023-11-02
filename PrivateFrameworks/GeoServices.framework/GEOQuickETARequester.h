
@interface GEOQuickETARequester : NSObject {
    GEODirectionsRequest * _directionsETARequest;
    NSString * _loggingFacility;
    GEOQuickETARequest * _request;
    GEOETARequest * _simpleETARequest;
}

+ (bool)requestETAFromOrigin:(id)arg1 toDestinations:(id)arg2 transportType:(int)arg3 timepoint:(struct GEOTimepoint { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg4 includeDistance:(bool)arg5 commonOptions:(id)arg6 automobileOptions:(id)arg7 walkingOptions:(id)arg8 transitOptions:(id)arg9 cyclingOptions:(id)arg10 auditToken:(id)arg11 handler:(id /* block */)arg12 callbackQueue:(id)arg13;
+ (bool)requestTrafficAndETAFromWaypoint:(id)arg1 toWaypoints:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 handler:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)_calculateRoutingETAWithHandler:(id /* block */)arg1;
- (void)_calculateRoutingETAWithSummary:(bool)arg1 handler:(id /* block */)arg2;
- (void)_calculateSimpleETAFromAPI:(bool)arg1 WithHandler:(id /* block */)arg2;
- (void)_calculateSimpleETAFromAPI:(bool)arg1 includeSummary:(bool)arg2 WithHandler:(id /* block */)arg3;
- (void)calculateETAFromAPI:(bool)arg1 WithResponseHandler:(id /* block */)arg2;
- (void)calculateETAFromAPI:(bool)arg1 includeSummary:(bool)arg2 WithResponseHandler:(id /* block */)arg3;
- (void)calculateETAWithResponseHandler:(id /* block */)arg1;
- (void)cancel;
- (id)initWithRequest:(id)arg1;

@end

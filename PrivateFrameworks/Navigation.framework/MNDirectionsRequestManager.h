
@interface MNDirectionsRequestManager : NSObject {
    GEODirectionsService * _directionsService;
    NSMutableDictionary * _pendingRequests;
    geo_isolater * _pendingRequestsIsolater;
}

- (void).cxx_destruct;
- (void)_logRoutes:(id)arg1 error:(id)arg2;
- (void)_requestDirectionsFromTraceWithPath:(id)arg1 feedback:(id)arg2 auditToken:(id)arg3 finishedHandler:(id /* block */)arg4;
- (void)_requestServerDirections:(id)arg1 preferredRoute:(id)arg2 withIdentifier:(id)arg3 auditToken:(id)arg4 finishedHandler:(id /* block */)arg5;
- (void)cancelDirectionsRequestWithIdentifier:(id)arg1;
- (id)init;
- (void)requestDirections:(id)arg1 withIdentifier:(id)arg2 auditToken:(id)arg3 finishedHandler:(id /* block */)arg4;

@end

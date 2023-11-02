
@interface VNHomologousObservationClassCompoundRequest : VNCompoundRequest {
    NSMapTable * _requestsClassMapping;
}

- (void).cxx_destruct;
- (void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2;
- (id)initWithSubrequests:(id)arg1;
- (id)originalRequestsOfClass:(Class)arg1;

@end

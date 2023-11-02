
@interface _GEOMapServiceSpatialEventLookupTicket : _GEOPlaceRequestTicket <GEOMapServiceSpatialEventLookupTicket> {
    NSArray * _parameters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *parameters;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

+ (unsigned long long)maxParametersCount;

- (void).cxx_destruct;
- (void)callCompletion:(id /* block */)arg1 onQueue:(id)arg2 withResult:(id)arg3 error:(id)arg4;
- (void)createSpatialEventLookupResultForLookupResults:(id)arg1 usingPlaces:(id)arg2 completion:(id /* block */)arg3 queue:(id)arg4;
- (id)eventsForEventLookupResponses:(id)arg1 usingIdentifierToEventMap:(id)arg2;
- (void)handleResponse:(id)arg1 completion:(id /* block */)arg2 queue:(id)arg3;
- (id)initWithRequest:(id)arg1 parameters:(id)arg2 traits:(id)arg3;
- (id)mapItemIdentifiersToPOIEventsMapForPlaces:(id)arg1;
- (id)parameters;
- (id)spatialEventLookupResultsFromResponse:(id)arg1;
- (void)submitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 queue:(id)arg3;
- (void)submitWithHandler:(id /* block */)arg1 queue:(id)arg2;

@end

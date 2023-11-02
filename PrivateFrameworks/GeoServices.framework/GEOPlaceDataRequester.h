
@interface GEOPlaceDataRequester : GEOServiceRequester <GEOPlaceDataRequester>

+ (id)sharedInstance;

- (id)_validateResponse:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (id)init;
- (void)startWithRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 completionHandler:(id /* block */)arg6;

@end

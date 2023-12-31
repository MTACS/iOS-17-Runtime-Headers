
@interface GEOGeocodeRequester : GEOServiceRequester

+ (id)sharedGeocodeRequester;

- (void)batchReverseGeocode:(id)arg1 auditToken:(id)arg2 success:(id /* block */)arg3 networkActivity:(id /* block */)arg4 error:(id /* block */)arg5;
- (void)cancelBatchReverseGeocode:(id)arg1;

@end
